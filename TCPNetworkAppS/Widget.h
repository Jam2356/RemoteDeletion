﻿#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget {
    Q_OBJECT

private:
    Ui::Widget *ui;

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void slotStringToUi(QString string);
    void slotUpdateServerLive(int time);

};

#endif // WIDGET_H
