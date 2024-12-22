/********************************************************************************
** Form generated from reading UI file 'admingestionutilisateur.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINGESTIONUTILISATEUR_H
#define UI_ADMINGESTIONUTILISATEUR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Admingestionutilisateur
{
public:
    QLabel *label;
    QLabel *label_2;
    QTableView *tableView;
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
    QLabel *label_28;
    QLineEdit *lineEditUser_11;
    QLabel *label_29;
    QLineEdit *lineEditUser_12;
    QLabel *label_30;
    QLineEdit *lineEditUser_13;
    QLineEdit *lineEditUser_14;
    QLabel *label_31;

    void setupUi(QWidget *Admingestionutilisateur)
    {
        if (Admingestionutilisateur->objectName().isEmpty())
            Admingestionutilisateur->setObjectName("Admingestionutilisateur");
        Admingestionutilisateur->resize(400, 300);
        label = new QLabel(Admingestionutilisateur);
        label->setObjectName("label");
        label->setGeometry(QRect(-20, -20, 491, 381));
        label->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix2/Resources/milad-fakurian-E8Ufcyxz514-unsplash.jpg);"));
        label_2 = new QLabel(Admingestionutilisateur);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(100, 10, 211, 71));
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
        tableView = new QTableView(Admingestionutilisateur);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(100, 70, 281, 141));
        pushButton_3 = new QPushButton(Admingestionutilisateur);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(10, 170, 71, 41));
        QFont font1;
        font1.setBold(true);
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
        pushButton = new QPushButton(Admingestionutilisateur);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(10, 70, 71, 41));
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
        pushButton_2 = new QPushButton(Admingestionutilisateur);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(10, 120, 71, 41));
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
        pushButton_4 = new QPushButton(Admingestionutilisateur);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(10, 220, 71, 41));
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
        label_28 = new QLabel(Admingestionutilisateur);
        label_28->setObjectName("label_28");
        label_28->setGeometry(QRect(100, 220, 48, 24));
        label_28->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    background-color: #ADD8E6;  /* Light blue background */\n"
"    color: black;               /* Text color */\n"
"    font-size: 10px;            /* Font size */\n"
"    padding: 5px;              /* Padding inside the label */\n"
"	font : Bold ;\n"
"    text-align: center;         /* Center the text */\n"
"    border-radius: 10px;        /* Rounded corners */\n"
"}\n"
""));
        lineEditUser_11 = new QLineEdit(Admingestionutilisateur);
        lineEditUser_11->setObjectName("lineEditUser_11");
        lineEditUser_11->setGeometry(QRect(150, 220, 91, 31));
        lineEditUser_11->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #f8f8f8;        /* Light gray background */\n"
"    border: 2px solid #ccc;           /* Light border */\n"
"    border-radius: 8px;               /* Rounded corners */\n"
"    padding: 6px;                    /* Padding inside the input field */\n"
"    font-size: 10px;                  /* Font size for the text */\n"
"    color: #333;                      /* Text color */\n"
"    transition: border 0.3s ease, box-shadow 0.3s ease; /* Smooth transition */\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border-color: #4CAF50;            /* Green border on focus */\n"
"    box-shadow: 0 0 5px rgba(76, 175, 80, 0.7); /* Green glow effect */\n"
"    outline: none;                    /* Remove the default outline */\n"
"}\n"
"\n"
"QLineEdit::placeholder {\n"
"    color: #aaa;                      /* Lighter text for placeholder */\n"
"    font-style: italic;               /* Italic style for placeholder */\n"
"}"));
        label_29 = new QLabel(Admingestionutilisateur);
        label_29->setObjectName("label_29");
        label_29->setGeometry(QRect(100, 260, 48, 24));
        label_29->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    background-color: #ADD8E6;  /* Light blue background */\n"
"    color: black;               /* Text color */\n"
"    font-size: 10px;            /* Font size */\n"
"    padding: 5px;              /* Padding inside the label */\n"
"	font : Bold ;\n"
"    text-align: center;         /* Center the text */\n"
"    border-radius: 10px;        /* Rounded corners */\n"
"}\n"
""));
        lineEditUser_12 = new QLineEdit(Admingestionutilisateur);
        lineEditUser_12->setObjectName("lineEditUser_12");
        lineEditUser_12->setGeometry(QRect(150, 260, 91, 31));
        lineEditUser_12->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #f8f8f8;        /* Light gray background */\n"
