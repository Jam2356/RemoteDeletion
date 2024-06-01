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
#include <QtWidgets/QFormLayout>
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
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QTextBrowser *textBrowser;
    QFormLayout *formLayout_2;
    QLabel *label;
    QPushButton *pushButton_connect;
    QLabel *label_3;
    QPushButton *pushButton_admin;
    QLabel *label_4;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QLineEdit *lineEdit_2_name;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer;
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
        Widget->resize(470, 360);
        Widget->setMinimumSize(QSize(470, 360));
        Widget->setMaximumSize(QSize(470, 470));
        gridLayout = new QGridLayout(Widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        textBrowser = new QTextBrowser(Widget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));

        horizontalLayout_2->addWidget(textBrowser);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label);

        pushButton_connect = new QPushButton(Widget);
        pushButton_connect->setObjectName(QString::fromUtf8("pushButton_connect"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, pushButton_connect);

        label_3 = new QLabel(Widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_3);

        pushButton_admin = new QPushButton(Widget);
        pushButton_admin->setObjectName(QString::fromUtf8("pushButton_admin"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, pushButton_admin);

        label_4 = new QLabel(Widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_4);

        pushButton_2 = new QPushButton(Widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setEnabled(false);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, pushButton_2);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        formLayout_2->setItem(3, QFormLayout::FieldRole, horizontalSpacer_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout_2->setItem(5, QFormLayout::LabelRole, verticalSpacer);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout_2->setItem(5, QFormLayout::FieldRole, verticalSpacer_2);

        lineEdit_2_name = new QLineEdit(Widget);
        lineEdit_2_name->setObjectName(QString::fromUtf8("lineEdit_2_name"));

        formLayout_2->setWidget(4, QFormLayout::LabelRole, lineEdit_2_name);

        label_5 = new QLabel(Widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_5);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        formLayout_2->setItem(4, QFormLayout::FieldRole, horizontalSpacer);


        horizontalLayout_2->addLayout(formLayout_2);


        verticalLayout_3->addLayout(horizontalLayout_2);

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
        horizontalSpacer_2 = new QSpacerItem(88, 18, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(horizontalSpacer_2);

        pushButton_deleteFile = new QPushButton(Widget);
        pushButton_deleteFile->setObjectName(QString::fromUtf8("pushButton_deleteFile"));
        pushButton_deleteFile->setMaximumSize(QSize(100, 24));

        verticalLayout->addWidget(pushButton_deleteFile);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout_3, 0, 0, 1, 1);


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
        pushButton_2->setText(QCoreApplication::translate("Widget", "Start", nullptr));
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
