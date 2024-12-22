#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <loginpage.h>
#include <userinfos.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    LoginPage *loginpage = new LoginPage(this);
    loginpage->show();
}


void MainWindow::on_pushButton_2_clicked()
{
    UserInfos *userinfos =new UserInfos(this);
    userinfos->show();
}

