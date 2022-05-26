#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    steps = 0;
    pd = new QProgressDialog("파일 복사 진행사항", "취소", 0 ,100);
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(perform()));
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
    timer->stop();
}
