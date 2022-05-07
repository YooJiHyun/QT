#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();

private:
    Ui::Widget *ui;
private:
    void slider1_valueChanged(int value);
    void slider2_valueChanged(int value);
private slots:
    void slider3_valueChanged(int value);
};

#endif // WIDGET_H
