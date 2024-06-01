#include "Inint.h"

Inint::Inint(QObject *parent)
    : QObject{parent} {
    objWidget = new Widget;
    objConnection = new Connection;
    objWRequestPassword = new RequestPassword;
    objSuperAbility = new SuperAbility;

}

void Inint::initialization() {
    connect(objWidget, SIGNAL(signalConnectClicked(QString)),
            objConnection, SLOT(slotConnectClicked(QString)));
    //
    connect(objWidget, SIGNAL(signalShowRequest()),
            objWRequestPassword, SLOT(show()));

    connect(objWidget, SIGNAL(signalDeleteFileClicked(QString)),
            objConnection, SLOT(slotDeleteFileClicked(QString)));

    connect(objWidget, SIGNAL(signalStartSuperAbility()),
            objSuperAbility, SLOT(show()));


    connect(objConnection, SIGNAL(signalStringToUi(QString)),
            objWidget, SLOT(slotStringToUi(QString)));

    connect(objConnection, SIGNAL(signalNameLineBlocked()),
            objWidget, SLOT(slotBlockNameLine()));

    connect(objConnection, SIGNAL(signalAdminActivationStart()),
            objWidget, SLOT(slotActivationStart()));


    connect(objWRequestPassword, SIGNAL(signalAdminModTurnOn(QString)),
            objConnection, SLOT(slotAdminModTurnOn(QString)));

}
