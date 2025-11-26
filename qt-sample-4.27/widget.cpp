#include "widget.h"

Widget::Widget(QWidget* parent)
: QWidget(parent) {

}

Widget::~Widget() {

}

void Widget::closeEvent(QCloseEvent* e) {
    QMessageBox::StandardButton result;
    result = QMessageBox::question(
        this,
        "Подтверждение закрытия окна",
        "Закрыть окно?",
        QMessageBox::Yes | QMessageBox::No,
        QMessageBox::No
    );

    if (QMessageBox::Yes == result) {
        e->accept();
        QWidget::closeEvent(e);
    } else {
        e->ignore();
    }
}
