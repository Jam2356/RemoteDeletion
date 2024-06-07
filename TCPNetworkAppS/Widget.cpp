﻿#include "Widget.h"
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

void Widget::slotUpdateServerLive(int time) {
    ui->label_serverLive->setText("Server live: " + QString::number(time) + " s");
}
