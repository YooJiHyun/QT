#include "widget.h"
#include "ui_widget.h"
#include <QTimer>
#include <QMessageBox>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    steps = 0;
    pd =new QProgressDialog("파일 복사 진행사항", "취소", 0, 100);
    connect(pd,SIGNAL(canceled()), this, SLOT(cancel()));

    timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this, SLOT(perform()));
    timer->start(1000);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::perform()
{
    pd->setValue(steps);
    steps++;

    if(steps > pd->maximum())
        timer->stop();
}

void Widget::cancel()
{

    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Question 다이얼로그", "정말 취소하시겠습니까?", QMessageBox::Yes | QMessageBox::No |QMessageBox::Cancel );

    if(reply == QMessageBox::No || reply == QMessageBox::Cancel){

    }
    else if(reply == QMessageBox::Yes){
        timer->stop();
    }


}
