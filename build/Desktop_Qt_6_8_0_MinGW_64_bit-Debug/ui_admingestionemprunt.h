/********************************************************************************
** Form generated from reading UI file 'admingestionemprunt.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINGESTIONEMPRUNT_H
#define UI_ADMINGESTIONEMPRUNT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Admingestionemprunt
{
public:
    QLabel *label;
    QLabel *label_2;
    QTableView *tableView;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QDateTimeEdit *dateTimeEdit;
    QPushButton *pushButton_4;

    void setupUi(QWidget *Admingestionemprunt)
    {
        if (Admingestionemprunt->objectName().isEmpty())
            Admingestionemprunt->setObjectName("Admingestionemprunt");
        Admingestionemprunt->resize(400, 300);
        label = new QLabel(Admingestionemprunt);
        label->setObjectName("label");
        label->setGeometry(QRect(-30, -30, 491, 381));
        label->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix2/Resources/milad-fakurian-E8Ufcyxz514-unsplash.jpg);"));
        label_2 = new QLabel(Admingestionemprunt);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(110, -10, 251, 91));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setBold(true);
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("QLabel \n"
"{\n"
"color: white; /* Couleur du texte en jaune (Gold) FFD700*/\n"
" font-size: 15px; /* Taille du texte */\n"
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
        tableView = new QTableView(Admingestionemprunt);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(150, 70, 241, 151));
        pushButton = new QPushButton(Admingestionemprunt);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(10, 70, 131, 41));
        QFont font1;
        font1.setBold(true);
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        pushButton_2 = new QPushButton(Admingestionemprunt);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(10, 120, 131, 41));
        pushButton_2->setFont(font1);
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
        pushButton_3 = new QPushButton(Admingestionemprunt);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(10, 170, 131, 41));
        pushButton_3->setFont(font1);
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        dateTimeEdit = new QDateTimeEdit(Admingestionemprunt);
        dateTimeEdit->setObjectName("dateTimeEdit");
        dateTimeEdit->setGeometry(QRect(150, 230, 241, 31));
        dateTimeEdit->setStyleSheet(QString::fromUtf8("QDateTimeEdit {\n"
"    background-color: #ffffff; /* White background */\n"
"    border: 2px solid #0078d7; /* Blue border */\n"
"    border-radius: 15px; /* Rounded corners */\n"
"    padding: 8px 12px; /* Inner padding */\n"
"    font: 14px \"Arial\"; /* Font and size */\n"
"    color: #333; /* Text color */\n"
"    box-shadow: 0px 4px 6px rgba(0, 0, 0, 0.1); /* Subtle shadow */\n"
"    transition: all 0.3s ease; /* Smooth transition effect */\n"
"}\n"
"\n"
"QDateTimeEdit:focus {\n"
"    border: 2px solid #0056a8; /* Darker blue border when focused */\n"
"    background-color: #f0f8ff; /* Light blue background when focused */\n"
"    box-shadow: 0px 6px 8px rgba(0, 0, 0, 0.2); /* More pronounced shadow */\n"
"}\n"
"\n"
"QDateTimeEdit:hover {\n"
"    background-color: #f9f9f9; /* Slightly darker background on hover */\n"
"    border: 2px solid #3399ff; /* Lighter blue border on hover */\n"
"}\n"
"\n"
"QDateTimeEdit::drop-down {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
" "
                        "   width: 25px; /* Larger dropdown button for a modern look */\n"
"    border-left: 1px solid #0078d7; /* Separator line */\n"
"    margin: 2px;\n"
"}\n"
"\n"
"QDateTimeEdit::down-arrow {\n"
"    image: url(:/icons/down-arrow.png); /* Path to your custom down-arrow icon */\n"
"    width: 12px;\n"
"    height: 12px;\n"
"}\n"
"\n"
"QDateTimeEdit::up-arrow {\n"
"    image: url(:/icons/up-arrow.png); /* Path to your custom up-arrow icon */\n"
"    width: 12px;\n"
"    height: 12px;\n"
"}\n"
""));
        pushButton_4 = new QPushButton(Admingestionemprunt);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(10, 220, 131, 41));
        pushButton_4->setFont(font1);
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        retranslateUi(Admingestionemprunt);

        QMetaObject::connectSlotsByName(Admingestionemprunt);
    } // setupUi

    void retranslateUi(QWidget *Admingestionemprunt)
    {
        Admingestionemprunt->setWindowTitle(QCoreApplication::translate("Admingestionemprunt", "Form", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("Admingestionemprunt", "Gestion des Emprunt", nullptr));
        pushButton->setText(QCoreApplication::translate("Admingestionemprunt", "livres emprunt\303\251s ", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Admingestionemprunt", "livre plus vendue", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Admingestionemprunt", "rechercher emprunt", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Admingestionemprunt", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Admingestionemprunt: public Ui_Admingestionemprunt {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINGESTIONEMPRUNT_H
