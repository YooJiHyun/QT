#include "qspinbox_qdoublespinbox.h"

QSpinBox_QDoubleSpinBOx::QSpinBox_QDoubleSpinBOx(QWidget *parent)
    : QWidget(parent)
{
    setFixedSize(400,300);

    int ypos = 30;
    int val[3]={50, 100, 150};
    double double_val[3] = {50.5, 127.35, 171.342};

    for(int i=0; i<3; i++, ypos += 40){
        spin[i] = new QSpinBox(this);
        spin[i]->setMinimum(10);
        spin[i]->setMaximum(300);
        spin[i]->setValue(val[i]);
        spin[i]->setGeometry(10, ypos, 100, 30);

        doublespin[i] = new QDoubleSpinBox(this);
        doublespin[i]->setRange(10.0, 300.0);
        doublespin[i]->setValue(double_val[i]);
        doublespin[i]->setGeometry(120, ypos, 100, 30);

        spin[i]->setPrefix("$ ");
        doublespin[i]->setSuffix(" mm");
    }
}

QSpinBox_QDoubleSpinBOx::~QSpinBox_QDoubleSpinBOx()
{

}
