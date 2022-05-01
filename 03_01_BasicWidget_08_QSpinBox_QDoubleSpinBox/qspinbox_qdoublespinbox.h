#ifndef QSPINBOX_QDOUBLESPINBOX_H
#define QSPINBOX_QDOUBLESPINBOX_H

#include <QSpinBox>
#include <QDoubleSpinBox>

class QSpinBox_QDoubleSpinBOx : public QWidget
{
    Q_OBJECT

public:
    QSpinBox_QDoubleSpinBOx(QWidget *parent = 0);
    ~QSpinBox_QDoubleSpinBOx();

private:
    QSpinBox *spin[3];
    QDoubleSpinBox *doublespin[3];
};

#endif // QSPINBOX_QDOUBLESPINBOX_H
