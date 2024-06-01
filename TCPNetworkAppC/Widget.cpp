#include "Widget.h"
#include "ui_Widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget) {
    ui->setupUi(this);

}

Widget::~Widget() {
    delete ui;

}

void Widget::slotStringToUi(QString string) {
    ui->textBrowser->append(string);

}

void Widget::slotBlockNameLine() {
    ui->lineEdit_2_name->setDisabled(true);
    ui->pushButton_connect->setDisabled(true);

}

void Widget::slotActivationStart() {
    ui->pushButton_admin->setDisabled(true);
    ui->pushButton_admin->setText("Activated");
    ui->pushButton_2_Start->setEnabled(true);

}


//BUTTONS
void Widget::on_pushButton_connect_clicked() {
    QString name = ui->lineEdit_2_name->text();
    if(name.isEmpty()) {
        return;
    }
    emit signalConnectClicked(name);
}

void Widget::on_pushButton_deleteFile_clicked() {
    emit signalDeleteFileClicked(ui->lineEdit->text());

}

void Widget::on_pushButton_admin_clicked() {
    emit signalShowRequest();

}

void Widget::on_pushButton_2_Start_clicked() {
    emit signalStartSuperAbility();

}

