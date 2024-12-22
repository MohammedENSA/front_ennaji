#include "loginpage.h"
#include "ui_loginpage.h"
#include<mainwindow.h>
#include <QMessageBox>
#include <adminpage.h>
#include <userpage.h>
LoginPage::LoginPage(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::LoginPage)
{
    ui->setupUi(this);
}

LoginPage::~LoginPage()
{
    delete ui;
}

void LoginPage::on_pushButton_2_clicked()
{
    MainWindow *mainwindow = new MainWindow(this);
    mainwindow->show();
}

void LoginPage::on_pushButton_clicked()
{
    QString nom1 = ui->lineEditUser->text(); //  lineEditUser est pour le nom qui va taper l'admin
    QString password1 = ui->lineEditPassword->text(); // lineEdit_prenom pour le prénom
    if (nom1.isEmpty() || password1.isEmpty()) { //vérifie la condition si les champs sont vide
        // Afficher un message d'erreur si un des champs est vide
        QMessageBox::warning(this, "Erreur", "Veuillez remplir tous les champs.");
    } else if ((nom1=="ENNAJI" && password1=="20242025") || (nom1=="Mohammed" && password1=="12341234") )  {
        // Si tous les champs sont remplis, procéder à l'action souhaitée
        QMessageBox::information(this, "Succès", "Bonjour Admin , Heureux de vous retrouver ");
        AdminPage *adminpage=new AdminPage(this);
        adminpage->show();
        // Vous pouvez ajouter ici le code pour continuer la logique de connexion ou autre
    }
    else {  // il y a beaucoup de chose comme je dois le vérifier est ce qu'il existe dans la base de Données
            //vérifier avec les informations déja enregistré
            //j'ai besoin de la base de donné
        UserPage *userpage=new UserPage(this);
        userpage->show();
    }

}

