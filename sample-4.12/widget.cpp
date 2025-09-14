#include "widget.h"

Widget::Widget(QWidget* parent)
: QWidget{parent}
{
    timer_id = -1;
    label = new QLabel("");
    label->setAlignment(Qt::AlignCenter);
    btn1 = new QPushButton("Запустить");
    btn2 = new QPushButton("Остановить");
    btn2->setEnabled(false);

    vbox = new QVBoxLayout();
    vbox->addWidget(label);
    vbox->addWidget(btn1);
    vbox->addWidget(btn2);
    setLayout(vbox);

    connect(btn1, SIGNAL(clicked()), this, SLOT(on_btn1_clicked()));
    connect(btn2, SIGNAL(clicked()), this, SLOT(on_btn2_clicked()));
}

Widget::~Widget() {

}

void Widget::on_btn1_clicked() {
    timer_id = startTimer(1000);
    btn1->setEnabled(false);
    btn2->setEnabled(true);
}

void Widget::on_btn2_clicked() {
    if (timer_id != -1) {
        killTimer(timer_id);
        timer_id = -1;
    }

    btn1->setEnabled(true);
    btn2->setEnabled(false);
    label->setText("");
}

void Widget::timerEvent(QTimerEvent* event) {
    qDebug() << "Timer ID:" << timer_id;

    QTime t = QTime::currentTime();
    label->setText(t.toString("HH:mm::ss"));
}