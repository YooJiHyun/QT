#include "widget.h"
#include <QHBoxLayout>
#include <QPushButton>
#include <QVBoxLayout>
#include <QLineEdit>
#include <QLabel>
#include <QString>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    QHBoxLayout *hboxLayout = new QHBoxLayout;
    QPushButton *btn[6];

    QString hbtnStr[6] = {"Button1", "Button2", "Button3", "Button4", "Button5", "Button6"};

    for(int i = 0; i < 6; i++){
        btn[i] = new QPushButton(hbtnStr[i]);
        hboxLayout->addWidget(btn[i]);
    }

    QVBoxLayout *vboxLayout = new QVBoxLayout;
    QPushButton *vbtn[3];
    QString vbtnStr[3] = {"Movie", "Drama", "Animation"};

    for(int i = 0; i < 3; i++){
        vbtn[i] = new QPushButton(vbtnStr[i]);
        vboxLayout->addWidget(vbtn[i]);
    }

    QGridLayout *gridLayout = new QGridLayout();
    QPushButton *gbtn[5];
    QString gbtnStr[5] = {"One", "Two", "Three", "Four", "Five"};



    for(int i = 0; i < 5; i++){
        gbtn[i] = new QPushButton(gbtnStr[i]);
    }

    gridLayout->addWidget(gbtn[0], 0, 0);
    gridLayout->addWidget(gbtn[1], 0, 1);
    gridLayout->addWidget(gbtn[2], 1, 0, 1, 2);
    gridLayout->addWidget(gbtn[3], 2, 0);
    gridLayout->addWidget(gbtn[4], 2, 1);



    QVBoxLayout* defaultLayout = new QVBoxLayout();
    defaultLayout->addLayout(hboxLayout);
    defaultLayout->addLayout(vboxLayout);
    defaultLayout->addLayout(gridLayout);

    setLayout(defaultLayout);

}

Widget::~Widget()
{

}
