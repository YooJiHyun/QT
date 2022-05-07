#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <counter.h>


class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = 0);
    ~Widget();

private slots:
    void ButtonClicked();
private:
    Counter *cnt1;
    Counter *cnt2;
};

#endif // WIDGET_H
