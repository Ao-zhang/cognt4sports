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
    init_img();
    ui->begin_left->installEventFilter(this);
    ui->begin_left_2->installEventFilter(this);
    ui->page_3->installEventFilter(this);
    ui->page_4->installEventFilter(this);
    ui->stackedWidget->setCurrentIndex(0);
//    ui->stackedWidget->setCurrentIndex(1);
    on_goTestBtn_clicked();
    on_goUserInfo_clicked();
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
    agree = 0;
}

MainWindow::~MainWindow()
{
    delete ui;
    delete testui;
}

void MainWindow::init_img()
{
    QPixmap qimage("./img/background.png");
    qimage = qimage.scaled(1920,846,Qt::IgnoreAspectRatio,Qt::SmoothTransformation);
    ui->begin_background->setPixmap(qimage);
    ui->begin_background->show();
    ui->begin_background_2->setPixmap(qimage);
    ui->begin_background_2->show();

    QPixmap qimage1("./img/logo2.png");
    qimage1 = qimage1.scaled(311,81,Qt::IgnoreAspectRatio,Qt::SmoothTransformation);
    ui->logo->setPixmap(qimage1);
    ui->logo->show();

    QPixmap qimage2("./img/run.png");
    qimage2 = qimage2.scaled(201,111,Qt::IgnoreAspectRatio,Qt::SmoothTransformation);
    ui->run->setPixmap(qimage2);
    ui->run->show();

    QPixmap qimage3("./img/run2.png");
    qimage3 = qimage3.scaled(241,111,Qt::IgnoreAspectRatio,Qt::SmoothTransformation);
    ui->run_2->setPixmap(qimage3);
    ui->run_2->show();
}

bool MainWindow::eventFilter(QObject *watched, QEvent *event)
{
    if(watched == ui->begin_left && event->type() == QEvent::Paint)
    {
        QPainter p(ui->begin_left);
        p.setPen(QColor(0,0,0));
        p.drawLine(85,175,535,175);
        p.drawLine(85,745,535,745);
    }
    if(watched == ui->begin_left_2 && event->type() == QEvent::Paint)
    {
        QPainter p(ui->begin_left_2);
        p.setPen(QColor(0,0,0));
        p.drawLine(0,10,1111,10);
    }
    if(watched == ui->page_3 && event->type() == QEvent::Paint)
    {
        QPainter p(ui->page_3);
        p.setPen(QColor(0,0,0));
        p.drawLine(310,120,310,500);
        p.drawLine(310,620,310,710);
    }
    if(watched == ui->page_4 && event->type() == QEvent::Paint)
    {
        QPainter p(ui->page_4);
        p.setPen(QColor(0,0,0));
        p.drawLine(110,85,300,85);
        p.drawLine(460,85,695,85);
        p.drawLine(410,180,410,600);
    }
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
    QDir dir;
    dir.mkpath("./data");
    QString filepath = "./data/user.txt";
    QFile file(filepath);
    bool isOK = file.open(QIODevice::WriteOnly | QIODevice::Append);
    if (isOK){
        file.write(content.toStdString().data());
        file.write("\n");
    }
}


void MainWindow::on_toRegisterBtn_clicked()
{
    ui->stackedWidget_2->setCurrentIndex(1);
}


void MainWindow::on_confirmLoginBtn_clicked()
{      
    if(!agree)
    {
        QMessageBox::information(NULL, "提示", "请先同意协议");
        return;
    }
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
            ui->stackedWidget->setCurrentIndex(1);
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
        ui->stackedWidget->setCurrentIndex(1);
        ui->lineEdit_7->setText(name);
    }

}

void MainWindow::on_returnBegBtn1_clicked()
{
    ui->lineEdit->setText("");
    ui->lineEdit_2->setText("");
    ui->lineEdit_3->setText("");
    ui->lineEdit_4->setText("");
    ui->stackedWidget_2->setCurrentIndex(0);
}


