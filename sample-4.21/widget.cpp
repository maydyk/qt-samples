#include "widget.h"

Widget::Widget(QWidget* parent)
: QWidget{parent}
{
    btn1 = new QPushButton{"Полноэкранный режим"};
    btn2 = new QPushButton{"Нормальный режим"};
    vbox = new QVBoxLayout {};
    vbox->addWidget(btn1);
    vbox->addWidget(btn2);
    setLayout(vbox);

    QObject::connect(btn1, SIGNAL(clicked()), this, SLOT(showFullScreen()));
    QObject::connect(btn2, SIGNAL(clicked()), this, SLOT(showNormal()));
}

Widget::~Widget() {

}

void Widget::changeEvent(QEvent* e) {
    qDebug() << "Event type:" << e->type();
    if (e->type() == QEvent::WindowStateChange) {
        if (isMinimized()) {
            // Doesn't work!
            qDebug() << "Окно свёрнуто.";
        } else if (isMaximized()) {
            qDebug() << "Окно развёрнуто.";
        } else if (isFullScreen()) {
            qDebug() << "Полноэкранный режим.";
        } else if (isActiveWindow()) {
            qDebug() << "Окно в фокусе ввода.";
        }    
    }

    return QWidget::changeEvent(e);
}

void Widget::showEvent(QShowEvent* e) {
    qDebug() << "Окно отображено.";
    return QWidget::showEvent(e);
}

void Widget::hideEvent(QHideEvent* e) {
    qDebug() << "Окно скрыто.";
    return QWidget::hideEvent(e);
}

