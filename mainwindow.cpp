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


void MainWindow::on_add_0_clicked() {
    if(ui->current_expression->text() != "0") {
        current_string.append("0");
        ui->current_expression->setText(current_string);
    }
}

void MainWindow::on_add_1_clicked() {
    current_string.append("1");
    ui->current_expression->setText(current_string);
}

void MainWindow::on_add_2_clicked() {
    current_string.append("2");
    ui->current_expression->setText(current_string);
}

void MainWindow::on_add_3_clicked() {
    current_string.append("3");
    ui->current_expression->setText(current_string);
}

void MainWindow::on_add_4_clicked() {
    current_string.append("4");
    ui->current_expression->setText(current_string);
}

void MainWindow::on_add_5_clicked() {
    current_string.append("5");
    ui->current_expression->setText(current_string);
}

void MainWindow::on_add_6_clicked() {
    current_string.append("6");
    ui->current_expression->setText(current_string);
}

void MainWindow::on_add_7_clicked() {
    current_string.append("7");
    ui->current_expression->setText(current_string);
}

void MainWindow::on_add_8_clicked() {
    current_string.append("8");
    ui->current_expression->setText(current_string);
}

void MainWindow::on_add_9_clicked() {
    current_string.append("9");
    ui->current_expression->setText(current_string);
}

void MainWindow::on_remove_all_clicked() {
    current_string = "";
    ui->current_expression->setText("0");
    ui->stored_expression->setText("");
}
