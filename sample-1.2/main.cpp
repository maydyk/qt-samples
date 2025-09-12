#include <QApplication>
#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include <QVBoxLayout>

int main(int argc, char *argv[]) 
{
    QApplication app(argc, argv);

    //Option 1, like in the mentioned stackoverflow answer
    //QWidget window;

    //Option 2, to test If maybe the QWidget above was the problem
    QWidget window;
    window.setWindowTitle("The first QT program");
    window.resize(300, 70);

    QLabel* label { new QLabel{ "<center>Hello, World!</center>" } };
    QPushButton* btnQuit { new QPushButton{ "&Close" } };
    QVBoxLayout* vbox { new QVBoxLayout{ } };

    vbox->addWidget(label);
    vbox->addWidget(btnQuit);
    window.setLayout(vbox);

    QObject::connect(btnQuit, SIGNAL(clicked()), &app, SLOT(quit()));


    window.show();
    return app.exec();
}