/********************************************************************************
** Form generated from reading UI file 'SuperAbility.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUPERABILITY_H
#define UI_SUPERABILITY_H

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

class Ui_SuperAbility
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit_kick;
    QPushButton *pushButton_kick;

    void setupUi(QWidget *SuperAbility)
    {
        if (SuperAbility->objectName().isEmpty())
            SuperAbility->setObjectName(QString::fromUtf8("SuperAbility"));
        SuperAbility->resize(200, 100);
        SuperAbility->setMinimumSize(QSize(200, 100));
        SuperAbility->setMaximumSize(QSize(200, 100));
        gridLayout = new QGridLayout(SuperAbility);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(SuperAbility);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lineEdit_kick = new QLineEdit(SuperAbility);
        lineEdit_kick->setObjectName(QString::fromUtf8("lineEdit_kick"));

        horizontalLayout->addWidget(lineEdit_kick);

        pushButton_kick = new QPushButton(SuperAbility);
        pushButton_kick->setObjectName(QString::fromUtf8("pushButton_kick"));

        horizontalLayout->addWidget(pushButton_kick);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(SuperAbility);

        QMetaObject::connectSlotsByName(SuperAbility);
    } // setupUi

    void retranslateUi(QWidget *SuperAbility)
    {
        SuperAbility->setWindowTitle(QCoreApplication::translate("SuperAbility", "Form", nullptr));
        label->setText(QCoreApplication::translate("SuperAbility", "Enter name to kick:", nullptr));
        pushButton_kick->setText(QCoreApplication::translate("SuperAbility", "Kick", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SuperAbility: public Ui_SuperAbility {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUPERABILITY_H
