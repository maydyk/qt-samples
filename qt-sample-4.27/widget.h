#pragma once

#include <QApplication>
#include <QWidget>
#include <QCloseEvent>
#include <QMessageBox>

class Widget: public QWidget {
    Q_OBJECT;

public:
    explicit Widget(QWidget* parent = nullptr);
    ~Widget();

protected:
    void closeEvent(QCloseEvent* e) override;
};