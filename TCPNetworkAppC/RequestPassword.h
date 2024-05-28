#ifndef REQUESTPASSWORD_H
#define REQUESTPASSWORD_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class RequestPassword; }
QT_END_NAMESPACE

class RequestPassword : public QWidget {
        Q_OBJECT

    private:
        Ui::RequestPassword *uiRequestPass;

    public:
        RequestPassword(QWidget *parent = nullptr);
        ~RequestPassword();

    private slots:


        void on_pushButton_SendRequest_clicked();

    signals:
        void signalAdminModTurnOn(QString password);

};

#endif // REQUESTPASSWORD_H
