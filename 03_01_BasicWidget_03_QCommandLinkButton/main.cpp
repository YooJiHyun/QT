#include "commandlinkbutton.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CommandLinkButton w;
    w.show();

    return a.exec();
}
