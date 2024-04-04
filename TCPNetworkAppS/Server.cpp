#include "Server.h"

Server::Server(QObject *parent)
    : QObject{parent}
{
    server = new QTcpServer(this);

    connect(server, SIGNAL(newConnection()), this, SLOT(newConnection()));

    if(!server->listen(QHostAddress::LocalHost, 1234)) {
        qDebug() << "Server error" ;

    }
    else {
        qDebug() << "Server start" ;
    }
}

void Server::newConnection() {
//    QTcpSocket * socket = server->nextPendingConnection();
//    socket->write("hello client");
//    socket->flush();
//    socket->waitForBytesWritten(3000);
//    socket->close();

//    QTcpSocket* clientSocket = server->nextPendingConnection();
//    int idusersocs = clientSocket->socketDescriptor();
//    clients[idusersocs]=clientSocket;
//    connect(clients[idusersocs],SIGNAL(readyRead()),this, SLOT(slotReadClient()));
//    QTextStream os(clientSocket);
//    os.setAutoDetectUnicode(true);
//    os<<"asdas";

    QTcpSocket * socket = server->nextPendingConnection();

    if (!socket)
        return;

    qDebug("Client connected");
    socket->write("Hello you connected");

    socket->waitForReadyRead();
    QByteArray data = socket->readAll();
    QString a;
    a.append(data.constData());
    if(!a.isEmpty()){
        qDebug() << data.constData();
    }
//    socket->write("Hello you connected");
    connect(socket, SIGNAL(readyRead()),this, SLOT(slotReadClient()));

    sockets.append(socket);
}

void Server::slotReadClient() {
    int i = 0;
    for(QTcpSocket *socket : sockets){
        if(i == 0) {
            QByteArray data = socket->readAll();
            QString a;
            a.append(data.constData());
            if(!a.isEmpty()){
                qDebug() << data.constData();
            }
            socket->write("1");
        }
        else {
            QByteArray data = socket->readAll();
            QString a;
            a.append(data.constData());
            if(!a.isEmpty()){
                qDebug() << data.constData();
            }
            socket->write(std::to_string(sockets.indexOf(socket, 0)+1).c_str());
        }
        i++;
    }
}


