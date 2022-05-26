#include "dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
{
    lbl = new QLabel("이름");
    edit = new QLineEdit("");
    okbtn = new QPushButton("확인");
    cancelbtn = new QPushButton("취소");

    QHBoxLayout *hlay1 = new QHBoxLayout();
    hlay1->addWidget(lbl);
    hlay1->addWidget(edit);

    QHBoxLayout *hlay2 = new QHBoxLayout();

    connect(okbtn, &QPushButton::clicked, this, &Dialog::slot_okbtn);
    connect(cancelbtn, &QPushButton::clicked, this, &Dialog::slot_cancelbtn);
    hlay2->addWidget(okbtn);
    hlay2->addWidget(cancelbtn);

    QVBoxLayout *vlayout = new QVBoxLayout();
    vlayout->addLayout(hlay1);
    vlayout->addLayout(hlay2);

    setLayout(vlayout);



}

Dialog::~Dialog()
{

}

void Dialog::slot_okbtn()
{
    qDebug("ok");
    emit accept();
}

void Dialog::slot_cancelbtn()
{
    emit reject();
}
