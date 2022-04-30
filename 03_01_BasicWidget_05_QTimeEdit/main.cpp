#include "timeedit.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TimeEdit w;
    w.show();

    return a.exec();
}
