#ifndef INIT_H
#define INIT_H

#include <QObject>

#include "Widget.h"
#include "Server.h"

class Init : public QObject
{
    Q_OBJECT
public:
    explicit Init(QObject *parent = nullptr);
    Widget *ui;
    Server *server;

    void init();

signals:

};

#endif // INIT_H
