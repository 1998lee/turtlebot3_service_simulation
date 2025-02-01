import rclpy
from rclpy.node import Node
from ros_study_msgs.srv import MySrv
from ros_study_msgs.msg import MyMsg
import tkinter as tk 
from tkinter import ttk
import threading


class Orderserver(Node):
    def __init__(self, main_frame):
        super().__init__('Order_server')
        self.ordno = 0
        self.srv = self.create_service(MySrv, 'Ordertable', self.Order_callback)
        self.publisher = self.create_publisher(MyMsg, 'Ordercancel', 10)
        self.get_logger().info('Order Server is ready')
        
        # 초기 변수 설정
        self.order_history = {i: [] for i in range(1, 9)}
        self.order_check = None
        self.main_frame = main_frame
        self.a_var = tk.StringVar(value="주문현황")
        
        # GUI 생성
        self.create_gui()

    def create_gui(self):
        # 메인 프레임에 UI 요소 추가
        self.main_frame_frame = ttk.Frame(self.main_frame, padding="10")
        self.main_frame_frame.grid(row=0, column=0, sticky=(tk.W, tk.E, tk.N, tk.S))
        
        # 테이블 버튼 생성
        for i in range(1, 9):
            ttk.Button(
                self.main_frame_frame, 
                text=f"테이블\n{i}번", 
                command=lambda i=i: self.Call_table(i), 
                width=10
            ).grid(row=(i - 1) // 3, column=(i - 1) % 3, pady=5, padx=5)

        # 상태 표시 라벨과 주문 취소 버튼 추가
        ttk.Label(self.main_frame_frame, textvariable=self.a_var, width=30).grid(row=10, column=0, columnspan=3)
        ttk.Button(self.main_frame_frame, text="주문취소", command=self.order_cancel).grid(row=11, column=0, columnspan=3)

    def Call_table(self, i):
        self.tableno = i
        num = sum(self.order_history[self.tableno])
        if num > 0:
            menu = self.order_history[self.tableno]
            self.a_var.set(f"Table: {self.tableno}\n주문번호: {self.ordno}\n주문 내역\n짜장:{menu[0]}개\n짬뽕:{menu[1]}개\n탕수육:{menu[2]}개")
        else:
            self.a_var.set("테이블의 주문 내역이 없습니다.")

    def order_cancel(self):
        msg = MyMsg()
        if 9 > self.tableno >= 1:
            msg.tableno = int(self.tableno)
            msg.cancel = True
            self.publisher.publish(msg)
            self.a_var.set(f"주문취소 전송: {msg.tableno}테이블")
            self.get_logger().info(f"주문취소 전송: {msg.tableno}테이블")
            self.order_history[self.tableno] = []
        else:
            self.get_logger().info("테이블을 선택해 주세요.")

    def Order_callback(self, request, response):
        # 팝업 생성
        popup = tk.Toplevel(self.main_frame)
        popup.title("주문접수")
        popup.geometry("300x200")

        # 값 초기화
        a, b, c = request.a, request.b, request.c
        tableno = int(request.tblno)
        self.order_history[tableno] = [a, b, c]

        # 버튼 핸들러
        def set_success():
            self.order_check = True
            if a + b + c > 0:
                self.ordno += 1
                self.timer = a * 2 + b * 4 + c * 6
                response.success = True
                response.ordno = self.ordno
                response.timer = self.timer
                self.get_logger().info(f"테이블번호: {tableno}\n짜장: {a}개, 짬뽕: {b}개, 탕수육: {c}개")
            else:
                response.success = False
                response.feedback = "주문 접수가 취소되었습니다.\n수량 재확인"
            popup.destroy()


        def close_cancel():
            self.order_check = True
            response.success = False
            response.feedback = "주문 접수가 취소되었습니다."
            popup.destroy()
            

        ttk.Label(popup, text="주문이 접수되었습니다.", font=("Arial", 12)).pack(pady=10)
        ttk.Label(popup, text=f"Table: {tableno}\n짜장: {a}개, 짬뽕: {b}개, 탕수육: {c}개", font=("Arial", 10)).pack(pady=10)
        ttk.Button(popup, text="접수", command=set_success).pack(side=tk.LEFT, padx=20, pady=10)
        ttk.Button(popup, text="닫기/취소", command=close_cancel).pack(side=tk.RIGHT, padx=20, pady=10)



        

        
        

def ros_spin(order_server):
    rclpy.spin(order_server)

def main():
    rclpy.init()
    main_frame = tk.Tk()
    main_frame.title("Order Server")
    main_frame.geometry("500x500")

    # Orderserver 인스턴스 생성 및 스레드에서 ROS 스핀 실행
    order_server = Orderserver(main_frame)
    ros_thread = threading.Thread(target=ros_spin, args=(order_server,))
    ros_thread.start()

    # GUI 메인 루프 실행
    try:
        main_frame.mainloop()
    except KeyboardInterrupt:
        order_server.get_logger().info('Server stopped cleanly')
    except Exception as e:
        order_server.get_logger().error(f'Server stopped unexpectedly: {e}')
    finally:
        order_server.destroy_node()
        rclpy.shutdown()
        ros_thread.join()

if __name__ == '__main__':
    main()

"""

import rclpy
from rclpy.node import Node
from ros_study_msgs.srv import MySrv
from ros_study_msgs.msg import MyMsg
import tkinter as tk 
from tkinter import ttk
import threading


class Orderserver(Node):
    def __init__(self, main_frame):
        super().__init__('Order_server')
        self.ordno = 0
        self.srv = self.create_service(MySrv, 'Ordertable', self.Order_callback)
        self.publisher = self.create_publisher(MyMsg, 'Ordercancel', 10)
        self.get_logger().info('Order Server is ready')
        
        # 초기 변수 설정
        self.order_history = {i: [] for i in range(1, 9)}
        self.order_check = None
        self.main_frame = main_frame
        self.a_var = tk.StringVar(value="주문현황")
        
        # GUI 생성
        self.create_gui()

    def create_gui(self):
        # 메인 프레임에 UI 요소 추가
        self.main_frame_frame = ttk.Frame(self.main_frame, padding="10")
        self.main_frame_frame.grid(row=0, column=0, sticky=(tk.W, tk.E, tk.N, tk.S))
        
        # 테이블 버튼 생성
        for i in range(1, 9):
            ttk.Button(
                self.main_frame_frame, 
                text=f"테이블\n{i}번", 
                command=lambda i=i: self.Call_table(i), 
                width=10
            ).grid(row=(i - 1) // 3, column=(i - 1) % 3, pady=5, padx=5)

        # 상태 표시 라벨과 주문 취소 버튼 추가
        ttk.Label(self.main_frame_frame, textvariable=self.a_var, width=30).grid(row=10, column=0, columnspan=3)
        ttk.Button(self.main_frame_frame, text="주문취소", command=self.order_cancel).grid(row=11, column=0, columnspan=3)

    def Call_table(self, i):
        self.tableno = i
        num = sum(self.order_history[self.tableno])
        if num > 0:
            menu = self.order_history[self.tableno]
            self.a_var.set(f"Table: {self.tableno}\n주문번호: {self.ordno}\n주문 내역\n짜장:{menu[0]}개\n짬뽕:{menu[1]}개\n탕수육:{menu[2]}개")
        else:
            self.a_var.set("테이블의 주문 내역이 없습니다.")

    def order_cancel(self):
        msg = MyMsg()
        if 9 > self.tableno >= 1:
            msg.tableno = int(self.tableno)
            msg.cancel = True
            self.publisher.publish(msg)
            self.a_var.set(f"주문취소 전송: {msg.tableno}테이블")
            self.get_logger().info(f"주문취소 전송: {msg.tableno}테이블")
        else:
            self.get_logger().info("테이블을 선택해 주세요.")

    def Order_callback(self, request, response):
        # 팝업을 메인 스레드에서 띄운 후, 작업은 다른 스레드에서 처리
        self.main_frame.after(0, self.create_popup, request, response)
        return response

    def create_popup(self, request, response):
        # 팝업 생성
        popup = tk.Toplevel(self.main_frame)
        popup.title("주문접수")
        popup.geometry("300x200")

        # 값 초기화
        a, b, c = request.a, request.b, request.c
        tableno = int(request.tblno)
        self.order_history[tableno] = [a, b, c]

        # 버튼 핸들러
        def set_success():
            self.order_check = True
            if a + b + c > 0:
                self.ordno += 1
                self.timer = a * 2 + b * 4 + c * 6
                response.success = True
                response.ordno = self.ordno
                response.timer = self.timer
                self.get_logger().info(f"테이블번호: {tableno}\n짜장: {a}개, 짬뽕: {b}개, 탕수육: {c}개")
            else:
                response.success = False
                response.feedback = "주문 접수가 취소되었습니다."
            popup.destroy()

        def close_cancel():
            response.success = False
            response.feedback = "주문 접수가 취소되었습니다."
            popup.destroy()

        ttk.Label(popup, text="주문이 접수되었습니다.", font=("Arial", 12)).pack(pady=10)
        ttk.Label(popup, text=f"Table: {tableno}\n짜장: {a}개, 짬뽕: {b}개, 탕수육: {c}개", font=("Arial", 10)).pack(pady=10)
        ttk.Button(popup, text="접수", command=set_success).pack(side=tk.LEFT, padx=20, pady=10)
        ttk.Button(popup, text="닫기/취소", command=close_cancel).pack(side=tk.RIGHT, padx=20, pady=10)

        # 팝업 창이 메인 스레드에서 열리도록 처리


def ros_spin(order_server):
    rclpy.spin(order_server)

def main():
    rclpy.init()
    main_frame = tk.Tk()
    main_frame.title("Order Server")
    main_frame.geometry("500x500")

    # Orderserver 인스턴스 생성 및 스레드에서 ROS 스핀 실행
    order_server = Orderserver(main_frame)
    ros_thread = threading.Thread(target=ros_spin, args=(order_server,))
    ros_thread.start()

    # GUI 메인 루프 실행
    try:
        main_frame.mainloop()
    except KeyboardInterrupt:
        order_server.get_logger().info('Server stopped cleanly')
    except Exception as e:
        order_server.get_logger().error(f'Server stopped unexpectedly: {e}')
    finally:
        order_server.destroy_node()
        rclpy.shutdown()
        ros_thread.join()

if __name__ == '__main__':
    main()
"""