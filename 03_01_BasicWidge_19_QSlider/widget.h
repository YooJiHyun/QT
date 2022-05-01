#ifndef WIDGET_H
#define WIDGET_H

#include <QSLider>
#include <QLabel>

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = 0);
    ~Widget();

private:
    QSlider *slider[6];
    QLabel *lbl[3];

private slots:
    void valueChgned1(int value);
    void valueChgned2(int value);
    void valueChgned3(int value);
};

#endif // WIDGET_H
