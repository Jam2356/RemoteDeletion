#include "Inint.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Inint init;

    init.initialization();
    init.objWidget->show();

    return a.exec();
}
