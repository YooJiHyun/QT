#include "dialog.h"
#include <QColorDialog>
#include <QDebug>

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
{
    QColor color;
    color = QColorDialog::getColor(Qt::green, this, "컬러 선택", QColorDialog::DontUseNativeDialog);

    if(color.isValid())
        qDebug() << Q_FUNC_INFO << "유효한 색상";

}

Dialog::~Dialog()
{

}
