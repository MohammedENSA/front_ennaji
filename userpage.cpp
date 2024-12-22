#include "userpage.h"
#include "ui_userpage.h"
#include <mainwindow.h>

UserPage::UserPage(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::UserPage)
{
    ui->setupUi(this);
}

UserPage::~UserPage()
{
    delete ui;
}

void UserPage::on_pushButton_2_clicked()
{
    MainWindow *mainwindow=new MainWindow(this);
    mainwindow->show();
}

