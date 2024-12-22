/********************************************************************************
** Form generated from reading UI file 'admingestionlivre.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINGESTIONLIVRE_H
#define UI_ADMINGESTIONLIVRE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdmingestionLivre
{
public:
    QLabel *label;
    QLineEdit *lineEditUser_6;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QLineEdit *lineEditUser_7;
    QDateEdit *dateEdit;
    QLabel *label_6;
    QLineEdit *lineEditUser_9;
    QLineEdit *lineEditUser_8;
    QLabel *label_2;
    QLineEdit *lineEditUser_10;
    QLineEdit *lineEditUser_11;
    QTableView *tableView;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *label_24;
    QPushButton *pushButton_5;

    void setupUi(QWidget *AdmingestionLivre)
    {
        if (AdmingestionLivre->objectName().isEmpty())
            AdmingestionLivre->setObjectName("AdmingestionLivre");
        AdmingestionLivre->resize(400, 300);
        label = new QLabel(AdmingestionLivre);
        label->setObjectName("label");
        label->setGeometry(QRect(-40, -40, 491, 381));
        label->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix2/Resources/milad-fakurian-E8Ufcyxz514-unsplash.jpg);"));
        lineEditUser_6 = new QLineEdit(AdmingestionLivre);
        lineEditUser_6->setObjectName("lineEditUser_6");
        lineEditUser_6->setGeometry(QRect(140, 180, 91, 21));
        lineEditUser_6->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #f8f8f8;        /* Light gray background */\n"
"    border: 2px solid #ccc;           /* Light border */\n"
"    border-radius: 8px;               /* Rounded corners */\n"
"    padding: 12px;                    /* Padding inside the input field */\n"
"    font-size: 4px;                  /* Font size for the text */\n"
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
        pushButton_2 = new QPushButton(AdmingestionLivre);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(10, 90, 71, 41));
        QFont font;
        font.setBold(true);
        pushButton_2->setFont(font);
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
        pushButton_4 = new QPushButton(AdmingestionLivre);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(10, 190, 71, 41));
        pushButton_4->setFont(font);
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
        layoutWidget = new QWidget(AdmingestionLivre);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(90, 180, 50, 116));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_14 = new QLabel(layoutWidget);
        label_14->setObjectName("label_14");
        label_14->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    background-color: #ADD8E6;  /* Light blue background */\n"
"    color: black;               /* Text color */\n"
"    font-size: 10px;            /* Font size */\n"
"    padding: 5px;              /* Padding inside the label */\n"
"	font : Bold ;\n"
"    text-align: center;         /* Center the text */\n"
"    border-radius: 10px;        /* Rounded corners */\n"
"}\n"
""));

        verticalLayout->addWidget(label_14);

        label_15 = new QLabel(layoutWidget);
        label_15->setObjectName("label_15");
        label_15->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    background-color: #ADD8E6;  /* Light blue background */\n"
"    color: black;               /* Text color */\n"
"    font-size: 10px;            /* Font size */\n"
"    padding: 5px;              /* Padding inside the label */\n"
"	font : Bold ;\n"
"    text-align: center;         /* Center the text */\n"
"    border-radius: 10px;        /* Rounded corners */\n"
"}\n"
""));

        verticalLayout->addWidget(label_15);

        label_16 = new QLabel(layoutWidget);
        label_16->setObjectName("label_16");
        label_16->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    background-color: #ADD8E6;  /* Light blue background */\n"
"    color: black;               /* Text color */\n"
"    font-size: 10px;            /* Font size */\n"
"    padding: 5px;              /* Padding inside the label */\n"
"	font : Bold ;\n"
"    text-align: center;         /* Center the text */\n"
"    border-radius: 10px;        /* Rounded corners */\n"
"}\n"
""));

        verticalLayout->addWidget(label_16);

        label_17 = new QLabel(layoutWidget);
        label_17->setObjectName("label_17");
        label_17->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    background-color: #ADD8E6;  /* Light blue background */\n"
