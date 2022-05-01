#ifndef WIDGET_H
#define WIDGET_H

#include <QMenuBar>
#include <QLabel>

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = 0);
    ~Widget();

private:
    QMenuBar *menuBar;
    QMenu *menu[3];
    QAction *act[2];
    QLabel *lbl;

private slots:
    void trigerMenu(QAction *act);
};

#endif // WIDGET_H
