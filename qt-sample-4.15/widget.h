#pragma once

#include <QApplication>
#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include <QVBoxLayout>
#include <QTimer>
#include <QTime>

class Widget: public QWidget {
    Q_OBJECT;

public:
    explicit Widget(QWidget* parent = nullptr);
    ~Widget();

private slots:
    void on_btn1_clicked();
    void on_btn2_clicked();
    void on_timeout();

private:
    QLabel* label;
    QPushButton* btn1;
    QPushButton* btn2;
    QVBoxLayout* vbox;
    QTimer *timer;
};