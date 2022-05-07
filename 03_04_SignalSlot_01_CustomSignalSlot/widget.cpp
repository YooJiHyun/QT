#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    lbl = new QLabel("", this);
    lbl->setGeometry(10, 10, 250, 40);

    SignalSlot myObject;

    // New Style
    connect(&myObject, &SignalSlot::valueChanged, this, &Widget::setValue);

    // Old Style
    //connect(&myObject, SIGNAL(valueChanged(int)), this, SLOT(setvalue(int)));

    myObject.setValue(50);
    // myObject의 setValue를 호출하면 setValue에서 signal valueChanged가 발생한걸 알림.
    // -> valueChanged와 widget의 setvalue가 connect로 연결되어 widget의 setvalue함수 호출됨.

}

Widget::~Widget()
{

}

void Widget::setValue(int val){
    QString text = QString("시그널 발생, value : %1").arg(val);
    lbl->setText(text);
}
