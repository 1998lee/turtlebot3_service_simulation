import sys
import rclpy
from rclpy.node import Node
from rclpy.executors import MultiThreadedExecutor
from ros_study_msgs.srv import MySrv
from ros_study_msgs.msg import MyMsg
import tkinter as tk
from tkinter import ttk
import threading
from threading import Event
from nav2_msgs.action import NavigateToPose
from nav2_msgs.srv import SetInitialPose
from rclpy.action.client import GoalStatus
from rclpy.action import ActionClient
from std_msgs.msg import String
from geometry_msgs.msg import PointStamped,PoseWithCovarianceStamped
from geometry_msgs.msg import Pose, Point, Quaternion
import time
from playsound import playsound
import matplotlib.pyplot as plt
from matplotlib.backends.backend_tkagg import FigureCanvasTkAgg
import pymysql
from rclpy.qos import QoSDurabilityPolicy
from rclpy.qos import QoSHistoryPolicy
from rclpy.qos import QoSProfile
from rclpy.qos import QoSReliabilityPolicy


font_path = '/usr/share/fonts/truetype/nanum/NanumGothicCoding.ttf'
font_name = plt.matplotlib.font_manager.FontProperties(fname=font_path).get_name()

plt.rcParams['font.family'] = font_name

class Orderserver(Node):
    def __init__(self, main_frame):
        super().__init__('Order_server')
        self.ordno = []
        self.declare_parameter('qos_depth', 10)
        qos_depth = self.get_parameter('qos_depth').value

        QOS_RKL10V = QoSProfile(
             reliability=QoSReliabilityPolicy.RELIABLE,
             history=QoSHistoryPolicy.KEEP_LAST,
             depth=qos_depth,
             durability=QoSDurabilityPolicy.VOLATILE)
        for i in range(10):
            self.ordno.append(0)
        self.srv = self.create_service(MySrv, 'Ordertable', self.Order_callback)
        self.publisher = []
        for i in range(10):
            publisher = self.create_publisher(MyMsg, f'Ordercancel{i}', QOS_RKL10V )
            self.publisher.append(publisher)
        self.connect_db = connect_database()
        self.get_logger().info('Order Server is ready')
        self.tableno = 0
        self.deliveryno = 0
        self.current_pose = [0.0,0.0]
    
        self.total_a = 0
        self.total_b = 0
        self.total_c = 0

        self.button_text = [tk.StringVar() for _ in range(10)]

        # 초기 변수 설정
        self.order_history = {i: [] for i in range(1, 10)}
        self.main_frame = main_frame
        self.a_var = tk.StringVar(value="주문현황")

        #목적지 좌표 넣을 리스트 생성
        #self.goal_poses = [[0,0] for i in range(9)]
        self.goal_poses = [[1.57,1.16],[1.57,0.0],[1.57,-1.09],[0.5,1.16],[0.5,0],[0.6,-1.09],[-0.614,1.16],[-0.614,1.16],[-0.614,1.16]]
        #액션 초기 설정
        self.init_pose = [-2.0, 0.0, 0.0, 1.0] 
        #액션 클라
        self.navigate_to_pose_action_client = ActionClient(self, NavigateToPose, 'navigate_to_pose')
        #서비스 클라
        self.set_initial_pose_service_client = self.create_client(SetInitialPose, '/set_initial_pose')
        while not self.set_initial_pose_service_client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Service /set_initial_pose not available, waiting again...')
        self.set_initial_pose(*self.init_pose)
        self.pose_subscription = self.create_subscription(
            PoseWithCovarianceStamped,
            '/amcl_pose',  # amcl 토픽 구독 현재위치
            self.pose_callback,
            10
        )

        # 그래프를 표시할 영역 생성
        self.fig, self.ax = plt.subplots(figsize=(4, 3))
        self.graph_canvas = FigureCanvasTkAgg(self.fig, master=self.main_frame)
        self.graph_canvas.get_tk_widget().grid(row=0, column=3, rowspan=10, padx=10, pady=10)
        
        # GUI 생성
        self.create_gui()
        self.draw_graph()  # 초기 그래프 그리기


        # 응답 대기 이벤트
        self.response_event = Event()

        # GUI 생성
        self.create_gui()

    #그래프
    def draw_graph(self):
        self.ax.clear()
        # 메뉴 주문량 데이터
        menu_names = ["짜장", "짬뽕", "탕수육"]
        order_counts = [self.total_a, self.total_b, self.total_c]
        
        # 그래프 그리기
        self.ax.bar(menu_names, order_counts, color=['skyblue', 'red', 'green'])
        self.ax.set_title("메뉴별 주문 현황")
        self.ax.set_xlabel("메뉴")
        self.ax.set_ylabel("주문 수량")
        self.ax.set_ylim(0, 30)  # y축 초기값 0~30


        # 그래프 업데이트
        self.graph_canvas.draw()

    #배달버튼 누르면 실행 > navigate to pose send goal에 위치전달?
    def go_button_clicked(self):
        if self.tableno >=1:
            num = sum(self.order_history[self.tableno])
            if num > 0:
                self.navigate_to_pose_send_goal(self.tableno)
                self.deliveryno = self.tableno
                self.tableno = 0
                self.cancel_button.state(["disabled"])
                self.delivery_button.state(["disabled"])
            else:
                self.a_var.set("주문이 없습니다.")
        else:
            self.a_var.set("테이블을 선택해 주세요.")

    def pose_callback(self, msg):
        # 현재 위치를 업데이트
        self.current_pose = [msg.pose.pose.position.x, msg.pose.pose.position.y]
        self.get_logger().info(f"배달로봇 현재 위치 : {self.current_pose[0],self.current_pose[1]}")
    
    def play_alram(self):
    # 사운드 파일 경로 지정 (예: 'sound.mp3')
        playsound('src/turtlebot/992754475CF6EAE216.mp3')

    def play_sound(self):
    # 사운드 파일 경로 지정 (예: 'sound.mp3')
        playsound('src/turtlebot/baedalyi-minjog.mp3')


    #액션 초기이동 서비스?
    def set_initial_pose(self, x,y,z,w):
        req = SetInitialPose.Request()
        req.pose.header.frame_id = 'map'
        req.pose.pose.pose.position = Point(x=x, y=y, z=0.0)
        req.pose.pose.pose.orientation = Quaternion(x=0.0, y=0.0, z=z, w=w)
        req.pose.pose.covariance = [0.1, 0.0, 0.0, 0.0, 0.0, 0.1,
                              0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
                              0.0, 0.0, 0.1, 0.0, 0.0, 0.0,
                              0.0, 0.0, 0.0, 0.01, 0.0, 0.0,
                              0.0, 0.0, 0.0, 0.0, 0.01, 0.0,
                              0.0, 0.0, 0.0, 0.0, 0.0, 0.01]

        future = self.set_initial_pose_service_client.call_async(req)
        
        if future.result() is not None:
            message = "[INFO] Initial pose set successfully"
        else:
            message = ''
            #message = "[WARN] Failed to set initial pose"
            
        self.a_var.set(message)
        
        return future.result()
    
    def navigate_to_pose_send_goal(self, i):
        wait_count = 1
        while not self.navigate_to_pose_action_client.wait_for_server(timeout_sec=0.1):
            if wait_count > 3:
                message = "[WARN] Navigate action server is not available."
                self.a_var.set(message)
                return False
            wait_count += 1
            
        goal_msg = NavigateToPose.Goal()
        goal_msg.pose.header.frame_id = "map"
        if i == 0 :
            goal_msg.pose.pose.position.x = 0.0
            goal_msg.pose.pose.position.y = 0.0
        else:
            goal_msg.pose.pose.position.x = self.goal_poses[i-1][0]
            goal_msg.pose.pose.position.y = self.goal_poses[i-1][1]
        goal_msg.pose.pose.position.z = 0.0
        goal_msg.pose.pose.orientation.x = 0.0
        goal_msg.pose.pose.orientation.y = 0.0
        goal_msg.pose.pose.orientation.z = 0.0
        goal_msg.pose.pose.orientation.w = 1.0

        self.send_goal_future = self.navigate_to_pose_action_client.send_goal_async(
            goal_msg,
            feedback_callback=self.navigate_to_pose_action_feedback)
        self.send_goal_future.add_done_callback(self.navigate_to_pose_action_goal)
        
        return True
    
    def navigate_to_pose_action_goal(self, future):
        goal_handle = future.result()
        if not goal_handle.accepted:
            message = "목적지 전송 실패."
            self.a_var.set(message)
            return

        message = f"로봇이 이동중입니다!"
        self.a_var.set(message)
        self.action_result_future = goal_handle.get_result_async()
        self.action_result_future.add_done_callback(self.navigate_to_pose_action_result)

    def navigate_to_pose_action_feedback(self, feedback_msg):
        action_feedback = feedback_msg.feedback
        # self.get_logger().info("Action feedback: {0}".format(action_feedback))

    def navigate_to_pose_action_result(self, future):
        action_status = future.result().status
        action_result = future.result().result
        self.pose_subscription
        pose_check = [self.current_pose[0],self.current_pose[1]]
        if action_status == GoalStatus.STATUS_SUCCEEDED:
            if -0.5<=pose_check[0]<=0.5 and -0.5<=pose_check[1]<=0.5:
                message = "배달 준비!"
                self.a_var.set(message)
                self.play_alram()
                return
            else:
                message = "배달 완료!"
                self.a_var.set(message)
                # 5초 대기 후 원점 이동
                self.order_history[self.deliveryno] = []
                text_content = f"테이블{self.deliveryno}"
                self.button_text[self.deliveryno].set(text_content)
                self.connect_db.change_delivery_info(self.ordno[self.deliveryno])
                time.sleep(5.0)
                self.navigate_to_pose_send_goal(0)
        else:
            message = f"[WARN] Action failed with status: {action_status}"
            self.a_var.set(message)

    #gui 생성
    def create_gui(self):
        self.main_frame_frame = ttk.Frame(self.main_frame, padding="10")
        self.main_frame_frame.grid(row=0, column=0, sticky=(tk.W, tk.E, tk.N, tk.S))

        for i in range(1, 10):
            self.button_text[i].set(f"테이블{i}")
            tk.Button(
                self.main_frame_frame,
                textvariable=self.button_text[i],
                command=lambda i=i: self.Call_table(i),
                width=10,
                height = 4,
                wraplength = 100
            ).grid(row=(i - 1) // 3, column=(i - 1) % 3, pady=5, padx=5)

            

        ttk.Label(self.main_frame_frame, textvariable=self.a_var, font = ("Arial",16,"bold") , width=30).grid(row=10, column=0, columnspan=3)
        #ttk.Button(self.main_frame_frame, text="주문취소", command=self.order_cancel).grid(row=11, column=0, columnspan=3)
        #ttk.Button(self.main_frame_frame, text="배달시작", command=self.go_button_clicked).grid(row=12, column=0, columnspan=3)        
        # "주문취소" 버튼 생성 후 grid() 호출
        self.cancel_button = ttk.Button(self.main_frame, text="주문취소", command=self.order_cancel, width=30)
        self.cancel_button.grid(row=12, column=0, pady=5, columnspan=3, sticky="s")
        self.cancel_button.state(["disabled"])  # 비활성화

        # "배달시작" 버튼 생성 후 grid() 호출
        self.delivery_button = ttk.Button(self.main_frame, text="배달시작", command=self.go_button_clicked, width=30)
        self.delivery_button.grid(row=12, column=1, pady=5, columnspan=3, sticky="s")
        self.delivery_button.state(["disabled"])  # 비활성화
        self.close_button = ttk.Button(self.main_frame, text="영업종료", command=self.close_order, width=30)
        self.close_button.grid(row=14, column=1, pady=5, columnspan=3, sticky='s')

    def Call_table(self, i):
        self.tableno = i
        num = sum(self.order_history[self.tableno])
        if num > 0:
            menu = self.order_history[self.tableno]
            self.a_var.set(f"Table: {self.tableno}\t주문번호: {self.ordno[self.tableno]}\n")
            self.cancel_button.state(["!disabled"])
            self.delivery_button.state(["!disabled"])
        else:
            self.a_var.set(f"Table: {self.tableno}\t주문 없음.")
            self.cancel_button.state(["disabled"])
            self.delivery_button.state(["disabled"])

    def order_cancel(self):
        msg = MyMsg()
        if 9 >= self.tableno >= 1:
            num = sum(self.order_history[self.tableno])
            if num > 0:
                msg.tableno = int(self.tableno)
                msg.cancel = True
                publisher = self.publisher[self.tableno - 1]
                publisher.publish(msg)

                self.a_var.set(f"주문취소 {msg.tableno}테이블")
                self.get_logger().info(f"주문취소 {msg.tableno}테이블")
                self.total_a -= self.order_history[self.tableno][0]
                self.total_b -= self.order_history[self.tableno][1]
                self.total_c -= self.order_history[self.tableno][2]
                text_content = f"테이블{self.tableno}"
                self.button_text[self.tableno].set(text_content)
                self.connect_db.change_confirm_info(self.ordno[self.tableno])
                self.draw_graph()
                self.order_history[self.tableno] = []
                self.tableno = 0
                self.cancel_button.state(["disabled"])
                self.delivery_button.state(["disabled"])
            else :
                self.a_var.set("주문이 없습니다.")
        else:
            self.a_var.set("테이블을 선택해 주세요.")

    def Order_callback(self, request, response):
        # 팝업을 메인 스레드에서 띄운 후, 작업은 다른 스레드에서 처리
        
        self.main_frame.after(0, self.create_popup, request, response)
        
        # 팝업 응답이 완료될 때까지 대기
        self.response_event.wait()
        self.response_event.clear()  # 이벤트를 초기화하여 재사용 가능하도록 함
        return response

    def create_popup(self, request, response):
        popup = tk.Toplevel(self.main_frame)
        popup.title("주문접수")
        popup.geometry("300x200")

        a, b, c = request.a, request.b, request.c
        tableno = int(request.tblno)
        self.order_history[tableno] = [a, b, c]
        
        def set_success():
            if a + b + c > 0:
                self.timer = a * 2 + b * 4 + c * 6
                response.success = True
                self.ordno[tableno] = self.connect_db.insert_data(tableno,a,b,c)
                response.ordno = self.ordno[tableno]
                response.timer = self.timer
                #그래프에 사용할 메뉴 주문수량
                self.total_a += a
                self.total_b += b
                self.total_c += c
                self.draw_graph()
                text_content = f"테이블{tableno}"
                if a>=1 :
                    text_content += f"\n짜장 : {a}개"
                if b>=1 :
                    text_content += f"\n짬뽕 : {b}개"
                if c>=1 :
                    text_content += f"\n탕수육 : {c}개"
                
                self.button_text[tableno].set(text_content)
                
                self.get_logger().info(f"테이블번호: {tableno}\n짜장: {a}개, 짬뽕: {b}개, 탕수육: {c}개")
                
            else:
                response.success = False
                response.feedback = "주문 접수가 취소되었습니다."
            popup.destroy()
            self.response_event.set()  # 응답 이벤트 완료 신호 전송

        def close_cancel():
            response.success = False
            response.feedback = "주문 접수가 취소되었습니다."
            popup.destroy()
            self.response_event.set()  # 응답 이벤트 완료 신호 전송        
        
        ttk.Label(popup, text="주문이 접수되었습니다.", font=("Arial", 12)).pack(pady=10)
        ttk.Label(popup, text=f"Table: {tableno}\n짜장: {a}개, 짬뽕: {b}개, 탕수육: {c}개", font=("Arial", 10)).pack(pady=10)
        ttk.Button(popup, text="접수", command=set_success).pack(side=tk.LEFT, padx=20, pady=10)
        ttk.Button(popup, text="닫기/취소", command=close_cancel).pack(side=tk.RIGHT, padx=20, pady=10)
        self.play_sound()

    def after_popup_wait(self, response):
        if response.success:
            self.get_logger().info("주문이 성공적으로 접수되었습니다.")
        else:
            self.get_logger().info("주문 접수가 취소되었습니다.")
    def close_order(self):
        result = self.connect_db.close()

class connect_database():
    def __init__(self):
        try:
            # 데이터베이스 서버에 연결
            self.db = pymysql.connect(host='127.0.0.1', user='tester2', password='root',
                                       port=3306 ,db='order_database', charset='utf8') 
            # 명령어를 실행하는 커서 객체 생성
            self.cursor = self.db.cursor()
            
            # 데이터베이스 내 테이블이 없으면 테이블 생성
            sql = """
            CREATE TABLE IF NOT EXISTS order_info(
                order_num INT AUTO_INCREMENT PRIMARY KEY,
                table_num INT NOT NULL,
                menu_a_count INT NOT NULL DEFAULT 0,
                menu_b_count INT NOT NULL DEFAULT 0,
                menu_c_count INT NOT NULL DEFAULT 0,
                confirm CHAR(1) NOT NULL DEFAULT 'O',
                delivery CHAR(1) NOT NULL DEFAULT 'X'
            );
            """
            # 명령어 실행
            self.cursor.execute(sql)
            # 변경사항 저장
            self.db.commit()
        except pymysql.MySQLError as e:
            print(f"Error occurred during database initialization: {e}")
            self.db.rollback()
    
    def insert_data(self, table_num, num_a, num_b, num_c):
        try:
            # 테이블에 주문된 메뉴의 수량 저장
            sql = '''INSERT INTO order_info (table_num, menu_a_count, menu_b_count, menu_c_count)
            VALUES (%s, %s, %s, %s)
            ON DUPLICATE KEY UPDATE
            menu_a_count = menu_a_count + VALUES(menu_a_count),
            menu_b_count = menu_b_count + VALUES(menu_b_count),
            menu_c_count = menu_c_count + VALUES(menu_c_count)
            '''
            values = (table_num, num_a, num_b, num_c)
            self.cursor.execute(sql, values)
            # 데이터베이스 변경사항 저장
            self.db.commit()

            # 마지막으로 삽입된 ID 반환
            self.cursor.execute("SELECT LAST_INSERT_ID()")
            order_num = self.cursor.fetchone()[0]
            return order_num  # 새로 생성된 order_num을 반환

        except pymysql.MySQLError as e:
            self.get_logger().info(f"Error occurred while inserting data: {e}")
            self.db.rollback()
            return None
    
    def change_confirm_info(self, order_num):
        try:
            # 주문 값 변경 (confirm = 'X'로 업데이트)
            sql = "UPDATE order_info SET confirm = 'X' WHERE order_num = (%s)"
            value = (order_num,)
            self.cursor.execute(sql, value)
            self.db.commit()
        except pymysql.MySQLError as e:
            self.get_logger().info(f"Error occurred while changing confirm info: {e}")
            self.db.rollback()
    
    def change_delivery_info(self, order_num):
        try:
            # 배달 값 변경 (delivery = 'O'로 업데이트)
            sql = "UPDATE order_info SET delivery = 'O' WHERE order_num = (%s)"
            value = (order_num,)
            self.cursor.execute(sql, value)
            self.db.commit()
        except pymysql.MySQLError as e:
            self.get_logger().info(f"Error occurred while changing delivery info: {e}")
            self.db.rollback()

    def close(self):
        # 데이터베이스 연결 종료
        try:
            if self.db:
                # 통계 진행
                sql = """SELECT
                COUNT(order_num) AS total_order,
                SUM(CASE WHEN delivery = 'O' THEN menu_a_count ELSE 0 END) AS total_a,
                SUM(CASE WHEN delivery = 'O' THEN menu_b_count ELSE 0 END) AS total_b,
                SUM(CASE WHEN delivery = 'O' THEN menu_c_count ELSE 0 END) AS total_c,
                SUM(CASE WHEN confirm = 'O' THEN 1 ELSE 0 END) AS confirm_suc,
                SUM(CASE WHEN delivery = 'O' THEN 1 ELSE 0 END) AS delivery_suc
                FROM order_info
                """
                self.cursor.execute(sql)
                result = self.cursor.fetchone()                
                total_order = result[0]
                menu_a = result[1]
                menu_b = result[2]
                menu_c = result[3]
                if result[4] == 0:
                    confirm = 0
                else:
                    confirm = (result[4] / total_order) * 100                
                if result[5] == 0:
                    delivery = 0
                else:
                    delivery = (result[5] / total_order) * 100                
                print(f"총 주문건수: {total_order}개")
                print(f"짜장: {menu_a}개")
                print(f"짬뽕: {menu_b}개")
                print(f"탕수육: {menu_c}개")
                print(f"주문 접수건수: {result[4]}개, 주문 완료률: {confirm:.2f}%")
                print(f"배달 완료건수: {result[5]}, 배달 완료률: {delivery:.2f}%")                # 초기화 진행
                sql = 'TRUNCATE TABLE order_info'
                self.cursor.execute(sql)                # 데이터 베이스 닫음
                self.cursor.close()
                self.db.close()        
        except pymysql.MySQLError as e:
            print(f"Error occurred while closing database connection: {e}")

def main():
    rclpy.init()
    main_frame = tk.Tk()
    main_frame.title("Order Server")
    main_frame.geometry("800x400")

    order_server = Orderserver(main_frame)
    executor = MultiThreadedExecutor()
    executor.add_node(order_server)

    ros_thread = threading.Thread(target=executor.spin)
    ros_thread.start()

    try:
        main_frame.mainloop()
    except KeyboardInterrupt:
        order_server.get_logger().info('Server stopped cleanly')
    except Exception as e:
        order_server.get_logger().error(f'Server stopped unexpectedly: {e}')
    finally:
        executor.shutdown()
        order_server.destroy_node()
        rclpy.shutdown()
        connect_database.close()
        ros_thread.join()

if __name__ == '__main__':
    main()
