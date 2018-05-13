#include "dialog.h"
#include "ui_dialog.h"
#include "QtCore"
#include "QtGui"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    ui->treeWidget->setColumnCount(2);
    AddRoot("1 hello", "world");
    AddRoot("2 hello", "world");
    AddRoot("3 hello", "world");
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::AddRoot(QString name,QString Description)
{
    QTreeWidgetItem *itm = new QTreeWidgetItem(ui->treeWidget);
    itm->setText(0,name);
    itm->setText(1,Description);
   // ui->treeWidget->addTopLevelItem(itm);

    AddChild(itm,"one","hello");
    AddChild(itm,"two","world");
}
void Dialog::AddChild(QTreeWidgetItem *parent,QString name,QString Description)
{
    QTreeWidgetItem *itm = new QTreeWidgetItem();
    itm->setText(0,name);
    itm->setText(1,Description);
    parent->addChild(itm);
}
