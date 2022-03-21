#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPainter>
#include <qstring.h>
#include <qmap.h>
#include <testinterface.h>
#include <datamanage.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class User{
public:
    User(const QString n,QString p,QString c,QString e):name(n),password(p),company(c),email(e){}

    bool checkpassword(QString p){return password.compare(p)==0;}
private:
    QString name;
    QString password;
    QString company;
    QString email;
};

typedef QMap<QString, User> UserMap;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

signals:
    void toTest();
    void toData();

private slots:

    void on_toLoginBtn_clicked();

    void on_toRegisterBtn_clicked();

    void on_returnBeginBtn_clicked();

    void on_confirmLoginBtn_clicked();

    void on_confirmRegBtn_clicked();

    void on_returnBegBtn1_clicked();


    void on_toDateBtn_clicked();


    void on_toHelpBtn_clicked();

    void showMain();

    void on_returnMenu_clicked();

    void on_exitUserBtn_clicked();

    void on_toThankBtn_clicked();

    void on_goTestBtn_clicked();

    void on_toInfoBtn_clicked();

    void on_returnMenu_3_clicked();

    void on_returnMenu_2_clicked();

private:
    Ui::MainWindow *ui;
    UserMap map;
    TestInterface * testui;
    DataManage * dataui;
    void readuser();
    void writeuser(QString content);

protected:
    void paintEvent(QPaintEvent *);
};
#endif // MAINWINDOW_H
