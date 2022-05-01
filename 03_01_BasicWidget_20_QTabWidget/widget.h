#ifndef WIDGET_H
#define WIDGET_H

#include <QTableWidget>

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = 0);
    ~Widget();

private slots:
    void currentTab(int index);
    void clickedButton1();
};

#endif // WIDGET_H
