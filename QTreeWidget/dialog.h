#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include "QtCore"
#include "QtGui"
#include "QTreeWidgetItem"

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

void AddRoot(QString name,QString Description);
void AddChild(QTreeWidgetItem *parent,QString name,QString Description);

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H
