#include "widget.h"

Widget::Widget(QWidget* parent)
: QWidget(parent) {

}

Widget::~Widget(){

}

void Widget::moveEvent(QMoveEvent* e) {
    qDebug() << Q_FUNC_INFO << e->pos().x() << e->pos().y();
    QWidget::moveEvent(e);
}

void Widget::resizeEvent(QResizeEvent* e) {
    qDebug() << Q_FUNC_INFO << e->size().width() << e->size().height();
    QWidget::resizeEvent(e);
}
