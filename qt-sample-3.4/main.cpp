#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QVBoxLayout>

int main(int argc, char* argv[]) {
    QApplication app {argc, argv};

    QWidget window;
    window.setWindowTitle("Разворачивание и сворачивание окна");
    window.resize(350, 200);

    auto btnMin = new QPushButton{"Свернуть"};
    auto btnMax = new QPushButton{"Развернуть"};
    auto btnFull = new QPushButton{"Полный экран"};
    auto btnNormal = new QPushButton{"Нормальный размер"};
    
    auto vbox = new QVBoxLayout();
    vbox->addWidget(btnMin);
    vbox->addWidget(btnMax);
    vbox->addWidget(btnFull);
    vbox->addWidget(btnNormal);
    window.setLayout(vbox);

    QObject::connect(btnMin, SIGNAL(clicked()), &window, SLOT(showMinimized()));
    QObject::connect(btnMax, SIGNAL(clicked()), &window, SLOT(showMaximized()));
    QObject::connect(btnFull, SIGNAL(clicked()), &window, SLOT(showFullScreen()));
    QObject::connect(btnNormal, SIGNAL(clicked()), &window, SLOT(showNormal()));

    window.show();
    return app.exec();
}