/********************************************************************************
** Form generated from reading UI file 'aboutus.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTUS_H
#define UI_ABOUTUS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QLabel *label_Logo;
    QPushButton *pushButton_OK;
    QLabel *label;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(766, 583);
        label_Logo = new QLabel(Dialog);
        label_Logo->setObjectName("label_Logo");
        label_Logo->setGeometry(QRect(20, 10, 261, 71));
        pushButton_OK = new QPushButton(Dialog);
        pushButton_OK->setObjectName("pushButton_OK");
        pushButton_OK->setGeometry(QRect(660, 540, 93, 29));
        pushButton_OK->setStyleSheet(QString::fromUtf8("background-color: blue;\n"
"color: white;\n"
""));
        label = new QLabel(Dialog);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 120, 721, 361));
        label->setStyleSheet(QString::fromUtf8("border: 2px;\n"
""));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        label_Logo->setText(QString());
        pushButton_OK->setText(QCoreApplication::translate("Dialog", "Okay", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "Our Collection Development Policy has four guiding principles:\n"
"1). collections that reflect Auckland\342\200\231s diverse communities\n"
"2). commitment to M\304\201ori knowledge\n"
"3). commitment to the principle of freedom of access to information\n"
"4). applying best value for the people of Auckland to purchasing and managing the collections.\n"
"History: - \n"
"In 1918, the separate children's section of the central library opened and nonfiction was classified under the\n"
"Dewey Decimal system. Branch libraries opened:\n"
"Grafton (1913)\n"
"Parnell (1913)\n"
"Remuera (1915)\n"
"Epsom (1918)\n"
"Grey Lynn (1924)\n"
"Point Chevalier (1926)\n"
"Tamaki (now known as St Heliers) 1931\n"
"Avondale (1931).", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTUS_H
