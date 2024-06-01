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
        void slotStringToUi(QString string);
        void slotBlockNameLine();
        void slotActivationStart();

        //Buttons
        void on_pushButton_connect_clicked();
        void on_pushButton_deleteFile_clicked();
        void on_pushButton_admin_clicked();

    signals:
        void signalConnectClicked(QString name);
        void signalDeleteFileClicked(QString fileName);
        void signalShowRequest();


};
#endif // WIDGET_H
