#include "testinterface.h"
#include "ui_testinterface.h"
#include <QMessageBox>

TestInterface::TestInterface(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TestInterface)
{
    ui->setupUi(this);
}

TestInterface::~TestInterface()
{
    delete ui;
}


void TestInterface::on_returnHome_clicked()
{
    this->hide();
    emit showMain();
}

void TestInterface::showTest(){
    this->show();
}

void TestInterface::on_chooseExistTaskBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void TestInterface::on_createNewBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void TestInterface::on_manageTaskBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

void TestInterface::on_returnMenuBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void TestInterface::on_returnMenuBtn_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void TestInterface::on_returnMenuBtn_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void TestInterface::on_checkResusltBtn_clicked()
{
    this->hide();
    emit showData();
}



void TestInterface::on_beginTestBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}

void TestInterface::on_beginTestBtn_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}

void TestInterface::on_toLoginBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(7);
}

void TestInterface::on_toRegisterBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}

void TestInterface::on_returnBegBtn1_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}

void TestInterface::on_returnBegBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}

void TestInterface::on_confirmLogBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);
}

void TestInterface::on_confirmRegBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);
}

void TestInterface::on_startTestBtn_clicked()
{
    system("start .\\tests.exe 1 2 1 flanker");
}
