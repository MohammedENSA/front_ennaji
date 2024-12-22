#include "admingestionlivre.h"
#include "ui_admingestionlivre.h"
#include "adminpage.h".h"

AdmingestionLivre::AdmingestionLivre(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::AdmingestionLivre)
{
    ui->setupUi(this);
}

AdmingestionLivre::~AdmingestionLivre()
{
    delete ui;
}

void AdmingestionLivre::on_pushButton_5_clicked()
{
    AdminPage *adminpage=new AdminPage(this);
    adminpage->show();
}

