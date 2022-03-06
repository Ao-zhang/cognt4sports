#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QFileDialog"
#include <QDebug>
#include <QMessageBox>
#undef slots
#include "Python.h"
#define slots Q_SLOTS

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);
    readuser();
}

MainWindow::~MainWindow()
{
    delete ui;
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
//            qDebug()<<array;
//            qDebug()<<array1.length();
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

void MainWindow::on_pushButton_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_pushButton_5_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_pushButton_7_clicked()
{
    ui->lineEdit_5->setText("");
    ui->lineEdit_6->setText("");
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_pushButton_6_clicked()
{
    QString name = ui->lineEdit_5->text();
    QString password = ui->lineEdit_6->text();

    ui->lineEdit_5->setText("");
    ui->lineEdit_6->setText("");

    if(map.contains(name))
    {
//        qDebug()<<name;
//        qDebug()<<password;
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

void MainWindow::on_pushButton_8_clicked()
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

void MainWindow::on_pushButton_9_clicked()
{
    ui->lineEdit->setText("");
    ui->lineEdit_2->setText("");
    ui->lineEdit_3->setText("");
    ui->lineEdit_4->setText("");
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_pushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
    ui->lineEdit_7->setText("未登录");
}

void MainWindow::on_pushButton_2_clicked()
{
    //python 环境初始化
//    QString path = QCoreApplication::applicationDirPath()+"/py36/";
//    qDebug() <<path;
//    Py_SetPythonHome((wchar_t *)(reinterpret_cast<const wchar_t*>(path.utf16())));
    Py_Initialize();
    if(!Py_IsInitialized())
    {
        qDebug() << "python Initialized error";
        PyErr_Print();
        return;
    }

    PyRun_SimpleString("import sys");
    PyRun_SimpleString("sys.path.append(\"./\")");
    //python文件导入
    PyObject *pModule = PyImport_ImportModule("flanker");
    if(!pModule)
    {
        PyErr_Print();

        qDebug()<< "Import python file error";
        return;
    }

    //python文件内模块导入
    PyObject *pFunc = PyObject_GetAttrString(pModule,"flanker");
    if(!pFunc)
    {
        PyErr_Print();
        qDebug() << "Import python module error";
        return;
    }

    //python执行
    PyObject_CallFunction(pFunc,NULL);
    //python退出
    Py_Finalize();
    return;
}


void MainWindow::on_pushButton_10_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}

void MainWindow::on_pushButton_11_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}



void MainWindow::on_pushButton_12_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);
}

void MainWindow::on_pushButton_14_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

void MainWindow::on_pushButton_13_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

void MainWindow::on_pushButton_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}
