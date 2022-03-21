#ifndef DATAMANAGE_H
#define DATAMANAGE_H

#include <QMainWindow>

namespace Ui {
class DataManage;
}

class DataManage : public QMainWindow
{
    Q_OBJECT

public:
    explicit DataManage(QWidget *parent = nullptr);
    ~DataManage();
signals:
    void showMain();
public slots:
    void showData();
private slots:
    void on_returnHome_clicked();

private:
    Ui::DataManage *ui;
};

#endif // DATAMANAGE_H
