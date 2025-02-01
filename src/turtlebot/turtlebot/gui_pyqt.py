import sys
from PyQt5.QtWidgets import QApplication, QWidget, QGridLayout, QVBoxLayout, QLabel, QPushButton, QGroupBox

class KitchenDisplay(QWidget):
    def __init__(self):
        super().__init__()

        # 윈도우 설정
        self.setWindowTitle("Kitchen Display")
        self.setGeometry(100, 100, 600, 400)

        # 메인 레이아웃 (그리드 레이아웃)
        self.layout = QGridLayout()

        # 테이블 8개를 관리하기 위한 그룹 박스 생성
        self.table_labels = []
        self.cancel_buttons = []
        self.done_buttons = []

        for i in range(8):  # 테이블 8개
            table_group_box = QGroupBox(f"Table {i+1}")
            table_layout = QVBoxLayout()  # QVBoxLayout 임포트 추가

            # 주문 상태 표시 레이블
            table_label = QLabel(f"Order for Table {i+1}: No Order", self)
            self.table_labels.append(table_label)
            table_layout.addWidget(table_label)

            # 주문 완료 버튼
            done_button = QPushButton("Order Done", self)
            done_button.clicked.connect(lambda _, i=i: self.mark_order_done(i))
            self.done_buttons.append(done_button)
            table_layout.addWidget(done_button)

            # 취소 버튼
            cancel_button = QPushButton("Cancel Order", self)
            cancel_button.clicked.connect(lambda _, i=i: self.cancel_order(i))
            self.cancel_buttons.append(cancel_button)
            table_layout.addWidget(cancel_button)

            # 그룹 박스에 레이아웃 적용
            table_group_box.setLayout(table_layout)

            # 그리드 레이아웃에 테이블 배치 (4x2 그리드)
            row = i // 4  # 행 계산
            col = i % 4   # 열 계산
            self.layout.addWidget(table_group_box, row, col)

        # 메인 레이아웃 설정
        self.setLayout(self.layout)

    def mark_order_done(self, table_index):
        # 주문 완료 버튼 클릭 시, 해당 테이블의 상태를 업데이트
        self.table_labels[table_index].setText(f"Order for Table {table_index + 1}: Completed")

    def cancel_order(self, table_index):
        # 취소 버튼 클릭 시, 해당 테이블의 상태를 초기화
        self.table_labels[table_index].setText(f"Order for Table {table_index + 1}: No Order")

    def update_order(self, table_index, order_text):
        # 테이블에 새로운 주문을 업데이트
        self.table_labels[table_index].setText(f"Order for Table {table_index + 1}: {order_text}")

def main():
    # PyQt5 애플리케이션 초기화
    app = QApplication(sys.argv)

    # 주방 디스플레이 생성
    kitchen_display = KitchenDisplay()

    # 몇 개의 주문 예시 (각각의 테이블에 새로운 주문을 설정)
    kitchen_display.update_order(0, "Pizza")
    kitchen_display.update_order(2, "Pasta")
    kitchen_display.update_order(4, "Burger")

    # 창을 표시
    kitchen_display.show()

    # 애플리케이션 실행
    sys.exit(app.exec_())

if __name__ == '__main__':
    main()
