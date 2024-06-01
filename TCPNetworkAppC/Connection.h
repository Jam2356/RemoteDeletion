#ifndef CONNECTION_H
#define CONNECTION_H

#include <QObject>
#include <QTcpSocket>

#include <EnumPackHeader.h>

class Connection : public QObject {
    Q_OBJECT
public:
    explicit Connection(QObject *parent = nullptr);

    void bind();

private:
    QTcpSocket * mySocket;
    bool flagIsOnline = false;
    bool flagIsAdmin = false;
    QString myName;

    void debugAndUi(QString string);
    void parsingPacket(QString string);
    QString packetToString(QString string);

public slots:
    void slotConnectClicked(QString name);
    void slotDeleteFileClicked(QString fileName);
    void slotAdminModTurnOn(QString password);

signals:
    void signalStringToUi(QString string);
    void signalNameLineBlocked();

};

#endif // CONNECTION_H
