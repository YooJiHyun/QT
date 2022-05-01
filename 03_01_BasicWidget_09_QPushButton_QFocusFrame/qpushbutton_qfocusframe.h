#ifndef QPUSHBUTTON_QFOCUSFRAME_H
#define QPUSHBUTTON_QFOCUSFRAME_H

#include <QWidget>

class QPushButton_QFocusFrame : public QWidget
{
    Q_OBJECT

public:
    QPushButton_QFocusFrame(QWidget *parent = 0);
    ~QPushButton_QFocusFrame();

private slots:
    void btn_clicked();
    void btn_pressed();
    void btn_released();
};

#endif // QPUSHBUTTON_QFOCUSFRAME_H
