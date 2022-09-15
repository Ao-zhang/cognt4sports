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

class Tester{
public:
    Tester(QString i,QString n,QString b,QString s,QString g,QString it,QString l):id(i),name(n),birth(b),sex(s),group(g),item(it),level(l){}

    QString id;
    QString name;
    QString birth="";
    QString sex="";
    QString group="";
    QString item="";
    QString level="";
};

typedef QMap<QString, User> UserMap;
typedef QMap<QString, Tester> TesterMap;

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

    void on_toRegisterBtn_clicked();

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

    void on_returnMenu_3_clicked();

    void on_returnMenu_2_clicked();

    bool eventFilter(QObject *watched, QEvent *event) ;

    void on_agreebutton_clicked(bool checked);

    void on_goUserInfo_clicked();

    void on_goUserInfo_2_clicked();

    void on_goUserInfo_4_clicked();

    void on_admininfo_clicked();

    void on_datalist_clicked();

    void on_info_1_clicked();

    void on_info_2_clicked();

    void on_info_3_clicked();

    void on_info_4_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_test1_30_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_test1_29_clicked();

    void on_test1_28_clicked();

    void on_test1_clicked();

    void on_test2_clicked();

    void on_test3_clicked();

    void on_test4_clicked();

    void on_test5_clicked();

    void on_test6_clicked();

    void on_test7_clicked();

    void on_test8_clicked();

    void on_test9_clicked();

    void on_test10_clicked();

    void on_reset_clicked();

    void on_filter1_clicked();

    void on_filter2_clicked();

    void on_filter3_clicked();

    void on_filter4_clicked();

    void on_filter5_clicked();

    void on_filter6_clicked();

    void on_filter7_clicked();

    void on_filter8_clicked();

    void on_filter9_clicked();

    void on_filter10_clicked();

    void on_filterreset_clicked();

private:
    Ui::MainWindow *ui;
    UserMap map;
    TestInterface * testui;
    DataManage * dataui;
    TesterMap tester;
    int agree = 0;
    void readuser();
    void writeuser(QString content);
    void init_img();
    bool readtester(int index);
    void readalltester();
    void writetester();
    void reset();
    void filterreset();
    int testindex = 0;
    int checkedindex = 0;
    QString testerid[4];
    int exammap[10];
    int filtermap[10];

protected:
    void paintEvent(QPaintEvent *);
};
#endif // MAINWINDOW_H
