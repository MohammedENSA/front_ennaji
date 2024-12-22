#include "admingestionemprunt.h"
#include "ui_admingestionemprunt.h"
#include "adminpage.h"

Admingestionemprunt::Admingestionemprunt(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Admingestionemprunt)
{
    ui->setupUi(this);
}

Admingestionemprunt::~Admingestionemprunt()
{
    delete ui;
}

void Admingestionemprunt::on_pushButton_4_clicked()
{
    AdminPage *adminpage= new AdminPage(this);
    adminpage->show();
}

