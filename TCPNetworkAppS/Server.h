#ifndef SERVER_H
#define SERVER_H

#include <QObject>
#include <QTcpServer>
#include <QTcpSocket>
#include <QFile>

#include <EnumPackHeader.h>
#include <QTimer>

#include <QDebug>

class Server : public QObject {
    Q_OBJECT
public:
    explicit Server(QObject *parent = nullptr);

    void startListen();

private:
    QTcpServer * server;
    QMap<QTcpSocket *,QString> sockets;
    QString password = "pass";
    QPair<QTcpSocket *,QString> admin;
    QTimer * timer = new QTimer(this);
    int timeWork = 0;
    QString serverTimerWork;
    bool flagAdminExists = false;

    void debugAndUi(QString string);
    void parsingPacket(QString string, QTcpSocket * socket);
    bool deleteFile(QString fileName);

    QString packetToString(QString string);
    void sendInfoString(QString string, QTcpSocket * socket);

public slots:
    void newConnection();
    void slotReadClient();
    void slotTimeout();

signals:
    void signalStringToUi(QString string);

};

#endif // SERVER_H
