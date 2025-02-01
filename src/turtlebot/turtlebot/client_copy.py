import rclpy
from rclpy.node import Node
from rclpy.executors import MultiThreadedExecutor
from ros_study_msgs.srv import MySrv
from ros_study_msgs.msg import MyMsg

import tkinter as tk
from tkinter import ttk, messagebox
from queue import Queue
import threading
import time
import sys

class Orderclient(Node):
    def __init__(self, tableno, event_queue):
        super().__init__(f'Order_client_{tableno}')
        self.client = self.create_client(MySrv, 'Ordertable')
        
        self.tableno = tableno
        self.event_queue = event_queue
        self.a = 0
        self.b = 0
        self.c = 0
        self.subscription = self.create_subscription(
            MyMsg,
            f'/Ordercancel{str(tableno)}',
            self.cancel_order,
            10)

    def send_request(self):
        if not self.client.wait_for_service(timeout_sec=1.0):
            self.event_queue.put(("error", "Service not available", self.tableno))
            return

        request = MySrv.Request()
        request.a = self.a
        request.b = self.b
        request.c = self.c
        request.tblno = self.tableno

        future = self.client.call_async(request)
        future.add_done_callback(self.handle_response)

        # 초기화
        self.a, self.b, self.c = 0, 0, 0
        self.event_queue.put(("update", {"a": self.a, "b": self.b, "c": self.c}, self.tableno))

    def handle_response(self, future):
        response = future.result()
        if response.success:
            message = f"주문번호: {response.ordno}\n예상 조리시간: {response.timer}"
            self.event_queue.put(("info", message, self.tableno))
        else:
            self.event_queue.put(("error", response.feedback, self.tableno))

    def cancel_order(self, msg):
        self.get_logger().info(f'확인')
        if msg.cancel:
            self.event_queue.put(("error", "주문이 취소되었습니다.", self.tableno))

class OrderGui:
    def __init__(self, root, tableno, event_queue, client):
        self.window = tk.Toplevel(root)
        self.tableno = tableno
        self.event_queue = event_queue
        self.client = client
        self.window.title(f"Table {self.tableno} Order")
        self.window.geometry("400x200")

        # Tkinter GUI 설정
        style = ttk.Style()
        style.configure("TButton", font=("Arial", 10), padding=5)
        style.configure("TLabel", font=("Arial", 12))

        main_frame = ttk.Frame(self.window, padding="10")
        main_frame.grid(row=0, column=0, sticky=(tk.W, tk.E, tk.N, tk.S))

        self.a_var = tk.DoubleVar(value=0.0)
        ttk.Label(main_frame, text="짜장").grid(row=0, column=1, pady=10)
        ttk.Button(main_frame, text="-", command=self.a_minus, width=3).grid(row=1, column=0)
        ttk.Label(main_frame, textvariable=self.a_var, width=4, anchor="center").grid(row=1, column=1)
        ttk.Button(main_frame, text="+", command=self.a_plus, width=3).grid(row=1, column=2)

        self.b_var = tk.DoubleVar(value=0.0)
        ttk.Label(main_frame, text="짬뽕").grid(row=0, column=4, pady=10)
        ttk.Button(main_frame, text="-", command=self.b_minus, width=3).grid(row=1, column=3)
        ttk.Label(main_frame, textvariable=self.b_var, width=4, anchor="center").grid(row=1, column=4)
        ttk.Button(main_frame, text="+", command=self.b_plus, width=3).grid(row=1, column=5)

        self.c_var = tk.DoubleVar(value=0.0)
        ttk.Label(main_frame, text="탕수육").grid(row=0, column=7, pady=10)
        ttk.Button(main_frame, text="-", command=self.c_minus, width=3).grid(row=1, column=6)
        ttk.Label(main_frame, textvariable=self.c_var, width=4, anchor="center").grid(row=1, column=7)
        ttk.Button(main_frame, text="+", command=self.c_plus, width=3).grid(row=1, column=8)

        ttk.Button(main_frame, text="주문", command=self.client.send_request, style="TButton").grid(row=3, column=0, columnspan=9, pady=20)

    # 버튼 명령
    def a_minus(self): self.client.a = max(0, self.client.a - 1); self.a_var.set(self.client.a)
    def a_plus(self): self.client.a += 1; self.a_var.set(self.client.a)
    def b_minus(self): self.client.b = max(0, self.client.b - 1); self.b_var.set(self.client.b)
    def b_plus(self): self.client.b += 1; self.b_var.set(self.client.b)
    def c_minus(self): self.client.c = max(0, self.client.c - 1); self.c_var.set(self.client.c)
    def c_plus(self): self.client.c += 1; self.c_var.set(self.client.c)

    def update_fields(self, data):
        self.a_var.set(data["a"])
        self.b_var.set(data["b"])
        self.c_var.set(data["c"])

def process_events(event_queue, guis):
    while not event_queue.empty():
        event, message, tableno = event_queue.get()
        gui = guis[tableno - 1]
        if event == "error":
            messagebox.showerror(f"Error at Table {tableno}", message)
        elif event == "info":
            messagebox.showinfo(f"Table {tableno} - Info", message)
        elif event == "update":
            gui.update_fields(message)

def main():
    rclpy.init()
    root = tk.Tk()
    root.withdraw()  # 메인 윈도우 숨기기
    event_queue = Queue()
    clients, guis = [], []

    # 클라이언트와 GUI 생성
    for i in range(1, 10):
        client = Orderclient(tableno=i, event_queue=event_queue)
        gui = OrderGui(root, tableno=i, event_queue=event_queue, client=client)
        clients.append(client)
        guis.append(gui)

    # MultiThreadedExecutor를 사용하여 여러 노드 처리
    executor = MultiThreadedExecutor()
    for client in clients:
        executor.add_node(client)

    # 이벤트 처리 스레드
    def event_loop():
        while rclpy.ok():
            executor.spin_once()
            process_events(event_queue, guis)
            time.sleep(0.1)  # 약간의 대기 시간 추가

    # 별도의 스레드에서 이벤트 루프 실행
    threading.Thread(target=event_loop, daemon=True).start()

    try:
        root.mainloop()  # Tkinter 이벤트 루프 시작
    except KeyboardInterrupt:
        pass
    finally:
        if rclpy.ok():
            rclpy.shutdown()
        root.quit()  # Tkinter 종료
        sys.exit(0)  # 프로그램 정상 종료

if __name__ == '__main__':
    main()
