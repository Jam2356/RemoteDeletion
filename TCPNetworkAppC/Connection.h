#ifndef CONNECTION_H
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
//    const char* callSign = "Alpha: ";

public slots:
    void slotConnectClicked();
    void slotDeleteFileClicked(QString fileName);

signals:

};

#endif // CONNECTION_H
