#include <QApplication>
#include <QWidget>
#include <QIcon>

int main(int argc, char* argv[]) {
    QApplication app{argc, argv};
    
    QWidget window;
    window.setWindowTitle("Замена иконы в заголовке");
    window.resize(350, 70);

    // QIcon icon("sample-3.9/test.ico");
    QIcon icon("/home/denis/samples/qt-samples/sample-3.9/test.ico");

    // Doesn't work!
    window.setWindowIcon(icon);
    app.setWindowIcon(icon);

    window.show();
    return app.exec();
}