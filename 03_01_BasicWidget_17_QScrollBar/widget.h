#ifndef WIDGET_H
#define WIDGET_H

#include <QScrollBar>
#include <QLabel>

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = 0);
    ~Widget();

private:
    QScrollBar *vsScrollbar[3];
    QScrollBar *hsScrollbar[3];
    QLabel *lbl[3];

private slots:
    void valueChanged1(int value);
    void valueChanged2(int value);
    void valueChanged3(int value);
};

#endif // WIDGET_H
