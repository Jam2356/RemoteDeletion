#ifndef SERVER_H
#define SERVER_H

#include <QObject>
#include <QTcpServer>
#include <QTcpSocket>
#include <QFile>

#include <EnumPackHeader.h>

#include <QDebug>

class Server : public QObject {
    Q_OBJECT
public:
    explicit Server(QObject *parent = nullptr);

    void startListen();

private:
    QTcpServer * server;
    QList<QTcpSocket *> sockets;
    QString password = "pass";

    void debugAndUi(QString string);
    void parsingPacket(QString string, QTcpSocket * socket);
    bool deleteFile(QString fileName);

    QString packetToString(QString string);
    void sendInfoString(QString string, QTcpSocket * socket);

public slots:
    void newConnection();
    void slotReadClient();

signals:
    void signalStringToUi(QString string);

};

#endif // SERVER_H
