#include "mainwindow.h"
#include "ui_mainwindow.h"


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

void MainWindow::on_playButton_clicked(){

}

void MainWindow::on_pushButton_clicked()
{
    GM->setDice(4);
    GM->player1->move(GM->getDice());
    ui->PL1->setGeometry(GM->player1->getPosX(), GM->player1->getPosY(), 32, 32);
}
