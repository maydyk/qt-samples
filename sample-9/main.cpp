#include "widget.h"
#include <QApplication>

int main(int argc, char* argv[]) {
    QApplication app{argc, argv};

    Widget window;
    window.setWindowTitle("Обычное окно");
    window.resize(350, 100);
    window.show();

    QWidget window2;
    window2.setWindowTitle("Non-blocking window");
    window2.resize(500, 100);
    window2.show();

    return app.exec();
}