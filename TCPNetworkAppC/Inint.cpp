#include "Inint.h"

Inint::Inint(QObject *parent)
    : QObject{parent} {
    objWidget = new Widget;
    objConnection = new Connection;
}

void Inint::initialization() {
    connect(objWidget, SIGNAL(signalConnectClicked()),
            objConnection, SLOT(slotConnectClicked()));

    //AmbinModTurn
    connect(objWidget, SIGNAL(signalAdminModTurnOn()),
            objConnection, SLOT(slotAdminModTurnOn()));

    connect(objWidget, SIGNAL(signalDeleteFileClicked(QString)),
            objConnection, SLOT(slotDeleteFileClicked(QString)));

    connect(objConnection, SIGNAL(signalStringToUi(QString)),
            objWidget, SLOT(slotStringToUi(QString)));  

}
