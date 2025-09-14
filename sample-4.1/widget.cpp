#include "widget.h"

Widget::Widget(QWidget* parent)
: QWidget{parent} {
    btn1 = new QPushButton{ "Кнопка 1" };
    btn2 = new QPushButton{ "Кнопка 2" };
    
    vbox = new QVBoxLayout {};
    vbox->addWidget(btn1);
    vbox->addWidget(btn2);
    setLayout(vbox);

    connect(btn1, SIGNAL(clicked()), this, SLOT(on_btn1_clicked()));
    connect(btn2, SIGNAL(clicked(bool)), SLOT(on_btn2_clicked(bool)));
}

Widget::~Widget() {

}

void Widget::on_btn1_clicked() {
    qDebug() << "Нажата кнопка 1.";
}

void Widget::on_btn2_clicked(bool checked) {
    qDebug() << "Нажата кнопка 2.";
}
