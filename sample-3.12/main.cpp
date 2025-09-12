#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QPalette>
#include <QPixmap>
#include <QBrush>

int main(int argc, char* argv[]) {
    QApplication app {argc, argv};

    QWidget window;
    window.setWindowTitle("Окно произвольной формы");
    window.setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
    window.resize(300, 300);

    QPixmap pixmap {"sample-3.12/fon.png"};
    QPalette pal { window.palette() };
    pal.setBrush(QPalette::Normal, QPalette::Window,
        QBrush(pixmap)
    );
    window.setPalette(pal);
    window.setMask(pixmap.mask());

    QPushButton* button = new QPushButton{"&Закрыть окно", &window};
    button->setFixedSize(150, 30);
    button->move(75, 135);
    QObject::connect(button, SIGNAL(clicked()), qApp, SLOT(quit()));

    window.show();
    return app.exec();
}