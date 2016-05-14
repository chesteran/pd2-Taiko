#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtCore>
#include <QtGui>
#include "ttaiko_start.h"
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
//to startgame
    this->hide();
    ttaiko_start startwindow;
    startwindow.setModal(true);
    startwindow.exec();
}


void MainWindow::on_pushButton_2_clicked()
{
    //to quit game
   close();
}
