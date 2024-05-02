#include "Inint.h"

#include <QApplication>

int main(int argc, char *argv[]) {
    QApplication application(argc, argv);

    Inint init;

    init.initialization();
    init.objWidget->show();

    return application.exec();
}
