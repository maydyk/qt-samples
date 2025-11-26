#pragma once

#include <QApplication>
#include <QWidget>
#include <QMoveEvent>
#include <QResizeEvent>

class Widget: public QWidget {
    Q_OBJECT;

public:
    explicit Widget(QWidget* parent = nullptr);
    ~Widget();

protected:
    void moveEvent(QMoveEvent* e) override;
    void resizeEvent(QResizeEvent* e) override;
};
