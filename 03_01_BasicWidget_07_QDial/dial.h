#ifndef DIAL_H
#define DIAL_H

#include <QDial>

class Dial : public QWidget
{
    Q_OBJECT

public:
    Dial(QWidget *parent = 0);
    ~Dial();

private:
    QDial *dial[3];

private slots:
    void ChangedData();
};

#endif // DIAL_H
