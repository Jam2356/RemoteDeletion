#include "Init.h"

Init::Init(QObject *parent)
    : QObject{parent} {
    ui = new Widget;
    server = new Server;
    this->init();
    server->startListen();

}

void Init::init() {
    connect(server, SIGNAL(signalStringToUi(QString)),
            ui, SLOT(slotStringToUi(QString)));

}
