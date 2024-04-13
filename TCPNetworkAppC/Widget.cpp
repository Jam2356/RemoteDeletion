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


//BUTTONS
void Widget::on_pushButton_connect_clicked() {
    emit signalConnectClicked();

}

void Widget::on_pushButton_deleteFile_clicked() {
    emit signalDeleteFileClicked(ui->lineEdit->text());

}



