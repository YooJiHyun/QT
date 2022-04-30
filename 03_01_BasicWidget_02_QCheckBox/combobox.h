#ifndef COMBOBOX_H
#define COMBOBOX_H

#include <QTWidgets/QComboBox>

class ComboBox : public QWidget
{
    Q_OBJECT

public:
    ComboBox(QWidget *parent = 0);
    ~ComboBox();

private:
    QComboBox *combo;
};

#endif // COMBOBOX_H
