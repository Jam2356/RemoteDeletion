#include "Inint.h"

Inint::Inint(QObject *parent)
    : QObject{parent} {
    objWidget = new Widget;
    objConnection = new Connection;
    objWRequestPassword = new RequestPassword;
}

void Inint::initialization() {
    connect(objWidget, SIGNAL(signalConnectClicked()),
            objConnection, SLOT(slotConnectClicked()));

    //
    connect(objWidget, SIGNAL(signalShowRequest()),
            objWRequestPassword, SLOT(show()));



    connect(objWidget, SIGNAL(signalDeleteFileClicked(QString)),
            objConnection, SLOT(slotDeleteFileClicked(QString)));

    connect(objConnection, SIGNAL(signalStringToUi(QString)),
            objWidget, SLOT(slotStringToUi(QString)));

    connect(objWRequestPassword, SIGNAL(signalAdminModTurnOn(QString)),
            objConnection, SLOT(slotAdminModTurnOn(QString)));

}
