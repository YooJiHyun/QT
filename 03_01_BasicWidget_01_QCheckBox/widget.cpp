#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    QString str1[3] = {"Game", "Office", "Develop"};
    QString str2[3] = {"P&rogramming", "Q&t", "Q&S"};

    int xpos = 30;
    int ypos = 30;

    chk_group[0] = new QButtonGroup(this);
    chk_group[1] = new QButtonGroup(this);

    for(int i=0; i<3; i++){
        exclusive[i] = new QCheckBox(str1[i],this);
        exclusive[i]->setGeometry(xpos, ypos, 100, 30);
        chk_group[0]->addButton(exclusive[i]);

        non_exclusive[i] = new QCheckBox(str2[i],this);
        non_exclusive[i]->setGeometry(xpos + 120, ypos, 100, 30);
        chk_group[1]->addButton(non_exclusive[i]);

        connect(exclusive[i],SIGNAL(clicked()),this,SLOT(chkChanged()));

        ypos += 40;
    }

    chk_group[0]->setExclusive(false);
    chk_group[1]->setExclusive(true);

    exclusive[0]->setIcon(QIcon(":/new/prefix1/resources/browser.png"));
    exclusive[1]->setIcon(QIcon(":/new/prefix1/resources/calendar.png"));
    exclusive[2]->setIcon(QIcon(":/new/prefix1/resources/chat.png"));

    non_exclusive[0]->setIcon(QIcon(":/new/prefix1/resources/editor.png"));
    non_exclusive[1]->setIcon(QIcon(":/new/prefix1/resources/mail.png"));
    non_exclusive[2]->setIcon(QIcon(":/new/prefix1/resources/users.png"));
}

Widget::~Widget()
{

}

void Widget::chkChanged()
{
    for(int i=0; i<3; i++){
        if(exclusive[i]->checkState()){
            qDebug("checkbox %d selected", i+1);
        }
    }

}
