#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    box = new QToolBox(this);
    lay = new QHBoxLayout(this);

    btn[0] = new QPushButton("DataBase - 1", this);
    btn[1] = new QPushButton("Network - 2", this);
    btn[2] = new QPushButton("Graphics - 3", this);

    box->addItem(btn[0], "DataBase");
    box->addItem(btn[1], "Network");
    box->addItem(btn[2], "Graphics");
    lay->addWidget(box);
    setLayout(lay);

    connect(box, SIGNAL(currentChanged(int)), this, SLOT(changedTab(int)));


}

Widget::~Widget()
{

}

void Widget::changedTab(int index)
{
    qDebug("current index : %d", index);
}
