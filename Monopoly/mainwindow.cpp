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
    GM->setDice(1);
    GM->player1->move(GM->getDice());
    //GM->player1->setPosX(614);
    //GM->player1->setPosY(704);
    ui->PL1->setGeometry(GM->player1->getPosX(), GM->player1->getPosY(), 32, 32);
}
