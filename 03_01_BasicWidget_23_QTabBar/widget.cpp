#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    QTabBar *tab = new QTabBar(this);
    tab->addTab("Browser");
    tab->addTab("User");
    tab->addTab("Application");
    tab->setShape(QTabBar::TriangularWest);
    tab->setGeometry(20, 20, 300, 250);
    tab->setTabTextColor(1, QColor(255,0,0));
    connect(tab,SIGNAL(currentChanged(int)),this,SLOT(currentTab(int)));

}

Widget::~Widget()
{

}

void Widget::currentTab(int index)
{
    qDebug("Current Tab : %d", index);
}
