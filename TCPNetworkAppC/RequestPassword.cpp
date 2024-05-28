#include "RequestPassword.h"
#include "ui_RequestPassword.h"

RequestPassword::RequestPassword(QWidget *parent) :
    QWidget(parent),
    uiRequestPass(new Ui::RequestPassword)
{
    uiRequestPass->setupUi(this);
}

RequestPassword::~RequestPassword()
{
    delete uiRequestPass;
}

void RequestPassword::on_pushButton_SendRequest_clicked() {
    QString password = uiRequestPass->lineEdit_EnterPass->text();
    if(password.isEmpty()) {
        return;
    }
    emit signalAdminModTurnOn(password);

}

