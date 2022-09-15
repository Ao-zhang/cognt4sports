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
    reset();
    filterreset();
    testindex=0;
    checkedindex = 0;
    readuser();
    readalltester();
    ui->setupUi(this);
    init_img();
    ui->begin_left->installEventFilter(this);
    ui->begin_left_2->installEventFilter(this);
    ui->page_3->installEventFilter(this);
    ui->page_4->installEventFilter(this);
    ui->stackedWidget->setCurrentIndex(0);
    ui->stackedWidget->setCurrentIndex(1);
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
    agree = 0;
}

MainWindow::~MainWindow()
{
    delete ui;
    delete testui;
}

void MainWindow::reset(){
    for (int i=0;i<10;i++) {
        exammap[i]=0;
    }
}

void MainWindow::filterreset(){
    for (int i=0;i<10;i++) {
        filtermap[i]=0;
    }
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
        p.drawLine(310,130,310,580);
    }
    if(watched == ui->page_4 && event->type() == QEvent::Paint)
    {
        QPainter p(ui->page_4);
        p.setPen(QColor(0,0,0));
        p.drawLine(70,85,295,85);
        p.drawLine(520,85,765,85);
        p.drawLine(450,140,450,600);
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

void MainWindow::writetester(){
    QDir dir;
    dir.mkpath("./data");
    QString filepath = "./data/tester.txt";
    QFile file(filepath);
    bool isOK = file.open(QIODevice::WriteOnly);
    if (isOK){
        QMap<QString, Tester>::const_iterator iterator = tester.constBegin();
            while (iterator != tester.constEnd()) {
                QString content =   iterator.value().id
                                    + "," + iterator.value().name
                                    + "," + iterator.value().birth
                                    + "," + iterator.value().sex
                                    + "," + iterator.value().group
                                    + "," + iterator.value().item
                                    + "," + iterator.value().level;
                content = content.replace("\r\n","").replace("\n","");
                file.write(content.toStdString().data());
                file.write("\n");
                ++iterator;
        }
    }
}

void MainWindow::readalltester(){
    QString filepath = "./data/tester.txt";
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
            QList<QByteArray> array1= array.split(',');
            tester.insert(array1[0],Tester(array1[0],array1[1],array1[2],array1[3],array1[4],array1[5],array1[6]));
        }
    }
    file.close();
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
    if(checkedindex == 0)
        QMessageBox::information(NULL, "提示", "请先选择测试者");
    else
    {
        QMap<QString,Tester>::iterator it = tester.find(testerid[checkedindex-1]);
        this->ui->textEdit_14->setText(it.value().id);
        this->ui->textEdit_15->setText(it.value().name.replace("\r\n","").replace("\n",""));
        this->ui->textEdit_16->setText(it.value().birth.replace("\r\n","").replace("\n",""));
        this->ui->textEdit_17->setText(it.value().sex.replace("\r\n","").replace("\n",""));
        ui->textEdit_14->setAlignment(Qt::AlignHCenter);
        ui->textEdit_15->setAlignment(Qt::AlignHCenter);
        ui->textEdit_16->setAlignment(Qt::AlignHCenter);
        ui->textEdit_17->setAlignment(Qt::AlignHCenter);
        this->ui->goTestBtn->setStyleSheet("border-radius:30px;background-color: rgb(170, 0, 127);color: rgb(255, 255, 255);");
        this->ui->goUserInfo->setStyleSheet("border-radius:30px;background-color: rgb(85, 170, 255);color: rgb(255, 255, 255);");
        this->ui->toDateBtn->setStyleSheet("border-radius:30px;background-color: rgb(85, 170, 255);color: rgb(255, 255, 255);");
        this->ui->toHelpBtn->setStyleSheet("border-radius:30px;background-color: rgb(85, 170, 255);color: rgb(255, 255, 255);");
        this->ui->stackedWidget_3->setCurrentIndex(1);
    }
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

