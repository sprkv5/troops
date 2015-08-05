#include "troops.h"
#include "troopscolour.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    troops w;
    //troopsColour widget;
    w.show();
    //widget.show();

    return a.exec();
}
