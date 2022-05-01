#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    int xpos = 20, ypos =20;

    for(int i = 0; i < 6; i++){
        if(i <= 2){
            slider[i] = new QSlider(Qt::Vertical, this);
            slider[i]->setGeometry(xpos, 20, 30, 80);
            xpos += 30;
        }
        else if(i >= 3){
            slider[i] = new QSlider(Qt::Horizontal, this);
            slider[i]->setGeometry(130, ypos, 80, 30);
            ypos += 30;
        }
        slider[i]->setRange(0, 100);
        slider[i]->setValue(50);
    }

    xpos = 20;
    for(int i = 0; i < 3; i++){
        QString str = QString("%1").arg(slider[i]->value());
        lbl[i] = new QLabel(str, this);
        lbl[i]->setGeometry(xpos + 10, 100, 30, 40);
        xpos += 30;
    }

    slider[1]->setInvertedAppearance(true);
    slider[3]->setInvertedAppearance(true);

    connect(slider[0], SIGNAL(valueChanged(int)), this, SLOT(valueChgned1(int)));
    connect(slider[1], SIGNAL(valueChanged(int)), this, SLOT(valueChgned2(int)));
    connect(slider[2], SIGNAL(valueChanged(int)), this, SLOT(valueChgned3(int)));
}

Widget::~Widget()
{

}

void Widget::valueChgned1(int value)
{
    lbl[0]->setText(QString("%1").arg(value));
    slider[3]->setValue(value);
}


void Widget::valueChgned2(int value)
{
    lbl[1]->setText(QString("%1").arg(value));
    slider[4]->setValue(value);
}



void Widget::valueChgned3(int value)
{
    lbl[2]->setText(QString("%1").arg(value));
    slider[5]->setValue(value);
}