bool MainWindow::readtester(int index){
//    qDebug()<<tester.size();

    int i=0;
    QMap<QString, Tester>::const_iterator iterator = tester.constBegin();
        while (iterator != tester.constEnd() & (i<index*4)) {
//            qDebug()<<i;
            ++iterator;
            ++i;
    }
    QString data[4];
//    qDebug() << "id: " <<iterator.value().id;
    i=0;
    while (iterator != tester.constEnd() & (i<4))
    {
        testerid[i]=iterator.value().id;
        data[i]=iterator.value().id+" "+iterator.value().name;
        ++iterator;
        ++i;
    }

    if(data[0]!="")
    {
        this->ui->info_1->setText(data[0].replace("\r\n","").replace("\n",""));
        this->ui->info_2->setText(data[1].replace("\r\n","").replace("\n",""));
        this->ui->info_3->setText(data[2].replace("\r\n","").replace("\n",""));
        this->ui->info_4->setText(data[3].replace("\r\n","").replace("\n",""));
        return true;
    }
    else
        return false;
}

void MainWindow::on_goUserInfo_clicked()
{
    this->ui->goUserInfo->setStyleSheet("border-radius:30px;background-color: rgb(170, 0, 127);color: rgb(255, 255, 255);");
    this->ui->goTestBtn->setStyleSheet("border-radius:30px;background-color: rgb(85, 170, 255);color: rgb(255, 255, 255);");
    this->ui->toDateBtn->setStyleSheet("border-radius:30px;background-color: rgb(85, 170, 255);color: rgb(255, 255, 255);");
    this->ui->toHelpBtn->setStyleSheet("border-radius:30px;background-color: rgb(85, 170, 255);color: rgb(255, 255, 255);");
    this->ui->stackedWidget_3->setCurrentIndex(4);
    testindex = 0;
    readtester(testindex);
    this->ui->label_39->setText("第 "+QString::number(testindex+1)+" 页");
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

void MainWindow::on_datalist_clicked()
{
    QMessageBox::information(NULL, "提示", "请查看文件夹\"./data/测试项目/管理员id/测试者id/测试次数\"");
}

void MainWindow::on_info_1_clicked()
{
    if(checkedindex==1)
    {
        checkedindex = 0;
        this->ui->info_1->setStyleSheet("border-radius:20px;background-color: rgb(255, 255, 255, 60%);color: rgb(0, 0, 0);");
        this->ui->info_2->setStyleSheet("border-radius:20px;background-color: rgb(255, 255, 255, 60%);color: rgb(0, 0, 0);");
        this->ui->info_3->setStyleSheet("border-radius:20px;background-color: rgb(255, 255, 255, 60%);color: rgb(0, 0, 0);");
        this->ui->info_4->setStyleSheet("border-radius:20px;background-color: rgb(255, 255, 255, 60%);color: rgb(0, 0, 0);");
    }
    else
    {
        checkedindex = 1;
        QMap<QString,Tester>::iterator it = tester.find(testerid[checkedindex-1]);
        if(it==tester.end())
        {
            checkedindex = 0;
        }
        else
        {
            this->ui->info_1->setStyleSheet("border-radius:20px;background-color: rgb(170, 0, 127, 60%);color: rgb(0, 0, 0);");
            this->ui->info_2->setStyleSheet("border-radius:20px;background-color: rgb(255, 255, 255, 60%);color: rgb(0, 0, 0);");
            this->ui->info_3->setStyleSheet("border-radius:20px;background-color: rgb(255, 255, 255, 60%);color: rgb(0, 0, 0);");
            this->ui->info_4->setStyleSheet("border-radius:20px;background-color: rgb(255, 255, 255, 60%);color: rgb(0, 0, 0);");
        }
    }
}


void MainWindow::on_info_2_clicked()
{
    if(checkedindex==2)
    {
        checkedindex = 0;
        this->ui->info_1->setStyleSheet("border-radius:20px;background-color: rgb(255, 255, 255, 60%);color: rgb(0, 0, 0);");
        this->ui->info_2->setStyleSheet("border-radius:20px;background-color: rgb(255, 255, 255, 60%);color: rgb(0, 0, 0);");
        this->ui->info_3->setStyleSheet("border-radius:20px;background-color: rgb(255, 255, 255, 60%);color: rgb(0, 0, 0);");
        this->ui->info_4->setStyleSheet("border-radius:20px;background-color: rgb(255, 255, 255, 60%);color: rgb(0, 0, 0);");
    }
    else {
        checkedindex = 2;
        QMap<QString,Tester>::iterator it = tester.find(testerid[checkedindex-1]);
        if(it==tester.end())
        {
            checkedindex = 0;
        }
        else
        {
            this->ui->info_2->setStyleSheet("border-radius:20px;background-color: rgb(170, 0, 127, 60%);color: rgb(0, 0, 0);");
            this->ui->info_1->setStyleSheet("border-radius:20px;background-color: rgb(255, 255, 255, 60%);color: rgb(0, 0, 0);");
            this->ui->info_3->setStyleSheet("border-radius:20px;background-color: rgb(255, 255, 255, 60%);color: rgb(0, 0, 0);");
            this->ui->info_4->setStyleSheet("border-radius:20px;background-color: rgb(255, 255, 255, 60%);color: rgb(0, 0, 0);");

        }

    }

}

void MainWindow::on_info_3_clicked()
{
    if(checkedindex==3)
    {
        checkedindex = 0;
        this->ui->info_1->setStyleSheet("border-radius:20px;background-color: rgb(255, 255, 255, 60%);color: rgb(0, 0, 0);");
        this->ui->info_2->setStyleSheet("border-radius:20px;background-color: rgb(255, 255, 255, 60%);color: rgb(0, 0, 0);");
        this->ui->info_3->setStyleSheet("border-radius:20px;background-color: rgb(255, 255, 255, 60%);color: rgb(0, 0, 0);");
        this->ui->info_4->setStyleSheet("border-radius:20px;background-color: rgb(255, 255, 255, 60%);color: rgb(0, 0, 0);");
    }
    else
    {
        checkedindex = 3;
        QMap<QString,Tester>::iterator it = tester.find(testerid[checkedindex-1]);
        if(it==tester.end())
        {
            checkedindex = 0;
        }
        else
        {
            this->ui->info_3->setStyleSheet("border-radius:20px;background-color: rgb(170, 0, 127, 60%);color: rgb(0, 0, 0);");
            this->ui->info_2->setStyleSheet("border-radius:20px;background-color: rgb(255, 255, 255, 60%);color: rgb(0, 0, 0);");
            this->ui->info_1->setStyleSheet("border-radius:20px;background-color: rgb(255, 255, 255, 60%);color: rgb(0, 0, 0);");
            this->ui->info_4->setStyleSheet("border-radius:20px;background-color: rgb(255, 255, 255, 60%);color: rgb(0, 0, 0);");

        }
    }

}

void MainWindow::on_info_4_clicked()
{
    if(checkedindex==4)
    {
        checkedindex = 0;
        this->ui->info_1->setStyleSheet("border-radius:20px;background-color: rgb(255, 255, 255, 60%);color: rgb(0, 0, 0);");
        this->ui->info_2->setStyleSheet("border-radius:20px;background-color: rgb(255, 255, 255, 60%);color: rgb(0, 0, 0);");
        this->ui->info_3->setStyleSheet("border-radius:20px;background-color: rgb(255, 255, 255, 60%);color: rgb(0, 0, 0);");
        this->ui->info_4->setStyleSheet("border-radius:20px;background-color: rgb(255, 255, 255, 60%);color: rgb(0, 0, 0);");
    }
    else
    {
        checkedindex = 4;
        QMap<QString,Tester>::iterator it = tester.find(testerid[checkedindex-1]);
        if(it==tester.end())
        {
            checkedindex = 0;
        }
        else
        {
            this->ui->info_4->setStyleSheet("border-radius:20px;background-color: rgb(170, 0, 127, 60%);color: rgb(0, 0, 0);");
            this->ui->info_2->setStyleSheet("border-radius:20px;background-color: rgb(255, 255, 255, 60%);color: rgb(0, 0, 0);");
            this->ui->info_3->setStyleSheet("border-radius:20px;background-color: rgb(255, 255, 255, 60%);color: rgb(0, 0, 0);");
            this->ui->info_1->setStyleSheet("border-radius:20px;background-color: rgb(255, 255, 255, 60%);color: rgb(0, 0, 0);");

        }
    }
}

void MainWindow::on_pushButton_2_clicked()
{
    testindex++;
    if(readtester(testindex))
        this->ui->label_39->setText("第 "+QString::number(testindex+1)+" 页");
    else
        testindex--;
}

void MainWindow::on_pushButton_clicked()
{
    if(testindex>0)
        testindex--;
    if(readtester(testindex))
        this->ui->label_39->setText("第 "+QString::number(testindex+1)+" 页");
    else
        testindex++;
}

void MainWindow::on_test1_30_clicked()
{
    this->ui->textEdit_7->setText("");
    this->ui->textEdit_8->setText("");
    this->ui->textEdit_9->setText("");
    this->ui->textEdit_10->setText("");
    this->ui->textEdit_11->setText("");
    this->ui->textEdit_12->setText("");
    this->ui->textEdit_13->setText("");
    ui->textEdit_7->setAlignment(Qt::AlignHCenter);
    ui->textEdit_8->setAlignment(Qt::AlignHCenter);
    ui->textEdit_9->setAlignment(Qt::AlignHCenter);
    ui->textEdit_10->setAlignment(Qt::AlignHCenter);
    ui->textEdit_11->setAlignment(Qt::AlignHCenter);
    ui->textEdit_12->setAlignment(Qt::AlignHCenter);
    ui->textEdit_13->setAlignment(Qt::AlignHCenter);
    this->ui->stackedWidget_3->setCurrentIndex(0);
}

void MainWindow::on_pushButton_3_clicked()
{
    QString id = this->ui->textEdit_7->toPlainText();
    QString name = this->ui->textEdit_8->toPlainText();
    QString group = this->ui->textEdit_9->toPlainText();
    QString birth = this->ui->textEdit_10->toPlainText();
    QString sex = this->ui->textEdit_11->toPlainText();
    QString item = this->ui->textEdit_12->toPlainText();
    QString level = this->ui->textEdit_13->toPlainText();
    if(tester.find(id)==tester.end())
    {
        if(name!="")
        {
            tester.insert(id,Tester(id,name,birth,sex,group,item,level));
            writetester();
            readtester(testindex);
            this->ui->stackedWidget_3->setCurrentIndex(4);
        }
        else
        {
            QMessageBox::information(NULL, "提示", "姓名为空，无法保存");
        }

    }
    else
    {
        QMessageBox::information(NULL, "提示", "ID重复，无法保存");
    }

}

void MainWindow::on_pushButton_4_clicked()
{
    this->ui->stackedWidget_3->setCurrentIndex(4);
}

void MainWindow::on_test1_29_clicked()
{
    if(checkedindex == 0)
    {
        QMessageBox::information(NULL, "提示", "请先选择测试者");
    }
    else
    {
        tester.remove(testerid[checkedindex-1]);
        this->ui->info_1->setText("");
        readtester(testindex);
        writetester();
    }
}

void MainWindow::on_test1_28_clicked()
{
    if(checkedindex == 0)
        QMessageBox::information(NULL, "提示", "请先选择测试者");
    else
    {
        QMap<QString,Tester>::iterator it = tester.find(testerid[checkedindex-1]);
        this->ui->textEdit_14->setText(it.value().id);
        this->ui->textEdit_15->setText(it.value().name.replace("\r\n","").replace("\n",""));
        this->ui->textEdit_16->setText(it.value().birth.replace("\r\n","").replace("\n",""));
        this->ui->textEdit_17->setText(it.value().sex.replace("\r\n","").replace("\n",""));
        ui->textEdit_14->setAlignment(Qt::AlignHCenter);
        ui->textEdit_15->setAlignment(Qt::AlignHCenter);
        ui->textEdit_16->setAlignment(Qt::AlignHCenter);
        ui->textEdit_17->setAlignment(Qt::AlignHCenter);
        this->ui->goTestBtn->setStyleSheet("border-radius:30px;background-color: rgb(170, 0, 127);color: rgb(255, 255, 255);");
        this->ui->goUserInfo->setStyleSheet("border-radius:30px;background-color: rgb(85, 170, 255);color: rgb(255, 255, 255);");
        this->ui->toDateBtn->setStyleSheet("border-radius:30px;background-color: rgb(85, 170, 255);color: rgb(255, 255, 255);");
        this->ui->toHelpBtn->setStyleSheet("border-radius:30px;background-color: rgb(85, 170, 255);color: rgb(255, 255, 255);");
        this->ui->stackedWidget_3->setCurrentIndex(1);
    }
}

void MainWindow::on_test1_clicked()
{
    int click = 0;
    if(exammap[click]==0)
    {
        this->ui->test1->setStyleSheet("border-radius:30px;background-color: rgb(170, 0, 127);color: rgb(255, 255, 255);");
        exammap[click]=1;
    }
    else
    {
        this->ui->test1->setStyleSheet("border-radius:30px;background-color: rgb(85, 170, 255);color: rgb(255, 255, 255);");
        exammap[click]=0;
    }
}

void MainWindow::on_test2_clicked()
{
    int click = 1;
    if(exammap[click]==0)
    {
        this->ui->test2->setStyleSheet("border-radius:30px;background-color: rgb(170, 0, 127);color: rgb(255, 255, 255);");
        exammap[click]=1;
    }
    else
    {
        this->ui->test2->setStyleSheet("border-radius:30px;background-color: rgb(85, 170, 255);color: rgb(255, 255, 255);");
        exammap[click]=0;
    }
}

void MainWindow::on_test3_clicked()
{
    int click = 2;
    if(exammap[click]==0)
    {
        this->ui->test3->setStyleSheet("border-radius:30px;background-color: rgb(170, 0, 127);color: rgb(255, 255, 255);");
        exammap[click]=1;
    }
    else
    {
        this->ui->test3->setStyleSheet("border-radius:30px;background-color: rgb(85, 170, 255);color: rgb(255, 255, 255);");
        exammap[click]=0;
    }
}

void MainWindow::on_test4_clicked()
{
    int click = 3;
    if(exammap[click]==0)
    {
        this->ui->test4->setStyleSheet("border-radius:30px;background-color: rgb(170, 0, 127);color: rgb(255, 255, 255);");
        exammap[click]=1;
    }
    else
    {
        this->ui->test4->setStyleSheet("border-radius:30px;background-color: rgb(85, 170, 255);color: rgb(255, 255, 255);");
        exammap[click]=0;
    }
}

void MainWindow::on_test5_clicked()
{
    int click = 4;
    if(exammap[click]==0)
    {
        this->ui->test5->setStyleSheet("border-radius:30px;background-color: rgb(170, 0, 127);color: rgb(255, 255, 255);");
        exammap[click]=1;
    }
    else
    {
        this->ui->test5->setStyleSheet("border-radius:30px;background-color: rgb(85, 170, 255);color: rgb(255, 255, 255);");
        exammap[click]=0;
    }
}

void MainWindow::on_test6_clicked()
{
    int click = 5;
    if(exammap[click]==0)
    {
        this->ui->test6->setStyleSheet("border-radius:30px;background-color: rgb(170, 0, 127);color: rgb(255, 255, 255);");
        exammap[click]=1;
    }
    else
    {
        this->ui->test6->setStyleSheet("border-radius:30px;background-color: rgb(85, 170, 255);color: rgb(255, 255, 255);");
        exammap[click]=0;
    }
}

void MainWindow::on_test7_clicked()
{
    int click = 6;
    if(exammap[click]==0)
    {
        this->ui->test7->setStyleSheet("border-radius:30px;background-color: rgb(170, 0, 127);color: rgb(255, 255, 255);");
        exammap[click]=1;
    }
    else
    {
        this->ui->test7->setStyleSheet("border-radius:30px;background-color: rgb(85, 170, 255);color: rgb(255, 255, 255);");
        exammap[click]=0;
    }
}

void MainWindow::on_test8_clicked()
{
    int click = 7;
    if(exammap[click]==0)
    {
        this->ui->test8->setStyleSheet("border-radius:30px;background-color: rgb(170, 0, 127);color: rgb(255, 255, 255);");
        exammap[click]=1;
    }
    else
    {
        this->ui->test8->setStyleSheet("border-radius:30px;background-color: rgb(85, 170, 255);color: rgb(255, 255, 255);");
        exammap[click]=0;
    }
}

void MainWindow::on_test9_clicked()
{
    int click = 8;
    if(exammap[click]==0)
    {
        this->ui->test9->setStyleSheet("border-radius:30px;background-color: rgb(170, 0, 127);color: rgb(255, 255, 255);");
        exammap[click]=1;
    }
    else
    {
        this->ui->test9->setStyleSheet("border-radius:30px;background-color: rgb(85, 170, 255);color: rgb(255, 255, 255);");
        exammap[click]=0;
    }
}

void MainWindow::on_test10_clicked()
{
    int click = 9;
    if(exammap[click]==0)
    {
        this->ui->test10->setStyleSheet("border-radius:30px;background-color: rgb(170, 0, 127);color: rgb(255, 255, 255);");
        exammap[click]=1;
    }
    else
    {
        this->ui->test10->setStyleSheet("border-radius:30px;background-color: rgb(85, 170, 255);color: rgb(255, 255, 255);");
        exammap[click]=0;
    }
}

void MainWindow::on_reset_clicked()
{
    reset();
    this->ui->test1->setStyleSheet("border-radius:30px;background-color: rgb(85, 170, 255);color: rgb(255, 255, 255);");
    this->ui->test2->setStyleSheet("border-radius:30px;background-color: rgb(85, 170, 255);color: rgb(255, 255, 255);");
    this->ui->test3->setStyleSheet("border-radius:30px;background-color: rgb(85, 170, 255);color: rgb(255, 255, 255);");
    this->ui->test4->setStyleSheet("border-radius:30px;background-color: rgb(85, 170, 255);color: rgb(255, 255, 255);");
    this->ui->test5->setStyleSheet("border-radius:30px;background-color: rgb(85, 170, 255);color: rgb(255, 255, 255);");
    this->ui->test6->setStyleSheet("border-radius:30px;background-color: rgb(85, 170, 255);color: rgb(255, 255, 255);");
    this->ui->test7->setStyleSheet("border-radius:30px;background-color: rgb(85, 170, 255);color: rgb(255, 255, 255);");
    this->ui->test8->setStyleSheet("border-radius:30px;background-color: rgb(85, 170, 255);color: rgb(255, 255, 255);");
    this->ui->test9->setStyleSheet("border-radius:30px;background-color: rgb(85, 170, 255);color: rgb(255, 255, 255);");
    this->ui->test10->setStyleSheet("border-radius:30px;background-color: rgb(85, 170, 255);color: rgb(255, 255, 255);");

}

void MainWindow::on_filter1_clicked()
{
    int click = 0;
    if(filtermap[click]==0)
    {
        this->ui->filter1->setStyleSheet("border-radius:20px;background-color: rgb(170, 0, 127);color: rgb(255, 255, 255);");
        filtermap[click]=1;
    }
    else
    {
        this->ui->filter1->setStyleSheet("border-radius:20px;background-color: rgb(85, 170, 255);color: rgb(255, 255, 255);");
        filtermap[click]=0;
    }
}

void MainWindow::on_filter2_clicked()
{
    int click = 1;
    if(filtermap[click]==0)
    {
        this->ui->filter2->setStyleSheet("border-radius:20px;background-color: rgb(170, 0, 127);color: rgb(255, 255, 255);");
        filtermap[click]=1;
    }
    else
    {
        this->ui->filter2->setStyleSheet("border-radius:20px;background-color: rgb(85, 170, 255);color: rgb(255, 255, 255);");
        filtermap[click]=0;
    }
}

void MainWindow::on_filter3_clicked()
{
    int click = 2;
    if(filtermap[click]==0)
    {
        this->ui->filter3->setStyleSheet("border-radius:20px;background-color: rgb(170, 0, 127);color: rgb(255, 255, 255);");
        filtermap[click]=1;
    }
    else
    {
        this->ui->filter3->setStyleSheet("border-radius:20px;background-color: rgb(85, 170, 255);color: rgb(255, 255, 255);");
        filtermap[click]=0;
    }
}

void MainWindow::on_filter4_clicked()
{
    int click = 3;
    if(filtermap[click]==0)
    {
        this->ui->filter4->setStyleSheet("border-radius:20px;background-color: rgb(170, 0, 127);color: rgb(255, 255, 255);");
        filtermap[click]=1;
    }
    else
    {
        this->ui->filter4->setStyleSheet("border-radius:20px;background-color: rgb(85, 170, 255);color: rgb(255, 255, 255);");
        filtermap[click]=0;
    }
}

void MainWindow::on_filter5_clicked()
{
    int click = 4;
    if(filtermap[click]==0)
    {
        this->ui->filter5->setStyleSheet("border-radius:20px;background-color: rgb(170, 0, 127);color: rgb(255, 255, 255);");
        filtermap[click]=1;
    }
    else
    {
        this->ui->filter5->setStyleSheet("border-radius:20px;background-color: rgb(85, 170, 255);color: rgb(255, 255, 255);");
        filtermap[click]=0;
    }
}

void MainWindow::on_filter6_clicked()
{
    int click = 5;
    if(filtermap[click]==0)
    {
        this->ui->filter6->setStyleSheet("border-radius:20px;background-color: rgb(170, 0, 127);color: rgb(255, 255, 255);");
        filtermap[click]=1;
    }
    else
    {
        this->ui->filter6->setStyleSheet("border-radius:20px;background-color: rgb(85, 170, 255);color: rgb(255, 255, 255);");
        filtermap[click]=0;
    }
}

void MainWindow::on_filter7_clicked()
{
    int click = 6;
    if(filtermap[click]==0)
    {
        this->ui->filter7->setStyleSheet("border-radius:20px;background-color: rgb(170, 0, 127);color: rgb(255, 255, 255);");
        filtermap[click]=1;
    }
    else
    {
        this->ui->filter7->setStyleSheet("border-radius:20px;background-color: rgb(85, 170, 255);color: rgb(255, 255, 255);");
        filtermap[click]=0;
    }
}

void MainWindow::on_filter8_clicked()
{
    int click = 7;
    if(filtermap[click]==0)
    {
        this->ui->filter8->setStyleSheet("border-radius:20px;background-color: rgb(170, 0, 127);color: rgb(255, 255, 255);");
        filtermap[click]=1;
    }
    else
    {
        this->ui->filter8->setStyleSheet("border-radius:20px;background-color: rgb(85, 170, 255);color: rgb(255, 255, 255);");
        filtermap[click]=0;
    }
}

void MainWindow::on_filter9_clicked()
{
    int click = 8;
    if(filtermap[click]==0)
    {
        this->ui->filter9->setStyleSheet("border-radius:20px;background-color: rgb(170, 0, 127);color: rgb(255, 255, 255);");
        filtermap[click]=1;
    }
    else
    {
        this->ui->filter9->setStyleSheet("border-radius:20px;background-color: rgb(85, 170, 255);color: rgb(255, 255, 255);");
        filtermap[click]=0;
    }
}

void MainWindow::on_filter10_clicked()
{
    int click = 9;
    if(filtermap[click]==0)
    {
        this->ui->filter10->setStyleSheet("border-radius:20px;background-color: rgb(170, 0, 127);color: rgb(255, 255, 255);");
        filtermap[click]=1;
    }
    else
    {
        this->ui->filter10->setStyleSheet("border-radius:20px;background-color: rgb(85, 170, 255);color: rgb(255, 255, 255);");
        filtermap[click]=0;
    }
}

void MainWindow::on_filterreset_clicked()
{
    filterreset();
    this->ui->filter1->setStyleSheet("border-radius:20px;background-color: rgb(85, 170, 255);color: rgb(255, 255, 255);");
    this->ui->filter2->setStyleSheet("border-radius:20px;background-color: rgb(85, 170, 255);color: rgb(255, 255, 255);");
    this->ui->filter3->setStyleSheet("border-radius:20px;background-color: rgb(85, 170, 255);color: rgb(255, 255, 255);");
    this->ui->filter4->setStyleSheet("border-radius:20px;background-color: rgb(85, 170, 255);color: rgb(255, 255, 255);");
    this->ui->filter5->setStyleSheet("border-radius:20px;background-color: rgb(85, 170, 255);color: rgb(255, 255, 255);");
    this->ui->filter6->setStyleSheet("border-radius:20px;background-color: rgb(85, 170, 255);color: rgb(255, 255, 255);");
    this->ui->filter7->setStyleSheet("border-radius:20px;background-color: rgb(85, 170, 255);color: rgb(255, 255, 255);");
    this->ui->filter8->setStyleSheet("border-radius:20px;background-color: rgb(85, 170, 255);color: rgb(255, 255, 255);");
    this->ui->filter9->setStyleSheet("border-radius:20px;background-color: rgb(85, 170, 255);color: rgb(255, 255, 255);");
    this->ui->filter10->setStyleSheet("border-radius:20px;background-color: rgb(85, 170, 255);color: rgb(255, 255, 255);");

    this->ui->filterinfo1->setText("暂无搜索结果");
    this->ui->filterinfo2->setText("");
    this->ui->filterinfo3->setText("");
    this->ui->filterinfo4->setText("");
    this->ui->filterinfo5->setText("");
    this->ui->filterinfo6->setText("");
}
