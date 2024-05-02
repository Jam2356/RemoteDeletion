﻿#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QDebug>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget {
    Q_OBJECT

private:
    Ui::Widget *ui;

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_pushButton_connect_clicked();
    void on_pushButton_deleteFile_clicked();
    void slotStringToUi(QString string);

signals:
    void signalConnectClicked();
    void signalDeleteFileClicked(QString fileName);

};
#endif // WIDGET_H
