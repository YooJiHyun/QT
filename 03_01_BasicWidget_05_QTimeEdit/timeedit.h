#ifndef TIMEEDIT_H
#define TIMEEDIT_H

#include <QTime>
#include <QTimeEdit>

class TimeEdit : public QWidget
{
    Q_OBJECT

public:
    TimeEdit(QWidget *parent = 0);
    ~TimeEdit();
};

#endif // TIMEEDIT_H
