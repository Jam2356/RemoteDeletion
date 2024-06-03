#include "SuperAbility.h"
#include "ui_SuperAbility.h"

SuperAbility::SuperAbility(QWidget *parent) :
    QWidget(parent),
    uiSuperAbility(new Ui::SuperAbility) {
    uiSuperAbility->setupUi(this);

}

SuperAbility::~SuperAbility() {
    delete uiSuperAbility;

}

void SuperAbility::on_pushButton_kick_clicked() {
    QString nameOfKick = uiSuperAbility->lineEdit_kick->text();
    if(nameOfKick.isEmpty()) {
        return;
    }
    emit signalNameToKick(nameOfKick);
}

