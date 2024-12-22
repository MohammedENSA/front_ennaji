/********************************************************************************
** Form generated from reading UI file 'userpage.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERPAGE_H
#define UI_USERPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserPage
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton_2;

    void setupUi(QWidget *UserPage)
    {
        if (UserPage->objectName().isEmpty())
            UserPage->setObjectName("UserPage");
        UserPage->resize(400, 300);
        label = new QLabel(UserPage);
        label->setObjectName("label");
        label->setGeometry(QRect(-30, -30, 461, 351));
        label->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix2/Resources/milad-fakurian-E8Ufcyxz514-unsplash.jpg);"));
        label_2 = new QLabel(UserPage);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(130, 50, 251, 71));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setBold(true);
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("QLabel \n"
"{\n"
"color: white; /* Couleur du texte en jaune (Gold) FFD700*/\n"
" font-size: 20px; /* Taille du texte */\n"
"    font-weight: bold; /* Texte en gras */\n"
"    font-family: Arial, sans-serif; /* Police de caract\303\250re */\n"
"    text-align: center; /* Centrer le texte */\n"
"    padding: 10px; /* Espacement autour du texte */\n"
"}\n"
"\n"
"QLabel:hover {\n"
"    color: #FFD700; /* Couleur du texte plus claire au survol */\n"
"}\n"
"\n"
"QLabel:focus {\n"
"    border: 2px solid #ADD8E6; /* Bordure orange lorsqu'en focus */\n"
"}\n"
""));
        label_3 = new QLabel(UserPage);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(60, 120, 401, 71));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("QLabel \n"
"{\n"
"color: white; /* Couleur du texte en jaune (Gold) FFD700*/\n"
" font-size: 20px; /* Taille du texte */\n"
"    font-weight: bold; /* Texte en gras */\n"
"    font-family: Arial, sans-serif; /* Police de caract\303\250re */\n"
"    text-align: center; /* Centrer le texte */\n"
"    padding: 10px; /* Espacement autour du texte */\n"
"}\n"
"\n"
"QLabel:hover {\n"
"    color: #FFD700; /* Couleur du texte plus claire au survol */\n"
"}\n"
"\n"
"QLabel:focus {\n"
"    border: 2px solid #ADD8E6; /* Bordure orange lorsqu'en focus */\n"
"}\n"
""));
        pushButton_2 = new QPushButton(UserPage);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(160, 270, 80, 24));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FFD700; /* Couleur jaune (Gold) */\n"
"    color: black; /* Texte noir */\n"
"    border: 2px solid #FFA500; /* Bordure orange */\n"
"    border-radius: 10px; /* Coins arrondis */\n"
"    font-size: 10px; /* Taille du texte */\n"
"    font-weight: bold; /* Texte en gras */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #FFC107; /* Couleur jaune plus claire au survol */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #87CEEB; /* Couleur jaune fonc\303\251e lorsqu'on clique */\n"
"    border: 2px solid #FF6F00; /* Bordure plus fonc\303\251e */\n"
"}\n"
""));

        retranslateUi(UserPage);

        QMetaObject::connectSlotsByName(UserPage);
    } // setupUi

    void retranslateUi(QWidget *UserPage)
    {
        UserPage->setWindowTitle(QCoreApplication::translate("UserPage", "Form", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("UserPage", "USER Page", nullptr));
        label_3->setText(QCoreApplication::translate("UserPage", "design pour prendre un livre ...", nullptr));
        pushButton_2->setText(QCoreApplication::translate("UserPage", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserPage: public Ui_UserPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERPAGE_H
