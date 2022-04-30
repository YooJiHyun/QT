#include "timeedit.h"
#include <QLabel>

TimeEdit::TimeEdit(QWidget *parent)
    : QWidget(parent)
{
    setFixedSize(300,250);
    QTime ti = QTime(7, 10, 23, 122);
    QLabel *lb_str = new QLabel(ti.toString("AP hh:mm:ss:zzz"),this);
    lb_str->setGeometry(10, 10, 150, 30);
    QTime ti1 = QTime(6, 24, 55, 432); // 시, 분, 초, 밀리세컨드초

    QTimeEdit *qte[4];
    qte[0] = new QTimeEdit(ti1, this);
    qte[0]->setGeometry(10, 30, 150, 30);

    qte[1] = new QTimeEdit(ti1.addSecs(70), this);
    qte[1]->setGeometry(10, 70, 150, 30);

    qte[2] = new QTimeEdit(ti1.addSecs(2), this);
    qte[2]->setGeometry(10, 110, 150, 30);

    QTime ti2 = QTime::currentTime();

    qte[3]= new QTimeEdit(ti2.currentTime(),this);
    qte[3]->setGeometry(10, 150, 150, 30);

    QTime ti3;
    ti3.start();

    for(int i=0; i<10000; i++){
        for(int j=0; j<10000; j++){

        }
    }

    qDebug("Elapsed Time : %d", ti3.elapsed());
    QLabel *lb_str_elapsed_time = new QLabel(QString("%1").arg(ti3.elapsed()),this);
    lb_str_elapsed_time->setGeometry(10, 190, 150, 30);

    QTime ti4 = QTime::fromString("03:32","hh:mm");
    QLabel *lbl_fromString = new QLabel(ti4.toString(),this);
    lbl_fromString->setGeometry(10,210,150,30);

    QTime ti5 = QTime(6, 25, 34, 323);
    qDebug("Hour : %d", ti5.hour());
    qDebug("min : %d", ti5.minute());
    qDebug("sec : %d", ti5.second());
    qDebug("msec : %d", ti5.msec());



}

TimeEdit::~TimeEdit()
{

}
