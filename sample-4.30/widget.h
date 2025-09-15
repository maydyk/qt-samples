#pragma once

#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QVBoxLayout>
#include "mylineedit.h"

class Widget: public QWidget {
    Q_OBJECT

public:
    Widget(QWidget* parent = nullptr);
    ~Widget();

private:
    MyLineEdit* line1;
    MyLineEdit* line2;
    QPushButton* btn1;
    QVBoxLayout* vbox;
};
