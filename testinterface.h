#ifndef TESTINTERFACE_H
#define TESTINTERFACE_H

#include <QMainWindow>

namespace Ui {
class TestInterface;
}

class TestInterface : public QMainWindow
{
    Q_OBJECT

public:
    explicit TestInterface(QWidget *parent = nullptr);
    ~TestInterface();
signals:
    void showMain();
    void showData();//查看结果

private slots:

    void on_returnHome_clicked();

    void showTest();

    void on_chooseExistTaskBtn_clicked();

    void on_createNewBtn_clicked();

    void on_manageTaskBtn_clicked();

    void on_returnMenuBtn_clicked();

    void on_returnMenuBtn_2_clicked();

    void on_returnMenuBtn_3_clicked();



    void on_checkResusltBtn_clicked();


    void on_beginTestBtn_clicked();

    void on_beginTestBtn_2_clicked();

    void on_toLoginBtn_clicked();

    void on_toRegisterBtn_clicked();

    void on_returnBegBtn1_clicked();

    void on_returnBegBtn_clicked();

    void on_confirmLogBtn_clicked();

    void on_confirmRegBtn_clicked();

    void on_startTestBtn_clicked();

private:
    Ui::TestInterface *ui;
};

#endif // TESTINTERFACE_H
