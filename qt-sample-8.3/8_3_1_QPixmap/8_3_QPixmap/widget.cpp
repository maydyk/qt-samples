#include "widget.h"
#include <QImageWriter>


Widget::Widget(QWidget *parent)
   : QWidget(parent)
{
   resize(600, 600);
   pix = QPixmap("qt-sample-8.3/8_3_1_QPixmap/8_3_QPixmap/photo.jpg");
}

Widget::~Widget() {}

void Widget::paintEvent(QPaintEvent *)
{
   QPainter painter(this);
   painter.drawPixmap(0, 0, pix);
}
