#include "widget.h"

int main(int argc, char* argv[]) {
    QApplication app{argc, argv};

    Widget window;
    window.setWindowTitle("Горячие клавиши!");
    window.resize(350, 150);
    window.show();

    return app.exec();
}