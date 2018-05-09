#include <QApplication>
#include <QtGui>
#include <QtCore>

int main(int argc, char *argv[])
{
    QApplication app(argc,argv);

    QWidget *window = new QWidget;
    window->setWindowTitle("My App");

    QGridLayout *layout = new QGridLayout;

    QLabel *label1 = new QLabel("Name:");
    QLineEdit *textName = new QLineEdit;

    QLabel *label2 = new QLabel("Name:");
    QLineEdit *textName2 = new QLineEdit;

    layout->addWidget(label1,0,0);
    layout->addWidget(textName,0,1);

    layout->addWidget(label2,1,0);
    layout->addWidget(textName2,1,1);

    QPushButton *button = new QPushButton("OK");

    layout->addWidget(button,2,0,1,2);

    window->setLayout(layout);

    window->show();
    return app.exec();
}
