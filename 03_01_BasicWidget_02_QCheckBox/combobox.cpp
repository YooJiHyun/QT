#include "combobox.h"

ComboBox::ComboBox(QWidget *parent)
    : QWidget(parent)
{
    combo = new QComboBox(this);
    combo->setGeometry(50, 50, 200, 30);
    combo->addItem(QIcon(":resources/browser.png"), "Application");
    combo->addItem(QIcon(":resources/browser.png"), "Grphics");
    combo->addItem("Database");
    combo->addItem("Network");

}

ComboBox::~ComboBox()
{

}
