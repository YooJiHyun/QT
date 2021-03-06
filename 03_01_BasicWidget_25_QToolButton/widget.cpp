#include "widget.h"
#include<QToolBar>
#include<QVBoxLayout>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    QToolBar *tool = new QToolBar(this);
    QVBoxLayout *layout = new QVBoxLayout;

    QToolButton *button = new QToolButton;
    button->setIcon(QIcon(":resources/browser.png"));

    QToolButton *button1 = new QToolButton;
    button1->setIcon(QIcon(":resources/calendar.png"));
    button1->setDisabled(true);

    QToolButton *button2 = new QToolButton;
    button2->setIcon(QIcon(":resources/chat.png"));


    tool->addWidget(button);
    tool->addWidget(button1);
    tool->addSeparator();
    tool->addWidget(button2);
    layout->addWidget(tool);

    this->setLayout(layout);


}

Widget::~Widget()
{

}