void MainWindow::on_toDateBtn_clicked()
{
    this->ui->toDateBtn->setStyleSheet("border-radius:30px;background-color: rgb(170, 0, 127);color: rgb(255, 255, 255);");
    this->ui->goUserInfo->setStyleSheet("border-radius:30px;background-color: rgb(85, 170, 255);color: rgb(255, 255, 255);");
    this->ui->goTestBtn->setStyleSheet("border-radius:30px;background-color: rgb(85, 170, 255);color: rgb(255, 255, 255);");
    this->ui->toHelpBtn->setStyleSheet("border-radius:30px;background-color: rgb(85, 170, 255);color: rgb(255, 255, 255);");
    this->ui->stackedWidget_3->setCurrentIndex(2);
}



void MainWindow::showMain(){
    this->show();
}





void MainWindow::on_toHelpBtn_clicked()
{
//    ui->stackedWidget->setCurrentIndex(3);
    this->ui->toHelpBtn->setStyleSheet("border-radius:30px;background-color: rgb(170, 0, 127);color: rgb(255, 255, 255);");
    this->ui->goUserInfo->setStyleSheet("border-radius:30px;background-color: rgb(85, 170, 255);color: rgb(255, 255, 255);");
    this->ui->goTestBtn->setStyleSheet("border-radius:30px;background-color: rgb(85, 170, 255);color: rgb(255, 255, 255);");
    this->ui->toDateBtn->setStyleSheet("border-radius:30px;background-color: rgb(85, 170, 255);color: rgb(255, 255, 255);");
    this->ui->stackedWidget_3->setCurrentIndex(3);
}

void MainWindow::on_returnMenu_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_exitUserBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
    ui->lineEdit_7->setText("未登录");
}

void MainWindow::on_toThankBtn_clicked()
{
     ui->stackedWidget->setCurrentIndex(5);
}

void MainWindow::on_goTestBtn_clicked()
{
    this->ui->goTestBtn->setStyleSheet("border-radius:30px;background-color: rgb(170, 0, 127);color: rgb(255, 255, 255);");
    this->ui->goUserInfo->setStyleSheet("border-radius:30px;background-color: rgb(85, 170, 255);color: rgb(255, 255, 255);");
    this->ui->toDateBtn->setStyleSheet("border-radius:30px;background-color: rgb(85, 170, 255);color: rgb(255, 255, 255);");
    this->ui->toHelpBtn->setStyleSheet("border-radius:30px;background-color: rgb(85, 170, 255);color: rgb(255, 255, 255);");
    this->ui->stackedWidget_3->setCurrentIndex(1);
}

void MainWindow::on_returnMenu_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_returnMenu_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}


void MainWindow::on_agreebutton_clicked(bool checked)
{
    if(checked)
        agree = 1;
    else
        agree = 0;
}

void MainWindow::on_goUserInfo_clicked()
{
    this->ui->goUserInfo->setStyleSheet("border-radius:30px;background-color: rgb(170, 0, 127);color: rgb(255, 255, 255);");
    this->ui->goTestBtn->setStyleSheet("border-radius:30px;background-color: rgb(85, 170, 255);color: rgb(255, 255, 255);");
    this->ui->toDateBtn->setStyleSheet("border-radius:30px;background-color: rgb(85, 170, 255);color: rgb(255, 255, 255);");
    this->ui->toHelpBtn->setStyleSheet("border-radius:30px;background-color: rgb(85, 170, 255);color: rgb(255, 255, 255);");
    this->ui->stackedWidget_3->setCurrentIndex(0);
}

void MainWindow::on_goUserInfo_2_clicked()
{
        this->hide();
        emit toTest();
}

void MainWindow::on_goUserInfo_4_clicked()
{
        this->hide();
        emit toData();
}

void MainWindow::on_admininfo_clicked()
{
    QMessageBox::information(NULL, "提示", "请查看文件夹\"./data/测试项目/管理员id\"");
}

void MainWindow::on_testprogress_clicked()
{
    QMessageBox::information(NULL, "提示", "请查看文件夹\"./data\"");
}

void MainWindow::on_datalist_clicked()
{
    QMessageBox::information(NULL, "提示", "请查看文件夹\"./data/测试项目/管理员id/测试者id/测试次数\"");
}
