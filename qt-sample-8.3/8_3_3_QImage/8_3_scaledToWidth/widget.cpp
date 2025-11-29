#include "widget.h"

Widget::Widget(QWidget *parent)
   : QWidget(parent)
{
   resize(600, 600);
   img = QImage("qt-sample-8.3/8_3_3_QImage/8_3_scaledToWidth/photo.jpg");
   img = img.scaledToWidth(255);
}

Widget::~Widget() {}

void Widget::paintEvent(QPaintEvent *)
{
   QPainter painter(this);
   painter.drawImage(0, 0, img);
}
