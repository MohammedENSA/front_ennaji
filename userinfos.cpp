#include "userinfos.h"
#include "ui_userinfos.h"
#include <QRegularExpression> //on utilise cette classe pour vérifier l'email est de la forme @gmail.com
#include <QRegularExpressionMatch> //pour la comparaison
#include <mainwindow.h>
#include <QMessageBox>
UserInfos::UserInfos(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::UserInfos)
{
    ui->setupUi(this);
}

UserInfos::~UserInfos()
{
    delete ui;
}

void UserInfos::on_pushButton_2_clicked()
{
    MainWindow *mainwindow2=new MainWindow(this);
    mainwindow2->show();
}


void UserInfos::on_pushButton_clicked()
{
    // Récupérer les valeurs des champs de texte
    QString nom = ui->lineEdit_nom->text(); //  lineEdit_nom est pour le nom
    QString prenom = ui->lineEdit_prenom->text(); // lineEdit_prenom pour le prénom
    QString email = ui->lineEdit_email->text(); // lineEdit_email pour l'email
    QString password = ui->lineEdit_password->text(); // lineEdit_motDePasse pour le mot de passe
    static const QRegularExpression regex("^[a-zA-Z0-9_+&*-]+@gmail\\.com$");  //a-zA-Z0-9_+&*- montre que le nom entrée peut contenir ds lettres des nombres ...
    QRegularExpressionMatch match = regex.match(email);    //pour vérifier l'email


    // Vérifier si l'un des champs est vide
    if (nom.isEmpty() || prenom.isEmpty() || email.isEmpty() || password.isEmpty()) {
        // Afficher un message d'erreur si un des champs est vide
        QMessageBox::warning(this, "Erreur", "Veuillez remplir tous les champs.");
    } else if (match.hasMatch()){

        QMessageBox::information(this, "Succés", "les informations sont enregistrer , Veuillez Log In.");
    }
    else {  // Si tous les champs sont remplis,el l'adresse est vraies procéder à l'action souhaitée
        //Noté bien : il reste d'ajouter à la base de données
        QMessageBox::warning(this, "échec", "l'émail que vous avez entrez est incorrecte.");
        // Vous pouvez ajouter ici le code pour continuer la logique de connexion ou autre
    }

}

