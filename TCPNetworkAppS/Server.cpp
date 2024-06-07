#include "Server.h"

Server::Server(QObject *parent)
    : QObject{parent} {
    server = new QTcpServer(this);
    timer = new QTimer(this);
    timer->start(1000);

    connect(server, SIGNAL(newConnection()), this, SLOT(newConnection()));
    connect(timer, SIGNAL(timeout()),this, SLOT(slotTimeout()));
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

    if(!socket) {
        return;
    }

    if(sockets.size() > 2) {
        QString msg = "Maximum number of clients";
        debugAndUi(msg);
        msg.insert(0, PackHeader::Info);
        socket->write(msg.toStdString().c_str());
        return;
    }

    debugAndUi("Client connected");
    sendInfoString("Hello, you are connected!", socket);

    socket->waitForReadyRead();
    QByteArray data = socket->readAll();
    QString stringData;
    stringData.append(data.constData());

    if(stringData.isEmpty()){
        return;
    }

    debugAndUi(data.constData() + serverTimerWork);

    connect(socket, SIGNAL(readyRead()),this, SLOT(slotReadClient()));

    sockets.insert(socket, data.constData());
    timeWorkClients.insert(socket, timeWork);

}

void Server::slotReadClient() {
    foreach(QTcpSocket * socket, sockets.keys()) {
        QString strData;
        strData.append((socket->readAll()).constData());
        if(strData.isEmpty()){
            continue;
        }
        parsingPacket(strData, socket);
    }

}

void Server::slotTimeout() {
    timeWork++;
    serverTimerWork = "\tServer work: " + QString::number(timeWork) + " s";
    timer->start(1000);

}

void Server::debugAndUi(QString string) {
    emit signalStringToUi(string);
    qDebug() << string;

}

void Server::parsingPacket(QString string, QTcpSocket * socket) { //Parsing the packet
    QString idFrom = string;
    PackHeader id = (idFrom.remove(1, idFrom.length())).at(0).unicode();

    QString path = "ServerFolder/";
    qDebug() << "\n Rec pack: " << id;


    if(id == PackHeader::DeleteFile) {
        qDebug() << " DeleteFile";
        debugAndUi(packetToString(string));

        QString msg = " ";

        if(!deleteFile(path+packetToString(string))) {
            msg.insert(0, PackHeader::FileNotDelete);
            socket->write(msg.toStdString().c_str());
            return;
        }

        msg.insert(0, PackHeader::FileWasDelete);
        socket->write(msg.toStdString().c_str());
    }

    if(id == PackHeader::DeleteClient) {

        if(!sockets.contains(sockets.key(packetToString(string)))) {
            QString msg = "Client does not exist";
            debugAndUi("Client " + packetToString(string) + " does not exist");
            msg.insert(0, PackHeader::Info);
            socket->write(msg.toStdString().c_str());
            return;
        }

        if(packetToString(string) == admin.second) {
            return;
        }


        QString goodByeMsg = "You were disconnected...";
        goodByeMsg.insert(0, PackHeader::Info);

        sockets.key(packetToString(string))->write(goodByeMsg.toStdString().c_str());


        QString msgForAdmin = "Client " + packetToString(string) + " were disconnected, " +
                              "session time: " + QString::number(timeWork-timeWorkClients.value(sockets.key(packetToString(string)))) + " s";

        msgForAdmin.insert(0, PackHeader::Info);

        admin.first->write(msgForAdmin.toStdString().c_str());

        debugAndUi(msgForAdmin);

        sockets.remove(sockets.key(packetToString(string)));

    }

    if(id == PackHeader::AdminMod) {

        //blocking to all C`s function - AdminMod, if admin exists
        if(flagAdminExists) {
            QString msg = "Admin already exists! It`s " + admin.second;
            msg.insert(0, PackHeader::AdminNotAccess);
            socket->write(msg.toStdString().c_str());
            return;
        }

        debugAndUi(packetToString(string) + ": AdminMod request" + serverTimerWork);

        if(packetToString(string) != password) {
            QString msg = "Password incorrect";
            debugAndUi("Received password incorrect");
            msg.insert(0, PackHeader::AdminNotAccess);
            socket->write(msg.toStdString().c_str());
            return;
        }

        debugAndUi("Received password correct");

        flagAdminExists = true;
        admin.first = socket;                   //Remember admin socket
        admin.second = sockets.value(socket);   //Remember admin name

        //send names
        QString fullNamesString = "Clients: ";
        fullNamesString.insert(0, PackHeader::AdminModOn);

        foreach(QTcpSocket * thisSocket, sockets.keys()) {
            if(thisSocket == socket) {
                continue;
            }

            fullNamesString.append(sockets.value(thisSocket)+" ");
        }

        socket->write(fullNamesString.toStdString().c_str());

    }

}

QString Server::packetToString(QString string) { //Packet to data
    return string.remove(0,1);
}

void Server::sendInfoString(QString string, QTcpSocket * socket) {
    string.insert(0, PackHeader::Info);
    socket->write(string.toStdString().c_str());
}

bool Server::deleteFile(QString fileName) {
    QFile file(fileName);
    if(file.remove()) {
        debugAndUi("File was delete");
        return true;
    }
    else {
        debugAndUi("File not delete");
        return false;
    }

}
