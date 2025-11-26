#pragma once

#include <QWidget>
#include <QLineEdit>
#include <QShortcutEvent>

class MyLineEdit: public QLineEdit {
    Q_OBJECT

public:
    MyLineEdit(QWidget* parent = nullptr);

protected:
    bool event(QEvent* e);

public:
    int id;
};
