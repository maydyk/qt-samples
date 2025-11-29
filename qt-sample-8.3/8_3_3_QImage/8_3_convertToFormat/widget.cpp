#include "widget.h"

Widget::Widget(QWidget *parent)
   : QWidget(parent)
{
   resize(600, 600);
   img = QImage("qt-sample-8.3/8_3_3_QImage/8_3_convertToFormat/photo.jpg");
   img = img.convertToFormat(QImage::Format_Mono);
}

Widget::~Widget() {}

void Widget::paintEvent(QPaintEvent *)
{
   QPainter painter(this);
   painter.drawImage(0, 0, img);
}
