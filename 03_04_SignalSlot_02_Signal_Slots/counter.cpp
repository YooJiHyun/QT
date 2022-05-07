#include "counter.h"
#include <QDebug>

Counter::Counter(QString mStr)
{
    mString = mStr;
}

void Counter::setValue(int mVal)
{
    mValue = mVal;
    qDebug()<<mString<<" "<<mValue;

}
