/********************************************************************************
** Form generated from reading UI file 'Widget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_8;
    QTextBrowser *textBrowser;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QPushButton *pushButton_connect;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QPushButton *pushButton_admin;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QPushButton *pushButton_2_Start;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_6;
    QLineEdit *lineEdit_2_name;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QVBoxLayout *verticalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_deleteFile;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(770, 360);
        Widget->setMinimumSize(QSize(770, 360));
        Widget->setMaximumSize(QSize(770, 470));
        gridLayout = new QGridLayout(Widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        textBrowser = new QTextBrowser(Widget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setMinimumSize(QSize(500, 200));

        horizontalLayout_8->addWidget(textBrowser);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        pushButton_connect = new QPushButton(Widget);
        pushButton_connect->setObjectName(QString::fromUtf8("pushButton_connect"));
        pushButton_connect->setMaximumSize(QSize(100, 24));

        horizontalLayout_2->addWidget(pushButton_connect);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(Widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        pushButton_admin = new QPushButton(Widget);
        pushButton_admin->setObjectName(QString::fromUtf8("pushButton_admin"));
        pushButton_admin->setEnabled(false);
        pushButton_admin->setMaximumSize(QSize(100, 24));

        horizontalLayout_3->addWidget(pushButton_admin);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(Widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        pushButton_2_Start = new QPushButton(Widget);
        pushButton_2_Start->setObjectName(QString::fromUtf8("pushButton_2_Start"));
        pushButton_2_Start->setEnabled(false);
        pushButton_2_Start->setMaximumSize(QSize(100, 24));

        horizontalLayout_4->addWidget(pushButton_2_Start);


        verticalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_5 = new QLabel(Widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_5->addWidget(label_5);

        horizontalSpacer_3 = new QSpacerItem(100, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);


        verticalLayout_3->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        lineEdit_2_name = new QLineEdit(Widget);
        lineEdit_2_name->setObjectName(QString::fromUtf8("lineEdit_2_name"));

        horizontalLayout_6->addWidget(lineEdit_2_name);

        horizontalSpacer = new QSpacerItem(100, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);


        verticalLayout_3->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout_7->addItem(verticalSpacer);

        horizontalSpacer_4 = new QSpacerItem(100, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_4);


        verticalLayout_3->addLayout(horizontalLayout_7);


        horizontalLayout_8->addLayout(verticalLayout_3);


        verticalLayout_4->addLayout(horizontalLayout_8);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_2 = new QLabel(Widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);

        lineEdit = new QLineEdit(Widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setMinimumSize(QSize(330, 24));

        verticalLayout_2->addWidget(lineEdit);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalSpacer_2 = new QSpacerItem(100, 18, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout->addItem(horizontalSpacer_2);

        pushButton_deleteFile = new QPushButton(Widget);
        pushButton_deleteFile->setObjectName(QString::fromUtf8("pushButton_deleteFile"));
        pushButton_deleteFile->setMaximumSize(QSize(100, 24));

        verticalLayout->addWidget(pushButton_deleteFile);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_4->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout_4, 0, 0, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        label->setText(QCoreApplication::translate("Widget", "Connect to Server:", nullptr));
        pushButton_connect->setText(QCoreApplication::translate("Widget", "Connect", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "Become at admin:", nullptr));
        pushButton_admin->setText(QCoreApplication::translate("Widget", "Admin mod", nullptr));
        label_4->setText(QCoreApplication::translate("Widget", "Special abilities:", nullptr));
        pushButton_2_Start->setText(QCoreApplication::translate("Widget", "Start", nullptr));
        label_5->setText(QCoreApplication::translate("Widget", "Name:", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "Inter file name:", nullptr));
        pushButton_deleteFile->setText(QCoreApplication::translate("Widget", "Delete file", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
