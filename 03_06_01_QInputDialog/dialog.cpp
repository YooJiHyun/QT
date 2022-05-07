#include "dialog.h"
#include <QInputDialog>

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
{
    bool retValue;
    int i = QInputDialog::getInt(this, "정수입력", "퍼센트:", 25, 0, 100, 20, &retValue);
    if(retValue)
        qDebug("true :%d",i);
}

Dialog::~Dialog()
{

}
