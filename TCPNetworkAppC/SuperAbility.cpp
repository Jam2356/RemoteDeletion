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

