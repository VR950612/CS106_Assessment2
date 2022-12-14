/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLineEdit *lineEdit_SearchBar;
    QLabel *label;
    QPushButton *pushButton_Infomation;
    QPushButton *pushButton_RenewBook;
    QPushButton *pushButton_Signup;
    QPushButton *pushButton_AboutUs;
    QPushButton *pushButton;
    QPushButton *pushButton_Login;
    QPushButton *pushButton_ReturnBook;
    QLabel *label_Instagram;
    QLabel *label_Twitter;
    QLabel *label_Facebook;
    QLabel *label_Youtube;
    QLabel *label_LibraryPic;
    QLabel *label_Logo;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(800, 600);
        lineEdit_SearchBar = new QLineEdit(Widget);
        lineEdit_SearchBar->setObjectName("lineEdit_SearchBar");
        lineEdit_SearchBar->setGeometry(QRect(280, 50, 341, 26));
        label = new QLabel(Widget);
        label->setObjectName("label");
        label->setGeometry(QRect(480, 140, 301, 271));
        QFont font;
        font.setFamilies({QString::fromUtf8("High Tower Text")});
        font.setPointSize(10);
        label->setFont(font);
        pushButton_Infomation = new QPushButton(Widget);
        pushButton_Infomation->setObjectName("pushButton_Infomation");
        pushButton_Infomation->setGeometry(QRect(310, 530, 141, 29));
        pushButton_Infomation->setStyleSheet(QString::fromUtf8("background-color: blue;\n"
"color: white;"));
        pushButton_RenewBook = new QPushButton(Widget);
        pushButton_RenewBook->setObjectName("pushButton_RenewBook");
        pushButton_RenewBook->setGeometry(QRect(630, 450, 131, 29));
        pushButton_RenewBook->setStyleSheet(QString::fromUtf8("background-color: blue;\n"
"color: white;"));
        pushButton_Signup = new QPushButton(Widget);
        pushButton_Signup->setObjectName("pushButton_Signup");
        pushButton_Signup->setEnabled(true);
        pushButton_Signup->setGeometry(QRect(630, 100, 131, 29));
        pushButton_Signup->setStyleSheet(QString::fromUtf8("background-color: blue;\n"
"color: white;"));
        pushButton_AboutUs = new QPushButton(Widget);
        pushButton_AboutUs->setObjectName("pushButton_AboutUs");
        pushButton_AboutUs->setGeometry(QRect(310, 450, 141, 29));
        pushButton_AboutUs->setStyleSheet(QString::fromUtf8("background-color: blue;\n"
"color: white;"));
        pushButton = new QPushButton(Widget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(310, 490, 141, 29));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: blue;\n"
"color: white;"));
        pushButton_Login = new QPushButton(Widget);
        pushButton_Login->setObjectName("pushButton_Login");
        pushButton_Login->setGeometry(QRect(630, 50, 131, 29));
        pushButton_Login->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"qproperty-icon: url(:/user.png);\n"
"qproperty-iconSize: 26px 26px;\n"
"text-align: center;\n"
"color: white;\n"
"background-color: blue;\n"
"}"));
        pushButton_ReturnBook = new QPushButton(Widget);
        pushButton_ReturnBook->setObjectName("pushButton_ReturnBook");
        pushButton_ReturnBook->setGeometry(QRect(630, 490, 131, 29));
        pushButton_ReturnBook->setStyleSheet(QString::fromUtf8("background-color: blue;\n"
"color: white;"));
        label_Instagram = new QLabel(Widget);
        label_Instagram->setObjectName("label_Instagram");
        label_Instagram->setGeometry(QRect(88, 520, 63, 51));
        label_Twitter = new QLabel(Widget);
        label_Twitter->setObjectName("label_Twitter");
        label_Twitter->setGeometry(QRect(228, 520, 63, 51));
        label_Facebook = new QLabel(Widget);
        label_Facebook->setObjectName("label_Facebook");
        label_Facebook->setGeometry(QRect(18, 520, 63, 51));
        label_Youtube = new QLabel(Widget);
        label_Youtube->setObjectName("label_Youtube");
        label_Youtube->setGeometry(QRect(158, 519, 63, 51));
        label_LibraryPic = new QLabel(Widget);
        label_LibraryPic->setObjectName("label_LibraryPic");
        label_LibraryPic->setGeometry(QRect(18, 170, 450, 230));
        label_Logo = new QLabel(Widget);
        label_Logo->setObjectName("label_Logo");
        label_Logo->setGeometry(QRect(10, 20, 261, 71));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        label->setText(QCoreApplication::translate("Widget", "Welcome to our library !!!\n"
"\n"
"The motto of our library is to provide quiet\n"
" and happy atmosphere to everyone and\n"
"especislly to students for focusing on their studies.\n"
"\n"
"Use our printer option for printing and\n"
"scan the documents.\n"
"\n"
"You can become a member of our Library !!", nullptr));
        pushButton_Infomation->setText(QCoreApplication::translate("Widget", "Information", nullptr));
        pushButton_RenewBook->setText(QCoreApplication::translate("Widget", "Renew Book ?", nullptr));
#if QT_CONFIG(statustip)
        pushButton_Signup->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
        pushButton_Signup->setText(QCoreApplication::translate("Widget", "Signup", nullptr));
        pushButton_AboutUs->setText(QCoreApplication::translate("Widget", "About Us", nullptr));
        pushButton->setText(QCoreApplication::translate("Widget", "Contact Us", nullptr));
        pushButton_Login->setText(QCoreApplication::translate("Widget", "Login", nullptr));
        pushButton_ReturnBook->setText(QCoreApplication::translate("Widget", "Return Book ?", nullptr));
        label_Instagram->setText(QString());
        label_Twitter->setText(QString());
        label_Facebook->setText(QString());
        label_Youtube->setText(QString());
        label_LibraryPic->setText(QString());
        label_Logo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
