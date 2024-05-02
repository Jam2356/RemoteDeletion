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
        qDebug() << " InOnline";
    }

    if(id == PackHeader::FileWasDelete) {
        qDebug() << " FileWasDelete";
    }

    if(id == PackHeader::FileNotDelete) {
        qDebug() << " FileNotDelete";
    }

    if(id == PackHeader::AdminNotAccess) {
        qDebug() << " AdminNotAccess";
    }

    if(id == PackHeader::AdminNotAccess) {
        qDebug() << " AdminNotAccess";
    }

    if(id == PackHeader::DeleteFile) {
        qDebug() << " DeleteFile";
    }


//    switch (id) {
//    case PackHeader::InOnline:
//        qDebug() << " InOnline"; break;

//    case PackHeader::FileWasDelete:
//        qDebug() << " FileWasDelete"; break;

//    case PackHeader::FileNotDelete:
//        qDebug() << " FileNotDelete"; break;

//    case PackHeader::AdminModOn:
//        qDebug() << " AdminModOn"; break;

//    case PackHeader::AdminNotAccess:
//        qDebug() << " AdminNotAccess"; break;

//    default: break;
//    }


    debugAndUi(packetToString(string));
}
