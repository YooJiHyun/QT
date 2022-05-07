#include "dialog.h"
#include <QInputDialog>
#include <QDebug>

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
{
    QStringList items;
    items <<"봄"<<"여름"<<"가을"<<"겨울";
    bool ok;
    QString item = QInputDialog::getItem(this,"항목 선택", "계절 선택 : ", items, 1, true, &ok);
    qDebug()<<item;
}

Dialog::~Dialog()
{

}
