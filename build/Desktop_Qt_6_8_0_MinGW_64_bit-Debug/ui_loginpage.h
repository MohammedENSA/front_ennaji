/********************************************************************************
** Form generated from reading UI file 'loginpage.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINPAGE_H
#define UI_LOGINPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginPage
{
public:
    QLabel *label;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer;
    QLabel *label_5;
    QLineEdit *lineEditUser;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QLineEdit *lineEditPassword;
    QLabel *label_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_6;

    void setupUi(QWidget *LoginPage)
    {
        if (LoginPage->objectName().isEmpty())
            LoginPage->setObjectName("LoginPage");
        LoginPage->resize(400, 300);
        label = new QLabel(LoginPage);
        label->setObjectName("label");
        label->setGeometry(QRect(-20, -20, 461, 351));
        label->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix2/Resources/milad-fakurian-E8Ufcyxz514-unsplash.jpg);"));
        layoutWidget = new QWidget(LoginPage);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(60, 110, 281, 104));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("QLabel{\n"
"\n"
"color:Black;}"));

        horizontalLayout->addWidget(label_3);

        horizontalSpacer = new QSpacerItem(16, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName("label_5");
        label_5->setStyleSheet(QString::fromUtf8("image: url(:/res/Resources/milad-fakurian-E8Ufcyxz514-unsplash.jpg);"));

        horizontalLayout->addWidget(label_5);

        lineEditUser = new QLineEdit(layoutWidget);
        lineEditUser->setObjectName("lineEditUser");
        lineEditUser->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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

        horizontalLayout->addWidget(lineEditUser);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");
        label_4->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color : Black;\n"
"\n"
"}"));

        horizontalLayout_2->addWidget(label_4);

        lineEditPassword = new QLineEdit(layoutWidget);
        lineEditPassword->setObjectName("lineEditPassword");
        lineEditPassword->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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

        horizontalLayout_2->addWidget(lineEditPassword);


        verticalLayout->addLayout(horizontalLayout_2);

        label_2 = new QLabel(LoginPage);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 40, 361, 91));
        label_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font-size: 28px;            /* Set the font size */\n"
"    font-weight: bold;          /* Make the text bold */\n"
"    font-family: Arial, sans-serif; /* Set the font family */\n"
"    color: #FF6347;             /* Gold color for text */\n"
"    text-align: center;         /* Align the text to the center */\n"
"    padding: 20px;              /* Add padding around the text */\n"
"    background: linear-gradient(135deg, #6C9ECF, #2F3A5A); /* Gradient background */\n"
"    border-radius: 15px;        /* Rounded corners for the background */\n"
"    box-shadow: 0px 4px 6px rgba(0, 0, 0, 0.2); /* Subtle shadow behind the text */\n"
"    text-transform: uppercase;  /* Make the text uppercase */\n"
"    transition: all 0.3s ease;  /* Smooth transition for hover effect */\n"
"    display: inline-block;      /* Make the label behave like an inline element */\n"
"}\n"
"\n"
"QLabel:hover {\n"
"    color: white;             /* Change text color to Tomato on hover */\n"
"    cursor: pointer;           "
                        "/* Change cursor to a hand pointer */\n"
"    transform: scale(1.1);      /* Slightly enlarge the text on hover */\n"
"    text-shadow: 2px 2px 4px rgba(0, 0, 0, 0.3); /* Add a subtle shadow effect */\n"
"    background: linear-gradient(135deg, #4F82B0, #253B61); /* Darker gradient on hover */\n"
"}\n"
""));
        pushButton = new QPushButton(LoginPage);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(160, 220, 80, 24));
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
        pushButton_2 = new QPushButton(LoginPage);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(160, 250, 80, 24));
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
        label_6 = new QLabel(LoginPage);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(150, -30, 101, 121));
        label_6->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix4/Resources/Premium_Vector___Man_reading_book_Logo_Template_Design-removebg-preview (1).png);"));

        retranslateUi(LoginPage);

        QMetaObject::connectSlotsByName(LoginPage);
    } // setupUi

    void retranslateUi(QWidget *LoginPage)
    {
        LoginPage->setWindowTitle(QCoreApplication::translate("LoginPage", "Form", nullptr));
        label->setText(QString());
        label_3->setText(QCoreApplication::translate("LoginPage", "User", nullptr));
        label_5->setText(QString());
        label_4->setText(QCoreApplication::translate("LoginPage", "passeword", nullptr));
        label_2->setText(QCoreApplication::translate("LoginPage", "Authentification", nullptr));
        pushButton->setText(QCoreApplication::translate("LoginPage", "LOG IN", nullptr));
        pushButton_2->setText(QCoreApplication::translate("LoginPage", "Back", nullptr));
        label_6->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class LoginPage: public Ui_LoginPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINPAGE_H
