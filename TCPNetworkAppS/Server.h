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

private:
    QTcpServer * server;

    QList<QTcpSocket *> sockets;

public slots:
    void newConnection();
    void slotReadClient();

signals:

};

#endif // SERVER_H
