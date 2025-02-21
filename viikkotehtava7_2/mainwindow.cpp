#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , state(1)
    , result(0)
    , operand(0)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::numberClickHandler()
{
    QPushButton *button = qobject_cast<QPushButton*>(sender());
    if (button) {
        if (state == 1) {
            QString currentText = ui->num1->text();
            ui->num1->setText(currentText + button->text());
            qDebug() << "Painettu " << button->text();

        } else if (state == 2){
            QString currentText = ui->num2->text();
            ui->num2->setText(currentText + button->text());
            qDebug() << "Painettu " << button->text();
        }
    }
}

void MainWindow::clearAndEnterClickHandler()
{
    if (state == 2) {
        number2 = ui->num2->text();
        bool numero1, numero2;
        float num1Val = number1.toFloat(&numero1);
        float num2Val = number2.toFloat(&numero2);

        if (numero1 && numero2) {
            switch (operand) {
            case '+':
                result = num1Val + num2Val;
                break;
            case '-':
                result = num1Val - num2Val;
                break;
            case '*':
                result = num1Val * num2Val;
                break;
            case '/':
                if (num2Val != 0) {
                    result = num1Val / num2Val;
                }
                break;
            default:
                return;
            }

            ui->result->setText(QString::number(result));
            qDebug() << "Tulos " << result;

            state = 1;
        }
    }
}

void MainWindow::addSubMulDivClickHandler()
{
    QPushButton *button = qobject_cast<QPushButton*>(sender());
    if (button) {
        number1 = ui->num1->text();
        operand = button->text().at(0).toLatin1();
        state = 2;
        qDebug() << "number1 " << number1;
        qDebug() << "Operaattori" << button->text();
    }
}

void MainWindow::resetLineEdits()
{
    ui->num1->clear();
    ui->num2->clear();
    ui->result->clear();
    number1.clear();
    number2.clear();
    state = 1;
    qDebug() << "Nollattu";
}

void MainWindow::on_N0_clicked()
{
    numberClickHandler();
}


void MainWindow::on_N1_clicked()
{
    numberClickHandler();
}


void MainWindow::on_N2_clicked()
{
    numberClickHandler();
}


void MainWindow::on_N3_clicked()
{
    numberClickHandler();
}


void MainWindow::on_N4_clicked()
{
    numberClickHandler();
}


void MainWindow::on_N5_clicked()
{
    numberClickHandler();
}


void MainWindow::on_N6_clicked()
{
    numberClickHandler();
}


void MainWindow::on_N7_clicked()
{
    numberClickHandler();
}


void MainWindow::on_N8_clicked()
{
    numberClickHandler();
}


void MainWindow::on_N9_clicked()
{
    numberClickHandler();
}


void MainWindow::on_clear_clicked()
{
    resetLineEdits();
}


void MainWindow::on_enter_clicked()
{
     clearAndEnterClickHandler();
}


void MainWindow::on_add_clicked()
{
    addSubMulDivClickHandler();
}


void MainWindow::on_sub_clicked()
{
    addSubMulDivClickHandler();
}


void MainWindow::on_mul_clicked()
{
   addSubMulDivClickHandler();
}


void MainWindow::on_div_clicked()
{
    addSubMulDivClickHandler();
}

