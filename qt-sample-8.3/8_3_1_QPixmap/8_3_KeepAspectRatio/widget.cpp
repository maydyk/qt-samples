#include "widget.h"

Widget::Widget(QWidget *parent)
   : QWidget(parent)
{
   resize(600, 600);
   pix = QPixmap("qt-sample-8.3/8_3_1_QPixmap/8_3_KeepAspectRatio/photo.jpg");
   qDebug() << "Original size: " << pix.size();
   pix = pix.scaled(250, 300,
             Qt::KeepAspectRatio,
             Qt::FastTransformation);
   qDebug() << "Display size: " << pix.size();
}

Widget::~Widget() {}

void Widget::paintEvent(QPaintEvent *)
{
   QPainter painter(this);
   painter.drawPixmap(0, 0, pix);
}
