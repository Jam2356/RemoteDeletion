#include "Widget.h"
#include "Server.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.show();
    Server server;
    return a.exec();
}
