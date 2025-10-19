#include <QApplication>
#include <QWidget>
#include <QFormLayout>
#include <QPushButton>
#include <QLineEdit>
#include <QTextEdit>
#include <QHBoxLayout>
#include <QLabel>
#include <QSpinBox>

int main(int argc, char *argv[])
{
   QApplication app(argc, argv);

   QWidget window;
   window.setWindowTitle("WrapLongRows");
   window.resize(300, 150);

   QLineEdit *lineEdit = new QLineEdit();
   QTextEdit *textEdit = new QTextEdit();
   QPushButton *btn1 = new QPushButton("О&тправить");
   QPushButton *btn2 = new QPushButton("О&чистить");

   QHBoxLayout *hbox = new QHBoxLayout();
   hbox->addWidget(btn1);
   hbox->addWidget(btn2);
   QFormLayout *form = new QFormLayout();
   form->setRowWrapPolicy(QFormLayout::WrapLongRows);
   form->addRow("&Название литературного или другого произведения:", lineEdit);
   form->addRow("&Описание:", textEdit);
   form->addRow(hbox);
   window.setLayout(form);

   window.show();
   return app.exec();
}
