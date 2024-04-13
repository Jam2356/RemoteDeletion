﻿#ifndef CONNECTION_H
#define CONNECTION_H

#include <QObject>
#include <QTcpSocket>

class Connection : public QObject
{
    Q_OBJECT
public:
    explicit Connection(QObject *parent = nullptr);

    void bind();

private:
    QTcpSocket * mySocket;
    bool flagIsOnline = false;

    void debugAndUi(QString string);

public slots:
    void slotConnectClicked();
    void slotDeleteFileClicked(QString fileName);

signals:
    void signalStringToUi(QString string);

};

#endif // CONNECTION_H
