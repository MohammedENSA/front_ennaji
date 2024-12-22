/********************************************************************************
** Form generated from reading UI file 'userinfos.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERINFOS_H
#define UI_USERINFOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserInfos
{
public:
    QLabel *label;
    QLabel *label_6;
    QLabel *label_2;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_7;
    QLineEdit *lineEdit_prenom;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *lineEdit_email;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_9;
    QLineEdit *lineEdit_password;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer;
    QLineEdit *lineEdit_nom;

    void setupUi(QWidget *UserInfos)
    {
        if (UserInfos->objectName().isEmpty())
            UserInfos->setObjectName("UserInfos");
        UserInfos->resize(400, 300);
        label = new QLabel(UserInfos);
        label->setObjectName("label");
        label->setGeometry(QRect(-60, -50, 521, 401));
        label->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix2/Resources/milad-fakurian-E8Ufcyxz514-unsplash.jpg);"));
        label_6 = new QLabel(UserInfos);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(140, -20, 111, 101));
        label_6->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix4/Resources/Premium_Vector___Man_reading_book_Logo_Template_Design-removebg-preview (1).png);"));
        label_2 = new QLabel(UserInfos);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(90, 30, 361, 91));
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
        layoutWidget = new QWidget(UserInfos);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(30, 130, 351, 61));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName("label_7");
        label_7->setStyleSheet(QString::fromUtf8("QLabel {\n"
"            font-family: 'Playfair Display', serif;\n"
"            font-size: 14px;\n"
"            font-weight: bold;\n"
"            color: Black;\n"
"            background: linear-gradient(45deg, #ff9a9e, #fad0c4);\n"
"            padding: 20px;\n"
"            border-radius: 10px;\n"
"            text-align: center;\n"
"            text-shadow: 2px 2px 4px rgba(0, 0, 0, 0.2);\n"
"            transition: background-color 0.3s, transform 0.3s; /* Smooth transition */\n"
"        }\n"
"        \n"
"        QLabel:hover {\n"
"            background: linear-gradient(45deg, #ff6f61, #f1c0c6); /* Darker gradient on hover */\n"
"            transform: scale(1.05); /* Slightly enlarge the widget */\n"
"            cursor: pointer; /* Change the cursor to indicate it's clickable */\n"
"        }"));

        horizontalLayout_2->addWidget(label_7);

        lineEdit_prenom = new QLineEdit(layoutWidget);
        lineEdit_prenom->setObjectName("lineEdit_prenom");
        lineEdit_prenom->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #f8f8f8;        /* Light gray background */\n"
