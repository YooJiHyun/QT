#ifndef WIDGET_H
#define WIDGET_H

#include <QSizeGrip>
#include <QVBoxLayout>
#include <QTextEdit>

class SubWindow : public QWidget
{
    Q_OBJECT
public:
    SubWindow(QWidget *parent = 0) : QWidget(parent, Qt::SubWindow){
        QSizeGrip *sizegrip = new QSizeGrip(this);
        sizegrip->setFixedSize(sizegrip->sizeHint());

        this->setLayout(new QVBoxLayout);
        this->layout()->setMargin(10);

        layout()->addWidget(new QTextEdit);

        sizegrip->setWindowFlags(Qt::WindowStaysOnTopHint);
        sizegrip->raise();
    }
    ~SubWindow(){};

    QSize sizeHint() const{
        return QSize(200, 100);
    }

private:

};


class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = 0);
    ~Widget();
};

#endif // WIDGET_H
