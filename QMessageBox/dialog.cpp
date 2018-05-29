#include "dialog.h"
#include "ui_dialog.h"
#include "QtCore"
#include "QtGui"
#include "QMessageBox"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
    //info
    QMessageBox::information(this,"Title here",
                             "Text Here");
}

void Dialog::on_pushButton_2_clicked()
{
    //question
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this,"Title here",
                             "Do you like cats?",
                          QMessageBox::Yes | QMessageBox::No);
    if(reply == QMessageBox::Yes)
    {
        QMessageBox::information(this,"Title here",
                                 "Yoy LOVE cats");
    }
}

void Dialog::on_pushButton_3_clicked()
{
    QMessageBox::warning(this,"Title here",
                             "Text Here");
}

void Dialog::on_pushButton_4_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this,"Title here",
                             "My Text here",
                          QMessageBox::YesToAll | QMessageBox::Yes | QMessageBox::No | QMessageBox::NoToAll);
}
