#include "widget.h"

#include<QPushButton>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    cnt1 = new Counter("Counter 1");
    cnt2 = new Counter("Counter 2");

    QPushButton *btn = new QPushButton("PushButton",this);
    connect(btn, &QPushButton::clicked, this, &Widget::ButtonClicked);

    connect(cnt1, SIGNAL(ValueChanged(int)), cnt2, SIGNAL(ValueChanged(int)));
    connect(cnt2, SIGNAL(ValueChanged(int)), cnt2, SLOT(setValue(int)));

    btn->setGeometry(20, 20, 50, 30);

    setFixedSize(300, 200);

}

Widget::~Widget()
{

}

void Widget::ButtonClicked()
{
    emit cnt1->ValueChanged(100);
}
