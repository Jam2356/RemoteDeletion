/********************************************************************************
** Form generated from reading UI file 'RequestPassword.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REQUESTPASSWORD_H
#define UI_REQUESTPASSWORD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RequestPassword
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *lineEdit_EnterPass;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_SendRequest;

    void setupUi(QWidget *RequestPassword)
    {
        if (RequestPassword->objectName().isEmpty())
            RequestPassword->setObjectName(QString::fromUtf8("RequestPassword"));
        RequestPassword->setWindowModality(Qt::ApplicationModal);
        RequestPassword->resize(200, 100);
        RequestPassword->setMinimumSize(QSize(200, 100));
        RequestPassword->setMaximumSize(QSize(220, 120));
        gridLayout = new QGridLayout(RequestPassword);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(RequestPassword);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        lineEdit_EnterPass = new QLineEdit(RequestPassword);
        lineEdit_EnterPass->setObjectName(QString::fromUtf8("lineEdit_EnterPass"));

        verticalLayout->addWidget(lineEdit_EnterPass);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_SendRequest = new QPushButton(RequestPassword);
        pushButton_SendRequest->setObjectName(QString::fromUtf8("pushButton_SendRequest"));

        horizontalLayout->addWidget(pushButton_SendRequest);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(RequestPassword);

        QMetaObject::connectSlotsByName(RequestPassword);
    } // setupUi

    void retranslateUi(QWidget *RequestPassword)
    {
        RequestPassword->setWindowTitle(QCoreApplication::translate("RequestPassword", "Form", nullptr));
        label->setText(QCoreApplication::translate("RequestPassword", "Enter the password:", nullptr));
        pushButton_SendRequest->setText(QCoreApplication::translate("RequestPassword", "Send", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RequestPassword: public Ui_RequestPassword {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REQUESTPASSWORD_H
