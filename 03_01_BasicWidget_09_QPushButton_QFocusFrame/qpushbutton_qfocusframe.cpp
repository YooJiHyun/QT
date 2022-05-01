#include "qpushbutton_qfocusframe.h"
#include <QTWidgets/QPushButton>
#include <QFocusFrame>

QPushButton_QFocusFrame::QPushButton_QFocusFrame(QWidget *parent)
    : QWidget(parent)
{
    QPushButton *btn[3];
    int ypos = 30;

    for(int i = 0; i < 3; i++){
        QString str = QString("Frame's button %1").arg(i);
        btn[i] = new QPushButton(str, this);
        btn[i]->setGeometry(10, ypos, 300, 40);
        ypos += 50;
    }

    connect(btn[0],&QPushButton::clicked, this, &QPushButton_QFocusFrame::btn_clicked);
    connect(btn[0],&QPushButton::pressed, this, &QPushButton_QFocusFrame::btn_pressed);
    connect(btn[0],&QPushButton::released, this, &QPushButton_QFocusFrame::btn_released);

    QFocusFrame *btn_frame = new QFocusFrame(this);

    btn_frame->setWidget(btn[0]);
    btn_frame->setAutoFillBackground(true);

}

QPushButton_QFocusFrame::~QPushButton_QFocusFrame()
{

}

void QPushButton_QFocusFrame::btn_clicked()
{
    qDebug("QPushButton 0 clicked");

}

void QPushButton_QFocusFrame::btn_pressed()
{
    qDebug("QPushButton 0 pressed");
}

void QPushButton_QFocusFrame::btn_released()
{
    qDebug("QPushButton 0 released");
}
