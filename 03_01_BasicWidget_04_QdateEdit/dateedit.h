#ifndef DATEEDIT_H
#define DATEEDIT_H

#include <QDate>
#include <QDateEdit>
#include <QLabel>

class DateEdit : public QWidget
{
    Q_OBJECT

public:
    DateEdit(QWidget *parent = 0);
    ~DateEdit();

private:
    QDateEdit *dateEdit[4];
    QLabel *lbl[6];

};

#endif // DATEEDIT_H
