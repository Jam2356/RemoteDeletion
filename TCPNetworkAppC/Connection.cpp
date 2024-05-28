#include "Connection.h"

Connection::Connection(QObject *parent)
    : QObject{parent} {
    mySocket = new QTcpSocket(this);

    connect(mySocket, &QTcpSocket::readyRead, [&]() {
        QTextStream T(mySocket);
        if(flagIsOnline == false) {
            flagIsOnline = true;
            mySocket->write("Thanks for my connection :)");
        }

        parsingPacket(T.readAll());
    });

}

void Connection::slotConnectClicked() {
    mySocket->connectToHost("LocalHost", 1234);

}

void Connection::slotDeleteFileClicked(QString fileName) {
    fileName.insert(0, QString(PackHeader::DeleteFile)); //Indicate what package we are sending
    mySocket->write(fileName.toStdString().c_str());

}

void Connection::slotAdminModTurnOn() {
    QString message = "pass";
    message.insert(0, QString(PackHeader::AdminMod));
    mySocket->write(message.toStdString().c_str());

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
        debugAndUi("Admin mod on");
        //received names
        //enable button
    }

    if(id == PackHeader::AdminNotAccess) {
        debugAndUi("Admin not access");
    }

    if(id == PackHeader::Info) {
        debugAndUi(packetToString(string));
    }

    //debugAndUi(packetToString(string));
}
