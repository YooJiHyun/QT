#ifndef COUNTER_H
#define COUNTER_H

#include <QObject>

class Counter : public QObject
{
    Q_OBJECT
public:
    Counter(QString mStr);

private:
    QString mString;
    int mValue;

signals:
     void ValueChanged(int);

public slots:
     void setValue(int mVal);
};

#endif // COUNTER_H
