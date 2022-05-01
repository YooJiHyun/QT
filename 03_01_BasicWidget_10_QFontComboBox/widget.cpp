#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{

    QFontComboBox *fontcb[5];
    for(int i = 0 ; i < 5 ; i++)
        fontcb[i] = new QFontComboBox(this);

    fontcb[0]->setFontFilters(QFontComboBox::AllFonts);
    fontcb[1]->setFontFilters(QFontComboBox::ScalableFonts);
    fontcb[2]->setFontFilters(QFontComboBox::NonScalableFonts);
    fontcb[3]->setFontFilters(QFontComboBox::MonospacedFonts);
    fontcb[4]->setFontFilters(QFontComboBox::ProportionalFonts);

    int ypos = 30;
    for(int i = 0 ; i < 5 ; i++) {
        fontcb[i]->setGeometry(10, ypos, 200, 30);
        ypos += 40;
    }

    lbl = new QLabel("I love Qt programming", this);
    lbl->setGeometry(10, ypos, 200, 30);

    connect(fontcb[0], SIGNAL(currentIndexChanged(int)), this, SLOT(changedIndex(int)));

    connect(fontcb[0], SIGNAL(currentFontChanged(QFont)), this, SLOT(changedFont(const QFont &)));
}

void Widget::changedIndex(int idx)
{
    qDebug("Font index : %d", idx);
}

void Widget::changedFont(const QFont &f)
{
    lbl->setFont(f.family());
}

Widget::~Widget()
{

}