"    border: 2px solid #ccc;           /* Light border */\n"
"    border-radius: 12px;               /* Rounded corners */\n"
"    padding: 2px;                    /* Padding inside the input field */\n"
"    font-size: 12px;                  /* Font size for the text */\n"
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

        horizontalLayout_2->addWidget(lineEdit_prenom);

        layoutWidget_2 = new QWidget(UserInfos);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(30, 170, 351, 61));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(layoutWidget_2);
        label_8->setObjectName("label_8");
        label_8->setStyleSheet(QString::fromUtf8("QLabel {\n"
"            font-family: 'Playfair Display', serif;\n"
"            font-size: 14px;\n"
"            font-weight: bold;\n"
"            color: Black;\n"
"            background: linear-gradient(45deg, #ff9a9e, #fad0c4);\n"
"            padding: 20px;\n"
"            border-radius: 10px;\n"
"            text-align: center;\n"
"            text-shadow: 2px 2px 4px rgba(0, 0, 0, 0.2);\n"
"            transition: background-color 0.3s, transform 0.3s; /* Smooth transition */\n"
"        }\n"
"        \n"
"        QLabel:hover {\n"
"            background: linear-gradient(45deg, #ff6f61, #f1c0c6); /* Darker gradient on hover */\n"
"            transform: scale(1.05); /* Slightly enlarge the widget */\n"
"            cursor: pointer; /* Change the cursor to indicate it's clickable */\n"
"        }"));

        horizontalLayout_3->addWidget(label_8);

        horizontalSpacer_2 = new QSpacerItem(14, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        lineEdit_email = new QLineEdit(layoutWidget_2);
        lineEdit_email->setObjectName("lineEdit_email");
        lineEdit_email->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #f8f8f8;        /* Light gray background */\n"
"    border: 2px solid #ccc;           /* Light border */\n"
"    border-radius: 12px;               /* Rounded corners */\n"
"    padding: 2px;                    /* Padding inside the input field */\n"
"    font-size: 12px;                  /* Font size for the text */\n"
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

        horizontalLayout_3->addWidget(lineEdit_email);

        layoutWidget_3 = new QWidget(UserInfos);
        layoutWidget_3->setObjectName("layoutWidget_3");
        layoutWidget_3->setGeometry(QRect(30, 210, 351, 61));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(layoutWidget_3);
        label_9->setObjectName("label_9");
        label_9->setStyleSheet(QString::fromUtf8("QLabel {\n"
"            font-family: 'Playfair Display', serif;\n"
"            font-size: 14px;\n"
"            font-weight: bold;\n"
"            color: Black;\n"
"            background: linear-gradient(45deg, #ff9a9e, #fad0c4);\n"
"            padding: 20px;\n"
"            border-radius: 10px;\n"
"            text-align: center;\n"
"            text-shadow: 2px 2px 4px rgba(0, 0, 0, 0.2);\n"
"            transition: background-color 0.3s, transform 0.3s; /* Smooth transition */\n"
"        }\n"
"        \n"
"        QLabel:hover {\n"
"            background: linear-gradient(45deg, #ff6f61, #f1c0c6); /* Darker gradient on hover */\n"
"            transform: scale(1.05); /* Slightly enlarge the widget */\n"
"            cursor: pointer; /* Change the cursor to indicate it's clickable */\n"
"        }"));

        horizontalLayout_4->addWidget(label_9);

        lineEdit_password = new QLineEdit(layoutWidget_3);
        lineEdit_password->setObjectName("lineEdit_password");
        lineEdit_password->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #f8f8f8;        /* Light gray background */\n"
"    border: 2px solid #ccc;           /* Light border */\n"
"    border-radius: 12px;               /* Rounded corners */\n"
"    padding: 2px;                    /* Padding inside the input field */\n"
"    font-size: 12px;                  /* Font size for the text */\n"
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

        horizontalLayout_4->addWidget(lineEdit_password);

        pushButton = new QPushButton(UserInfos);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(120, 260, 80, 24));
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
        pushButton_2 = new QPushButton(UserInfos);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(220, 260, 80, 24));
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
        widget = new QWidget(UserInfos);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(30, 90, 351, 61));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(widget);
        label_5->setObjectName("label_5");
        label_5->setStyleSheet(QString::fromUtf8("QLabel {\n"
"            font-family: 'Playfair Display', serif;\n"
"            font-size: 14px;\n"
"            font-weight: bold;\n"
"            color: Black;\n"
"            background: linear-gradient(45deg, #ff9a9e, #fad0c4);\n"
"            padding: 20px;\n"
"            border-radius: 10px;\n"
"            text-align: center;\n"
"            text-shadow: 2px 2px 4px rgba(0, 0, 0, 0.2);\n"
"            transition: background-color 0.3s, transform 0.3s; /* Smooth transition */\n"
"        }\n"
"        \n"
"        QLabel:hover {\n"
"            background: linear-gradient(45deg, #ff6f61, #f1c0c6); /* Darker gradient on hover */\n"
"            transform: scale(1.05); /* Slightly enlarge the widget */\n"
"            cursor: pointer; /* Change the cursor to indicate it's clickable */\n"
"        }"));

        horizontalLayout->addWidget(label_5);

        horizontalSpacer = new QSpacerItem(12, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        lineEdit_nom = new QLineEdit(widget);
        lineEdit_nom->setObjectName("lineEdit_nom");
        lineEdit_nom->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #f8f8f8;        /* Light gray background */\n"
"    border: 2px solid #ccc;           /* Light border */\n"
"    border-radius: 12px;               /* Rounded corners */\n"
"    padding: 2px;                    /* Padding inside the input field */\n"
"    font-size: 12px;                  /* Font size for the text */\n"
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

        horizontalLayout->addWidget(lineEdit_nom);


        retranslateUi(UserInfos);

        QMetaObject::connectSlotsByName(UserInfos);
    } // setupUi

    void retranslateUi(QWidget *UserInfos)
    {
        UserInfos->setWindowTitle(QCoreApplication::translate("UserInfos", "Form", nullptr));
        label->setText(QString());
        label_6->setText(QString());
        label_2->setText(QCoreApplication::translate("UserInfos", "User Infos", nullptr));
        label_7->setText(QCoreApplication::translate("UserInfos", "Pr\303\251nom", nullptr));
        label_8->setText(QCoreApplication::translate("UserInfos", "email", nullptr));
        label_9->setText(QCoreApplication::translate("UserInfos", "Password", nullptr));
        pushButton->setText(QCoreApplication::translate("UserInfos", "Valid", nullptr));
        pushButton_2->setText(QCoreApplication::translate("UserInfos", "Home", nullptr));
        label_5->setText(QCoreApplication::translate("UserInfos", "Nom", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserInfos: public Ui_UserInfos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERINFOS_H
