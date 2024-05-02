#include "Server.h"

Server::Server(QObject *parent)
    : QObject{parent} {
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
        QString strData;
        strData.append((socket->readAll()).constData());
        if(strData.isEmpty()){
            return;
        }
        parsingPacket(strData, socket);
//        socket->write(std::to_string(sockets.indexOf(socket, 0)+1).c_str());
    }

}

void Server::debugAndUi(QString string) {
    emit signalStringToUi(string);
    qDebug() << string;

}

void Server::parsingPacket(QString string, QTcpSocket * socket) { //Parsing the packet
    QString idFrom = string;
    PackHeader id = (idFrom.remove(1, idFrom.length())).at(0).unicode();

    QString a = "123";
    qDebug() << "\n Rec pack: " << id;


    if(id == PackHeader::DeleteFile) {
        qDebug() << " DeleteFile";
        debugAndUi(packetToString(string));
        a.insert(0, PackHeader::FileNotDelete);
        socket->write(a.toStdString().c_str());
    }

    if(id == PackHeader::AdminMod) {
        qDebug() << " AdminMod";
    }

}

QString Server::packetToString(QString string) { //Packet to data
    return string.remove(0,1);
}
