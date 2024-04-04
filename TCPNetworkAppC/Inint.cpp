#include "Inint.h"

Inint::Inint(QObject *parent)
    : QObject{parent}
{
    objWidget = new Widget;
    objConnection = new Connection;
}

void Inint::initialization() {
    connect(objWidget, SIGNAL(signalConnectClicked()),
            objConnection, SLOT(slotConnectClicked()));

    connect(objWidget, SIGNAL(signalDeleteFileClicked(QString)),
            objConnection, SLOT(slotDeleteFileClicked(QString)));
}
