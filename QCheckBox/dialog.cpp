#include "dialog.h"
#include "ui_dialog.h"
#include <QtCore>
#include <QtGui>
#include <QMessageBox>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    ui->checkBox_2->setChecked(true);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
    if(ui->checkBox_2->isChecked())
    {
        QMessageBox::information(this,"Cats","You like cats");
    }
    else{
        QMessageBox::information(this,"Cats","You don't like cats");
    }

}
