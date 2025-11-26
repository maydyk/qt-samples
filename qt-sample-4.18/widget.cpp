#include "widget.h"

Widget::Widget(QWidget* parent)
: QWidget(parent) {

}

Widget::~Widget() {

}

bool Widget::event(QEvent* e) {
    if (e->type() == QEvent::KeyPress) {
        qDebug() << "Нажата кнопка на клавиатуре";
        QKeyEvent* k = static_cast<QKeyEvent*> (e);
        qDebug() << "Код:" << k->key() << "текст:" << k->text();
    } else if (e->type() == QEvent::Close) {
        qDebug() << "Окно закрывается!";
    } else if (e->type() == QEvent::MouseButtonPress) {
        qDebug() << "Щелчок мышью";
        QMouseEvent* m = static_cast<QMouseEvent*>(e);
        qDebug() << "Координаты:" << m->position();
    }

    return QWidget::event(e);
}