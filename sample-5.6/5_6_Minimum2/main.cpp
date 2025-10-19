#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QVBoxLayout>
#include <QLabel>
#include <QSizePolicy>

int main(int argc, char *argv[])
{
   QApplication app(argc, argv);
   QWidget window;
   window.setWindowTitle("Minimum");
   window.resize(350, 150);

   QLabel *label = new QLabel("Текст надписи");
   QLabel *label2 = new QLabel("Текст надписи");

   QSizePolicy policy(QSizePolicy::Minimum,
                      QSizePolicy::Minimum);
   label->setFrameStyle(QFrame::Box | QFrame::Plain);
   label->setSizePolicy(policy);

   QVBoxLayout *vbox = new QVBoxLayout();
   vbox->addWidget(label);
   vbox->addWidget(label2);
   window.setLayout(vbox);

   window.show();
   return app.exec();
}