"    color: black;               /* Text color */\n"
"    font-size: 10px;            /* Font size */\n"
"    padding: 5px;              /* Padding inside the label */\n"
"	font : Bold ;\n"
"    text-align: center;         /* Center the text */\n"
"    border-radius: 10px;        /* Rounded corners */\n"
"}\n"
""));

        verticalLayout->addWidget(label_17);

        pushButton_3 = new QPushButton(AdmingestionLivre);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(10, 140, 71, 41));
        pushButton_3->setFont(font);
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
        pushButton = new QPushButton(AdmingestionLivre);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(10, 40, 71, 41));
        pushButton->setFont(font);
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
        lineEditUser_7 = new QLineEdit(AdmingestionLivre);
        lineEditUser_7->setObjectName("lineEditUser_7");
        lineEditUser_7->setGeometry(QRect(140, 210, 91, 21));
        lineEditUser_7->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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
        dateEdit = new QDateEdit(AdmingestionLivre);
        dateEdit->setObjectName("dateEdit");
        dateEdit->setGeometry(QRect(300, 240, 91, 21));
        dateEdit->setStyleSheet(QString::fromUtf8("QDateEdit {\n"
"    background-color: #F0F8FF;  /* Couleur de fond tr\303\250s claire (bleu p\303\242le) */\n"
"    border: 2px solid #4682B4;  /* Bordure bleu fonc\303\251 */\n"
"    border-radius: 10px;        /* Coins arrondis */\n"
"    padding: 3px 7px;          /* Espacement autour du texte */\n"
"    font-size: 10px;            /* Taille de la police */\n"
"    color: #2E8B57;             /* Couleur du texte (vert fonc\303\251) */\n"
"}\n"
"\n"
"QDateEdit::drop-down {\n"
"    border: none;               /* Enlever la bordure du bouton de menu d\303\251roulant */\n"
"    background-color: #4682B4;  /* Couleur de fond du bouton d\303\251roulant */\n"
"    width: 20px;                /* Largeur du bouton d\303\251roulant */\n"
"}\n"
"\n"
"QDateEdit::down-arrow {\n"
"    image: url(:/icons/down-arrow.png); /* Ic\303\264ne fl\303\250che vers le bas personnalis\303\251e */\n"
"}\n"
"\n"
"QDateEdit:focus {\n"
"    border: 2px solid #1E90FF;  /* Bordure bleue claire lorsqu'en focus */\n"
"    background-color: "
                        "#E0FFFF;  /* Fond bleu clair lorsque l'\303\251l\303\251ment est en focus */\n"
"}\n"
""));
        label_6 = new QLabel(AdmingestionLivre);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(20, -20, 51, 81));
        label_6->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix4/Resources/Premium_Vector___Man_reading_book_Logo_Template_Design-removebg-preview (1).png);"));
        lineEditUser_9 = new QLineEdit(AdmingestionLivre);
        lineEditUser_9->setObjectName("lineEditUser_9");
        lineEditUser_9->setGeometry(QRect(140, 270, 91, 21));
        lineEditUser_9->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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
        lineEditUser_8 = new QLineEdit(AdmingestionLivre);
        lineEditUser_8->setObjectName("lineEditUser_8");
        lineEditUser_8->setGeometry(QRect(140, 240, 91, 21));
        lineEditUser_8->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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
        label_2 = new QLabel(AdmingestionLivre);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(110, -20, 251, 71));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setBold(true);
        label_2->setFont(font1);
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
        lineEditUser_10 = new QLineEdit(AdmingestionLivre);
        lineEditUser_10->setObjectName("lineEditUser_10");
        lineEditUser_10->setGeometry(QRect(300, 180, 91, 21));
        lineEditUser_10->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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
        lineEditUser_11 = new QLineEdit(AdmingestionLivre);
        lineEditUser_11->setObjectName("lineEditUser_11");
        lineEditUser_11->setGeometry(QRect(300, 210, 91, 21));
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
        tableView = new QTableView(AdmingestionLivre);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(90, 30, 301, 141));
        layoutWidget_2 = new QWidget(AdmingestionLivre);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(240, 180, 51, 86));
        verticalLayout_3 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_22 = new QLabel(layoutWidget_2);
        label_22->setObjectName("label_22");
        label_22->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    background-color: #ADD8E6;  /* Light blue background */\n"
