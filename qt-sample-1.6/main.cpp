#include "widget.h"

int main(int argc, char* argv[]) {
    QApplication app(argc, argv);

    Widget window;
    window.setWindowTitle("Заголовок окна");
    window.resize(350, 70);
    window.show();

    return app.exec();
}