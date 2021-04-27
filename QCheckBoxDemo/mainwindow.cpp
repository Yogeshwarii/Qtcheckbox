#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMessageBox>
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


void MainWindow::on_checkBox_2_stateChanged(int arg1)
{
    if(arg1)
       {
           QMessageBox::information(this,"title","You like football");
       }
       else
       {
           QMessageBox::information(this,"title","You don't like football");
   }
}

void MainWindow::on_checkBox_stateChanged(int arg1)
{

    if(arg1)
    {
        QMessageBox::information(this,"title","You like cricket");
    }
    else
    {
        QMessageBox::information(this,"title","You don't like cricket");
}
}

void MainWindow::on_checkBox_3_stateChanged(int arg1)
{
    if(arg1)
       {
           QMessageBox::information(this,"title","You like hockey");
       }
       else
       {
           QMessageBox::information(this,"title","You don't like hockey");
    }
}
