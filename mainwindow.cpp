#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QFileDialog"
#include <QDebug>
#include <QMessageBox>
#include <shlobj.h>
#include <shellapi.h>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);
//    ui->stackedWidget->setCurrentIndex(3);
    testui=new TestInterface;
    testui->setWindowIcon(QIcon("./img/logo1.ico"));
    dataui=new DataManage;
    dataui->setWindowIcon(QIcon("./img/logo1.ico"));
    connect(this,SIGNAL(toTest()),testui,SLOT(showTest()));
    connect(testui,SIGNAL(showMain()),this,SLOT(showMain()));
    connect(this,SIGNAL(toData()),dataui,SLOT(showData()));
    connect(dataui,SIGNAL(showMain()),this,SLOT(showMain()));
    connect(testui,SIGNAL(showData()),dataui,SLOT(showData()));
    readuser();
}

MainWindow::~MainWindow()
{
    delete ui;
    delete testui;
}

void MainWindow::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
}

void MainWindow::readuser(){
    QString filepath = "./data/user.txt";
    QFile file(filepath);
    //打开文件,只读的方式
    bool isOk =file.open(QIODevice::ReadOnly);
    if (isOk)
    {
        //这里使用一行一行的读
        while (file.atEnd() == false)
        {
            QByteArray array ;
            array = file.readLine();
            QList<QByteArray> array1= array.split(' ');
            qDebug()<<array;
            qDebug()<<array1.length();
            if(array1.length()==4)
            {
                map.insert(array1[0],User(array1[0],array1[1],array1[2],array1[3]));
            }
        }
    }
    file.close();
}

void MainWindow::writeuser(QString content){
    QString filepath = "./data/user.txt";
    QFile file(filepath);
    bool isOK = file.open(QIODevice::WriteOnly | QIODevice::Append);
    if (isOK){
        file.write("\n");
        file.write(content.toStdString().data());
    }
}

void MainWindow::on_toLoginBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_toRegisterBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_returnBeginBtn_clicked()
{
    ui->lineEdit_5->setText("");
    ui->lineEdit_6->setText("");
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_confirmLoginBtn_clicked()
{      
    QString name = ui->lineEdit_5->text();
    QString password = ui->lineEdit_6->text();

    ui->lineEdit_5->setText("");
    ui->lineEdit_6->setText("");

    if(map.contains(name))
    {
        qDebug()<<name;
        qDebug()<<password;
        QMap<QString,User>::iterator it = map.find(name);
        if(it.value().checkpassword(password))
        {
            QMessageBox::information(NULL, "登录成功", "登录成功");
            ui->stackedWidget->setCurrentIndex(3);
            ui->lineEdit_7->setText(name);
            return;
        }
    }

    QMessageBox::information(NULL, "登录失败", "用户名或密码错误");


}

void MainWindow::on_confirmRegBtn_clicked()
{
    QString name = ui->lineEdit->text();
    QString password = ui->lineEdit_2->text();
    QString company = ui->lineEdit_3->text();
    QString email = ui->lineEdit_4->text();

    ui->lineEdit->setText("");
    ui->lineEdit_2->setText("");
    ui->lineEdit_3->setText("");
    ui->lineEdit_4->setText("");

    if(map.contains(name))
    {
        QMessageBox::information(NULL, "注册失败", "用户名已存在");
    }

    else
    {
        map.insert(name,User(name,password,company,email));
        writeuser(name+" "+password+" "+company+" "+email);
        QMessageBox::information(NULL, "注册成功", "已自动登录");
        ui->stackedWidget->setCurrentIndex(3);
        ui->lineEdit_7->setText(name);
    }

}

void MainWindow::on_returnBegBtn1_clicked()
{
    ui->lineEdit->setText("");
    ui->lineEdit_2->setText("");
    ui->lineEdit_3->setText("");
    ui->lineEdit_4->setText("");
    ui->stackedWidget->setCurrentIndex(0);
}


void MainWindow::on_toDateBtn_clicked()
{
    this->hide();
    emit toData();
}



void MainWindow::showMain(){
    this->show();
}





void MainWindow::on_toHelpBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}

void MainWindow::on_returnMenu_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

void MainWindow::on_exitUserBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
    ui->lineEdit_7->setText("未登录");
}

void MainWindow::on_toThankBtn_clicked()
{
     ui->stackedWidget->setCurrentIndex(6);
}

void MainWindow::on_goTestBtn_clicked()
{
    this->hide();
    emit toTest();
}

void MainWindow::on_toInfoBtn_clicked()
{
     ui->stackedWidget->setCurrentIndex(5);
}

void MainWindow::on_returnMenu_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

void MainWindow::on_returnMenu_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}
