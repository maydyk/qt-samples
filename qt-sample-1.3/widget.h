#pragma once

#include <QApplication>
#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include <QVBoxLayout>

class Widget: public QWidget {
    Q_OBJECT

public:
    explicit Widget(QWidget* parent = nullptr);
    ~Widget();

private:
    QLabel* label;
    QPushButton *btnQuit;
    QVBoxLayout* vbox;
};
