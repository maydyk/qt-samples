#pragma once

#include <QApplication>
#include <QWidget>
#include <QKeyEvent>
#include <QMouseEvent>

class Widget: public QWidget {
    Q_OBJECT;

public:
    explicit Widget(QWidget* parent = nullptr);
    ~Widget();

    bool event(QEvent* e) override;
};