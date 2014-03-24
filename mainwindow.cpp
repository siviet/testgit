#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QMessageBox::information(this, "test", ui->lineEdit->text());
}


void MainWindow::on_pushtest1_clicked()
{
    QMessageBox::information(this, "test", ui->lineEdit->text());
}



void MainWindow::on_pushtest_clicked()
{
    QMessageBox::information(this, "test", ui->lineEdit->text());
}



void MainWindow::on_pushtest33_clicked()
{
    QMessageBox::information(this, "test", ui->lineEdit->text());
}



void MainWindow::on_pushtest2_clicked()
{
    QMessageBox::information(this, "test", ui->lineEdit->text());
}


void MainWindow::on_pushtest2new1_clicked()
{
    QMessageBox::information(this, "test", ui->lineEdit->text());
}


void MainWindow::on_pushtest2new_clicked()
{
    QMessageBox::information(this, "test", ui->lineEdit->text());
}


update master

update v1.2

new update 1.2

