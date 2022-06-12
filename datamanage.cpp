#include "datamanage.h"
#include "ui_datamanage.h"
#include <QMessageBox>

DataManage::DataManage(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DataManage)
{
    ui->setupUi(this);
    QPixmap qimage("./img/background.png");
    qimage = qimage.scaled(1920,846,Qt::IgnoreAspectRatio,Qt::SmoothTransformation);
    ui->begin_background_2->setPixmap(qimage);
    ui->begin_background_2->show();

    QPixmap qimage3("./img/run2.png");
    qimage3 = qimage3.scaled(241,111,Qt::IgnoreAspectRatio,Qt::SmoothTransformation);
    ui->run_2->setPixmap(qimage3);
    ui->run_2->show();
}

DataManage::~DataManage()
{
    delete ui;
}

void DataManage::showData()
{
    this->show();
}

void DataManage::on_returnHome_clicked()
{
    this->hide();
    emit showMain();
}

void DataManage::on_manageTaskBtn_2_clicked()
{
    QMessageBox::information(NULL, "提示", "请查看文件夹\"./data/测试项目/管理员id/测试者id/测试次数\"");
}

void DataManage::on_createNewBtn_2_clicked()
{
    QMessageBox::information(NULL, "提示", "请查看文件夹\"./data/测试项目/管理员id\"");
}


void DataManage::on_chooseExistTaskBtn_2_clicked()
{
    QMessageBox::information(NULL, "提示", "请查看文件夹\"./data\"");
}
