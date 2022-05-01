#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    int xpos = 10;
    int ypos = 50;

    for(int i = 0; i < 3; i++){
        vsScrollbar[i] = new QScrollBar(Qt::Vertical, this);
        vsScrollbar[i]->setRange(0, 100);
        vsScrollbar[i]->setGeometry(xpos, 30, 20, 200);

        lbl[i] = new QLabel(QString("%1").arg(vsScrollbar[i]->value()), this);
        lbl[i]->setGeometry(xpos + 2, 220, 30, 30);
        xpos += 50;

        hsScrollbar[i] = new QScrollBar(Qt::Horizontal, this);
        hsScrollbar[i]->setRange(0, 100);
        hsScrollbar[i]->setGeometry(150, ypos, 200, 20);
        ypos += 50;
    }

    connect(vsScrollbar[0], SIGNAL(valueChanged(int)), this, SLOT(valueChanged1(int)));
    connect(vsScrollbar[1], SIGNAL(valueChanged(int)), this, SLOT(valueChanged2(int)));
    connect(vsScrollbar[2], SIGNAL(valueChanged(int)), this, SLOT(valueChanged3(int)));

}

Widget::~Widget()
{

}

void Widget::valueChanged1(int value)
{
    lbl[0]->setText(QString("%1").arg(value));
    hsScrollbar[0]->setValue(value);
}

void Widget::valueChanged2(int value)
{
    lbl[1]->setText(QString("%1").arg(value));
    hsScrollbar[1]->setValue(value);
}

void Widget::valueChanged3(int value)
{
    lbl[2]->setText(QString("%1").arg(value));
    hsScrollbar[2]->setValue(value);
}

