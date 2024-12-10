/********************************************************************************
** Form generated from reading UI file 'loginview.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINVIEW_H
#define UI_LOGINVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginView
{
public:
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_3;
    QSpacerItem *verticalSpacer;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *inputUserName;
    QLabel *label_2;
    QLineEdit *inputUserPassword;
    QHBoxLayout *horizontalLayout;
    QPushButton *btSiginUp;
    QPushButton *btSignIn;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QWidget *LoginView)
    {
        if (LoginView->objectName().isEmpty())
            LoginView->setObjectName("LoginView");
        LoginView->resize(795, 522);
        verticalLayout = new QVBoxLayout(LoginView);
        verticalLayout->setObjectName("verticalLayout");
        verticalSpacer_2 = new QSpacerItem(20, 39, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        label_3 = new QLabel(LoginView);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("font: 14pt \"Microsoft YaHei UI\";"));

        verticalLayout->addWidget(label_3, 0, Qt::AlignmentFlag::AlignHCenter);

        verticalSpacer = new QSpacerItem(20, 38, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        formLayout->setHorizontalSpacing(7);
        formLayout->setVerticalSpacing(15);
        formLayout->setContentsMargins(290, -1, 290, 30);
        label = new QLabel(LoginView);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        inputUserName = new QLineEdit(LoginView);
        inputUserName->setObjectName("inputUserName");

        formLayout->setWidget(0, QFormLayout::FieldRole, inputUserName);

        label_2 = new QLabel(LoginView);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        inputUserPassword = new QLineEdit(LoginView);
        inputUserPassword->setObjectName("inputUserPassword");

        formLayout->setWidget(1, QFormLayout::FieldRole, inputUserPassword);


        verticalLayout->addLayout(formLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(290, -1, 290, -1);
        btSiginUp = new QPushButton(LoginView);
        btSiginUp->setObjectName("btSiginUp");

        horizontalLayout->addWidget(btSiginUp);

        btSignIn = new QPushButton(LoginView);
        btSignIn->setObjectName("btSignIn");

        horizontalLayout->addWidget(btSignIn);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer_3 = new QSpacerItem(20, 39, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);


        retranslateUi(LoginView);

        QMetaObject::connectSlotsByName(LoginView);
    } // setupUi

    void retranslateUi(QWidget *LoginView)
    {
        LoginView->setWindowTitle(QCoreApplication::translate("LoginView", "\347\231\273\345\275\225", nullptr));
        label_3->setText(QCoreApplication::translate("LoginView", "\346\254\242\350\277\216\344\275\277\347\224\250\350\257\212\346\226\255\346\265\213\350\257\225\347\263\273\347\273\237", nullptr));
        label->setText(QCoreApplication::translate("LoginView", "\347\224\250\346\210\267\345\220\215:", nullptr));
        label_2->setText(QCoreApplication::translate("LoginView", "\345\257\206\347\240\201\357\274\232", nullptr));
        btSiginUp->setText(QCoreApplication::translate("LoginView", "\346\263\250\345\206\214", nullptr));
        btSignIn->setText(QCoreApplication::translate("LoginView", "\347\231\273\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginView: public Ui_LoginView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINVIEW_H