"    color: black;               /* Text color */\n"
"    font-size: 10px;            /* Font size */\n"
"    padding: 5px;              /* Padding inside the label */\n"
"	font : Bold ;\n"
"    text-align: center;         /* Center the text */\n"
"    border-radius: 10px;        /* Rounded corners */\n"
"}\n"
""));

        verticalLayout_3->addWidget(label_22);

        label_23 = new QLabel(layoutWidget_2);
        label_23->setObjectName("label_23");
        label_23->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    background-color: #ADD8E6;  /* Light blue background */\n"
"    color: black;               /* Text color */\n"
"    font-size: 10px;            /* Font size */\n"
"    padding: 5px;              /* Padding inside the label */\n"
"	font : Bold ;\n"
"    text-align: center;         /* Center the text */\n"
"    border-radius: 10px;        /* Rounded corners */\n"
"}\n"
""));

        verticalLayout_3->addWidget(label_23);

        label_24 = new QLabel(layoutWidget_2);
        label_24->setObjectName("label_24");
        label_24->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    background-color: #ADD8E6;  /* Light blue background */\n"
"    color: black;               /* Text color */\n"
"    font-size: 10px;            /* Font size */\n"
"    padding: 5px;              /* Padding inside the label */\n"
"	font : Bold ;\n"
"    text-align: center;         /* Center the text */\n"
"    border-radius: 10px;        /* Rounded corners */\n"
"}\n"
""));

        verticalLayout_3->addWidget(label_24);

        pushButton_5 = new QPushButton(AdmingestionLivre);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(10, 240, 71, 41));
        pushButton_5->setFont(font);
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        retranslateUi(AdmingestionLivre);

        QMetaObject::connectSlotsByName(AdmingestionLivre);
    } // setupUi

    void retranslateUi(QWidget *AdmingestionLivre)
    {
        AdmingestionLivre->setWindowTitle(QCoreApplication::translate("AdmingestionLivre", "Form", nullptr));
        label->setText(QString());
        pushButton_2->setText(QCoreApplication::translate("AdmingestionLivre", "add", nullptr));
        pushButton_4->setText(QCoreApplication::translate("AdmingestionLivre", "modify", nullptr));
        label_14->setText(QCoreApplication::translate("AdmingestionLivre", "Titre", nullptr));
        label_15->setText(QCoreApplication::translate("AdmingestionLivre", "Auteur", nullptr));
        label_16->setText(QCoreApplication::translate("AdmingestionLivre", " ISBN", nullptr));
        label_17->setText(QCoreApplication::translate("AdmingestionLivre", "genre", nullptr));
        pushButton_3->setText(QCoreApplication::translate("AdmingestionLivre", "delete", nullptr));
        pushButton->setText(QCoreApplication::translate("AdmingestionLivre", "search", nullptr));
        label_6->setText(QString());
        label_2->setText(QCoreApplication::translate("AdmingestionLivre", "Gestion des Livres ", nullptr));
        label_22->setText(QCoreApplication::translate("AdmingestionLivre", "genre", nullptr));
        label_23->setText(QCoreApplication::translate("AdmingestionLivre", "copies", nullptr));
        label_24->setText(QCoreApplication::translate("AdmingestionLivre", "ann\303\251e", nullptr));
        pushButton_5->setText(QCoreApplication::translate("AdmingestionLivre", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdmingestionLivre: public Ui_AdmingestionLivre {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINGESTIONLIVRE_H
