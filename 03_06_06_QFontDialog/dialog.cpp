#include "dialog.h"
#include<QFontDialog>

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
{
    bool ok;
    QFont font;
    font = QFontDialog::getFont(&ok, QFont("Courier 10 Pitch"), this);
}

Dialog::~Dialog()
{

}
