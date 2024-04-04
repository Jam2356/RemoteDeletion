#include "Connection.h"

Connection::Connection(QObject *parent)
    : QObject{parent} {
    mySocket = new QTcpSocket(this);

    connect(mySocket, &QTcpSocket::readyRead, [&]() {
        QTextStream T(mySocket);
        qDebug() << T.readAll();
        if(flagIsOnline == false) {
            flagIsOnline = true;
            mySocket->write("Bravo: Thanks for my connection :)");
        }
    });
}

void Connection::slotConnectClicked() {
    mySocket->connectToHost("LocalHost", 1234);
}

void Connection::slotDeleteFileClicked(QString fileName) {
    mySocket->write(fileName.toStdString().c_str());
}


