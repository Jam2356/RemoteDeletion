#ifndef SERVER_H
#define SERVER_H

#include <QObject>
#include <QTcpServer>
#include <QTcpSocket>

#include <QDebug>

class Server : public QObject
{
    Q_OBJECT
public:
    explicit Server(QObject *parent = nullptr);

    void startListen();

private:
    QTcpServer * server;

    QList<QTcpSocket *> sockets;

    void debugAndUi(QString string);

public slots:
    void newConnection();
    void slotReadClient();

signals:
    void signalStringToUi(QString string);

};

#endif // SERVER_H
