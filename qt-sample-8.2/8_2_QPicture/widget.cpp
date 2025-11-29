#include "widget.h"
#include <QPicture>

Widget::Widget(QWidget *parent)
   : QWidget(parent)
{
   resize(300, 300);
   QPainter painter;
   QPicture pic;
   painter.begin(&pic);
   painter.setPen(QPen(Qt::black));
   painter.setBrush(QBrush(Qt::white));
   painter.drawRect(3, 3, 294, 294);
   painter.setPen(QPen(Qt::red, 1));
   painter.drawLine(10, 10, 290, 290);
   painter.end();
   pic.save("qt-sample-8.2/8_2_QPicture/pic.dat");
}

Widget::~Widget() {}

void Widget::paintEvent(QPaintEvent *)
{
   QPainter painter(this);
   QPicture pic;
   pic.load("qt-sample-8.2/8_2_QPicture/pic.dat");
   painter.drawPicture(0, 0, pic);
}