"    border: 2px solid #ccc;           /* Light border */\n"
"    border-radius: 8px;               /* Rounded corners */\n"
"    padding: 6px;                    /* Padding inside the input field */\n"
"    font-size: 10px;                  /* Font size for the text */\n"
"    color: #333;                      /* Text color */\n"
"    transition: border 0.3s ease, box-shadow 0.3s ease; /* Smooth transition */\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border-color: #4CAF50;            /* Green border on focus */\n"
"    box-shadow: 0 0 5px rgba(76, 175, 80, 0.7); /* Green glow effect */\n"
"    outline: none;                    /* Remove the default outline */\n"
"}\n"
"\n"
"QLineEdit::placeholder {\n"
"    color: #aaa;                      /* Lighter text for placeholder */\n"
"    font-style: italic;               /* Italic style for placeholder */\n"
"}"));
        label_30 = new QLabel(Admingestionutilisateur);
        label_30->setObjectName("label_30");
        label_30->setGeometry(QRect(240, 220, 48, 24));
        label_30->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    background-color: #ADD8E6;  /* Light blue background */\n"
"    color: black;               /* Text color */\n"
"    font-size: 10px;            /* Font size */\n"
"    padding: 5px;              /* Padding inside the label */\n"
"	font : Bold ;\n"
"    text-align: center;         /* Center the text */\n"
"    border-radius: 10px;        /* Rounded corners */\n"
"}\n"
""));
        lineEditUser_13 = new QLineEdit(Admingestionutilisateur);
        lineEditUser_13->setObjectName("lineEditUser_13");
        lineEditUser_13->setGeometry(QRect(290, 220, 91, 31));
        lineEditUser_13->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #f8f8f8;        /* Light gray background */\n"
"    border: 2px solid #ccc;           /* Light border */\n"
"    border-radius: 8px;               /* Rounded corners */\n"
"    padding: 6px;                    /* Padding inside the input field */\n"
"    font-size: 10px;                  /* Font size for the text */\n"
"    color: #333;                      /* Text color */\n"
"    transition: border 0.3s ease, box-shadow 0.3s ease; /* Smooth transition */\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border-color: #4CAF50;            /* Green border on focus */\n"
"    box-shadow: 0 0 5px rgba(76, 175, 80, 0.7); /* Green glow effect */\n"
"    outline: none;                    /* Remove the default outline */\n"
"}\n"
"\n"
"QLineEdit::placeholder {\n"
"    color: #aaa;                      /* Lighter text for placeholder */\n"
"    font-style: italic;               /* Italic style for placeholder */\n"
"}"));
        lineEditUser_14 = new QLineEdit(Admingestionutilisateur);
        lineEditUser_14->setObjectName("lineEditUser_14");
        lineEditUser_14->setGeometry(QRect(290, 260, 91, 31));
        lineEditUser_14->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #f8f8f8;        /* Light gray background */\n"
"    border: 2px solid #ccc;           /* Light border */\n"
"    border-radius: 8px;               /* Rounded corners */\n"
"    padding: 6px;                    /* Padding inside the input field */\n"
"    font-size: 10px;                  /* Font size for the text */\n"
"    color: #333;                      /* Text color */\n"
"    transition: border 0.3s ease, box-shadow 0.3s ease; /* Smooth transition */\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border-color: #4CAF50;            /* Green border on focus */\n"
"    box-shadow: 0 0 5px rgba(76, 175, 80, 0.7); /* Green glow effect */\n"
"    outline: none;                    /* Remove the default outline */\n"
"}\n"
"\n"
"QLineEdit::placeholder {\n"
"    color: #aaa;                      /* Lighter text for placeholder */\n"
"    font-style: italic;               /* Italic style for placeholder */\n"
"}"));
        label_31 = new QLabel(Admingestionutilisateur);
        label_31->setObjectName("label_31");
        label_31->setGeometry(QRect(240, 260, 48, 24));
        label_31->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    background-color: #ADD8E6;  /* Light blue background */\n"
"    color: black;               /* Text color */\n"
"    font-size: 10px;            /* Font size */\n"
"    padding: 5px;              /* Padding inside the label */\n"
"	font : Bold ;\n"
"    text-align: center;         /* Center the text */\n"
"    border-radius: 10px;        /* Rounded corners */\n"
"}\n"
""));

        retranslateUi(Admingestionutilisateur);

        QMetaObject::connectSlotsByName(Admingestionutilisateur);
    } // setupUi

    void retranslateUi(QWidget *Admingestionutilisateur)
    {
        Admingestionutilisateur->setWindowTitle(QCoreApplication::translate("Admingestionutilisateur", "Form", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("Admingestionutilisateur", "Gestion des utilisateur ", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Admingestionutilisateur", "modify", nullptr));
        pushButton->setText(QCoreApplication::translate("Admingestionutilisateur", "search", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Admingestionutilisateur", "delete", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Admingestionutilisateur", "back", nullptr));
        label_28->setText(QCoreApplication::translate("Admingestionutilisateur", "Nom", nullptr));
        label_29->setText(QCoreApplication::translate("Admingestionutilisateur", "Prenom", nullptr));
        label_30->setText(QCoreApplication::translate("Admingestionutilisateur", "ISBN", nullptr));
        label_31->setText(QCoreApplication::translate("Admingestionutilisateur", "email", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Admingestionutilisateur: public Ui_Admingestionutilisateur {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINGESTIONUTILISATEUR_H
