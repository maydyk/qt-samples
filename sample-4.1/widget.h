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

private slots:
    void on_btn1_clicked();
    void on_btn2_clicked(bool);

private:
    QPushButton* btn1;
    QPushButton* btn2;
    QVBoxLayout* vbox;
};