#include <QPushButton>
#include <QVBoxLayout>

class Widget : public QWidget {
    Q_OBJECT

public:
    Widget(QWidget* parent = nullptr);
    ~Widget();

private slots:
    void on_btn1_clicked();

private:
    QPushButton* btn1;
    QVBoxLayout* vbox;
};
