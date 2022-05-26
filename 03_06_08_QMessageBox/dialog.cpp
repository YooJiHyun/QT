#include "dialog.h"
#include<QMessageBox>
#include<QDebug>
Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
{
       QMessageBox:: StandardButton reply;
       reply = QMessageBox::critical(this, "Ciritical 다이얼로그", "디스크가 존재하지 않습니다.", QMessageBox::Abort | QMessageBox::Retry | QMessageBox::Ignore);

       if(reply == QMessageBox::Abort){
          qDebug() <<"Abort";
       }
       else if(reply == QMessageBox::Retry){
           qDebug() <<"Retry";
       }
       else if(reply == QMessageBox::Ignore){
           qDebug() <<"Ignore";
       }

}

Dialog::~Dialog()
{

}
