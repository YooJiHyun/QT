#include "dateedit.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DateEdit w;
    w.show();

    return a.exec();
}
