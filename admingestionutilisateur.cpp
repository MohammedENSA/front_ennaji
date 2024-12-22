#include "admingestionutilisateur.h"
#include "ui_admingestionutilisateur.h"
#include "adminpage.h"
Admingestionutilisateur::Admingestionutilisateur(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Admingestionutilisateur)
{
    ui->setupUi(this);
}

Admingestionutilisateur::~Admingestionutilisateur()
{
    delete ui;
}

void Admingestionutilisateur::on_pushButton_4_clicked()
{
    AdminPage *adminpage=new AdminPage(this);
    adminpage->show();
}

