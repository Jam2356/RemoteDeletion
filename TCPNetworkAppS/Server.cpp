#include "Server.h"

Server::Server(QObject *parent)
    : QObject{parent}
{
    server = new QTcpServer(this);

    connect(server, SIGNAL(newConnection()), this, SLOT(newConnection()));
}

void Server::startListen() {
    if(!server->listen(QHostAddress::LocalHost, 1234)) {
        debugAndUi("Server error");
    }
    else {
        debugAndUi("Server start");
    }
}

void Server::newConnection() {
    QTcpSocket * socket = server->nextPendingConnection();

    if (!socket)
        return;

    debugAndUi("Client connected");
    socket->write("Hello you connected");

    socket->waitForReadyRead();
    QByteArray data = socket->readAll();
    QString a;
    a.append(data.constData());
    if(!a.isEmpty()){
        debugAndUi(data.constData());
    }

    connect(socket, SIGNAL(readyRead()),this, SLOT(slotReadClient()));

    sockets.append(socket);

}

void Server::slotReadClient() {
    for(QTcpSocket *socket : sockets) {
        QByteArray data = socket->readAll();
        QString a;
        a.append(data.constData());
        if(!a.isEmpty()){
            debugAndUi(data.constData());
            socket->write(std::to_string(sockets.indexOf(socket, 0)+1).c_str());
        }
    }

}

void Server::debugAndUi(QString string) {
    emit signalStringToUi(string);
    qDebug() << string;

}



