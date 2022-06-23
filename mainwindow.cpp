#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->setWindowTitle("Driver tool");

    QPixmap logo("C:/Users/ppires/Documents/test/logo.jpg");

    ui->logo->setPixmap(logo);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QPixmap pixHan("C:/Users/ppires/Documents/test/han.jpg");
    QPixmap pixPietro("C:/Users/ppires/Documents/test/pietro.jpg");

    int choice;
    choice = rand() % 2;

    //std::string choiceString = std::to_string(choice);
    if (choice == 0)
    {
        ui->label->setText("Pietro Armanni of course!");
        ui->image->setPixmap(pixPietro);
    }
    else
    {
        ui->label->setText("For sure Cenyu Han!");
        ui->image->setPixmap(pixHan);
    }
    //ui->label->setText(QVariant(choice).toString());
}

