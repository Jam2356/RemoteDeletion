#include "Init.h"

#include <QApplication>

int main(int argc, char *argv[]) {
    QApplication application(argc, argv);
    Init ini;

    ini.ui->show();

    return application.exec();
}
