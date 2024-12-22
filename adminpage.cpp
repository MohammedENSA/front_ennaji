#include "adminpage.h"
#include "ui_adminpage.h"
#include "mainwindow.h"
#include "admingestionlivre.h"
#include "admingestionutilisateur.h"
#include "admingestionemprunt.h"


AdminPage::AdminPage(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::AdminPage)
{
    ui->setupUi(this);
}

AdminPage::~AdminPage()
{
    delete ui;
}

void AdminPage::on_pushButton_2_clicked()
{
    MainWindow *mainwindow=new MainWindow(this);
    mainwindow->show();
}


void AdminPage::on_pushButton_5_clicked()
{
    AdmingestionLivre *admingestionlivre =new AdmingestionLivre(this);
    admingestionlivre->show();
}



void AdminPage::on_pushButton_4_clicked()
{
    Admingestionutilisateur *admingestionutilisateur = new Admingestionutilisateur(this) ;
    admingestionutilisateur->show();
}


void AdminPage::on_pushButton_3_clicked()
{
    Admingestionemprunt *admingestionemprunt = new Admingestionemprunt(this);
    admingestionemprunt->show();
}



