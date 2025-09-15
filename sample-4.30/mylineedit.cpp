#include "mylineedit.h"

MyLineEdit::MyLineEdit(int id, QWidget* parent)
: QLineEdit{parent}
, id_{id}
{

}

void MyLineEdit::focusInEvent(QFocusEvent* e) {
    qDebug() << "Фокус получен полем" << id_;
    QLineEdit::focusInEvent(e);
}

void MyLineEdit::focusOutEvent(QFocusEvent* e) {
    qDebug() << "Фокус утерян полем" << id_;
    QLineEdit::focusOutEvent(e);
}
