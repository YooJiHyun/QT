#include "datetimeedit.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DateTimeEdit w;
    w.show();

    return a.exec();
}
