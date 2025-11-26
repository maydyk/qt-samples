#include <QApplication>
#include <QWidget>
#include <QPushButton>

int main(int argc, char* argv[]) {
    QApplication app {argc, argv};

    QWidget window;
    window.setWindowTitle("Подсказки");
    window.setWindowFlags(
        Qt::Window |
        Qt::WindowCloseButtonHint |     // Doesn't work!
        Qt::WindowContextHelpButtonHint // Doesn't work!
    );
    window.resize(300, 70);

    QPushButton* button = new QPushButton("&Закрыть окно", &window);
    button->setFixedSize(150, 30);
    button->move(75, 20);

    button->setToolTip("Кнопка!");
    window.setToolTip("Окно!");

    button->setWhatsThis("Это кнопка.");
    window.setWhatsThis("Это окно.");

    QObject::connect(button, SIGNAL(clicked()), qApp, SLOT(quit()));

    window.show();
    return app.exec();
}