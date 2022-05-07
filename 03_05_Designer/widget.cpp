#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    connect(ui->slider1, &QSlider::valueChanged, this, &Widget::slider1_valueChanged);
    connect(ui->slider2, &QSlider::valueChanged, this, &Widget::slider2_valueChanged);
    connect(ui->slider3, SIGNAL(valueChanged(int)), this, SLOT(slider3_valueChanged(int)));
}

Widget::~Widget()
{
    delete ui;
}

void Widget::slider1_valueChanged(int value)
{
    ui->spinBox1->setValue(value);
}

void Widget::slider2_valueChanged(int value)
{
    ui->spinbox2->setValue(value);
}

void Widget::slider3_valueChanged(int value)
{
    ui->spinbox3->setValue(value);
}
