#include "mainwindow.h"
#include "ui_mainwindow.h"

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

void MainWindow::on_count_clicked()
{
    num++;
    ui->lineEdit->setText(QString::number(num));

}


void MainWindow::on_reset_clicked()
{
    num = 0;
    ui->lineEdit->setText(QString::number(num));
}

