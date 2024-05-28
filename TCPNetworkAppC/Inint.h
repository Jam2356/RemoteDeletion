#ifndef ININT_H
#define ININT_H

#include <QObject>

#include "Connection.h"
#include "Widget.h"
#include "RequestPassword.h"

class Inint : public QObject {
    Q_OBJECT
public:
    explicit Inint(QObject *parent = nullptr);

    Widget *objWidget;
    Connection *objConnection;
    RequestPassword *objWRequestPassword;

    void initialization();

signals:

};

#endif // ININT_H
