#include "widget.h"

Widget::Widget(QWidget *parent)
   : QWidget(parent)
{
   resize(600, 600);
   QImage img("qt-sample-8.3/8_3_2_QBitmap/8_3_fromImage/photo.jpg");
   pix = QBitmap::fromImage(img);
}

Widget::~Widget() {}

void Widget::paintEvent(QPaintEvent *)
{
   QPainter painter(this);
   painter.drawPixmap(0, 0, pix);
}
