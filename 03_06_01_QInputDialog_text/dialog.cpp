#include "dialog.h"
#include <QInputDialog>

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
{
    bool ok;
    QString text = QInputDialog::getText(this, "텍스트 입력", "이름 : ", QLineEdit::Normal, "이름 입력",&ok);
    if(ok){
        qDebug(text.toUtf8());
    }

}

Dialog::~Dialog()
{

}
