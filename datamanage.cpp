#include "datamanage.h"
#include "ui_datamanage.h"

DataManage::DataManage(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DataManage)
{
    ui->setupUi(this);
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
