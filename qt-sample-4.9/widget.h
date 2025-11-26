#pragma once

#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QVBoxLayout>

class Widget: public QWidget {
    Q_OBJECT;

public:
    explicit Widget(QWidget* parent = nullptr);
    ~Widget();

signals:
    void mysignal(int, int);

private slots:
    void on_btn1_clicked();
    void on_btn2_clicked();
    void on_mysignal(int, int);

private:
    QPushButton* btn1;
    QPushButton* btn2;
    QVBoxLayout* vbox;
};
