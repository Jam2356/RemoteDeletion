#include "Connection.h"

Connection::Connection(QObject *parent)
    : QObject{parent} {
    mySocket = new QTcpSocket(this);

    connect(mySocket, &QTcpSocket::readyRead, [&]() {
        QTextStream T(mySocket);
        if(flagIsOnline == false) {
            flagIsOnline = true;
            mySocket->write(myName.toStdString().c_str());
            emit signalNameLineBlocked();
        }

        parsingPacket(T.readAll());
    });

}

void Connection::slotConnectClicked(QString name) {
    myName = name;
    mySocket->connectToHost("LocalHost", 1234);

}

void Connection::slotDeleteFileClicked(QString fileName) {
    fileName.insert(0, QString(PackHeader::DeleteFile)); //Indicate what package we are sending
    mySocket->write(fileName.toStdString().c_str());

}

void Connection::slotAdminModTurnOn(QString password) {
    if(flagIsAdmin) {
        return;
    }
    password.insert(0, QString(PackHeader::AdminMod));
    mySocket->write(password.toStdString().c_str());

}

void Connection::debugAndUi(QString string) { //Prepare the packet to Ui
    emit signalStringToUi(string);
    qDebug() << string;

}

QString Connection::packetToString(QString string) { //Packet to data
    return string.remove(0,1);
}

void Connection::parsingPacket(QString string) { //Parsing the packet
    QString idFrom = string;
    PackHeader id = (idFrom.remove(1, idFrom.length())).at(0).unicode();

    qDebug() << "\n Rec pack: " << id;

    if(id == PackHeader::InOnline) {
        debugAndUi("In online");
    }

    if(id == PackHeader::FileWasDelete) {
        debugAndUi("File was delete");
    }

    if(id == PackHeader::FileNotDelete) {
        debugAndUi("File not delete");
    }

    if(id == PackHeader::AdminModOn) {

        if(flagIsAdmin) {
            flagIsAdmin = true;
            debugAndUi("Admin mod on");

        }

        debugAndUi(packetToString(string));
        emit signalAdminActivationStart();
        //received names
        //enable button
    }

    if(id == PackHeader::AdminNotAccess) {
        debugAndUi("Admin not access");
        debugAndUi(packetToString(string));
    }

    if(id == PackHeader::Info) {
        debugAndUi(packetToString(string));
    }

    //debugAndUi(packetToString(string));
}
