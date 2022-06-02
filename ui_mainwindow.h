/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *begin;
    QPushButton *toRegisterBtn;
    QLabel *begin_background;
    QLabel *begin_left;
    QLabel *label_5;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *run;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QGraphicsView *graphicsView_7;
    QLabel *label_21;
    QLabel *label_22;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QPushButton *confirmLoginBtn;
    QPushButton *forgetBtn;
    QRadioButton *radioButton;
    QPushButton *toRegisterBtn_2;
    QWidget *registerPage;
    QGraphicsView *graphicsView_4;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QPushButton *confirmRegBtn;
    QPushButton *returnBegBtn1;
    QWidget *adminMenu;
    QGraphicsView *graphicsView_6;
    QPushButton *toInfoBtn;
    QPushButton *toDateBtn;
    QPushButton *goTestBtn;
    QTextBrowser *introDuctionText;
    QPushButton *toHelpBtn;
    QWidget *helpPage;
    QLabel *label_9;
    QPushButton *returnMenu_3;
    QWidget *introductionPage;
    QLabel *label_10;
    QPushButton *returnMenu_2;
    QWidget *gratitudePage;
    QPushButton *returnMenu;
    QTextBrowser *textArea;
    QLabel *label_8;
    QLineEdit *lineEdit_7;
    QPushButton *exitUserBtn;
    QLabel *logo;
    QLabel *label_17;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1929, 926);
        QFont font;
        font.setFamily(QString::fromUtf8("DejaVu Sans Mono"));
        font.setPointSize(30);
        MainWindow->setFont(font);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 80, 1920, 846));
        begin = new QWidget();
        begin->setObjectName(QString::fromUtf8("begin"));
        toRegisterBtn = new QPushButton(begin);
        toRegisterBtn->setObjectName(QString::fromUtf8("toRegisterBtn"));
        toRegisterBtn->setGeometry(QRect(1230, 410, 81, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Microsoft YaHei"));
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        toRegisterBtn->setFont(font1);
        toRegisterBtn->setStyleSheet(QString::fromUtf8("color:black; \n"
"background-color:transparent;"));
        toRegisterBtn->setFlat(true);
        begin_background = new QLabel(begin);
        begin_background->setObjectName(QString::fromUtf8("begin_background"));
        begin_background->setGeometry(QRect(0, 0, 1920, 846));
        begin_left = new QLabel(begin);
        begin_left->setObjectName(QString::fromUtf8("begin_left"));
        begin_left->setGeometry(QRect(90, -10, 651, 871));
        begin_left->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255, 30%);"));
        label_5 = new QLabel(begin);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(170, 90, 481, 71));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Microsoft YaHei"));
        font2.setPointSize(25);
        font2.setBold(true);
        font2.setWeight(75);
        label_5->setFont(font2);
        label_5->setStyleSheet(QString::fromUtf8("background-color:transparent;"));
        label_11 = new QLabel(begin);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(170, 170, 481, 31));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Microsoft YaHei"));
        font3.setPointSize(14);
        font3.setBold(true);
        font3.setWeight(75);
        label_11->setFont(font3);
        label_11->setStyleSheet(QString::fromUtf8("background-color:transparent;"));
        label_12 = new QLabel(begin);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(180, 330, 451, 31));
        label_12->setFont(font1);
        label_12->setStyleSheet(QString::fromUtf8("background-color:transparent;"));
        label_13 = new QLabel(begin);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(180, 370, 451, 31));
        label_13->setFont(font1);
        label_13->setStyleSheet(QString::fromUtf8("background-color:transparent;"));
        label_14 = new QLabel(begin);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(180, 410, 451, 31));
        label_14->setFont(font1);
        label_14->setStyleSheet(QString::fromUtf8("background-color:transparent;"));
        label_15 = new QLabel(begin);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(180, 450, 451, 31));
        label_15->setFont(font1);
        label_15->setStyleSheet(QString::fromUtf8("background-color:transparent;"));
        label_16 = new QLabel(begin);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(180, 490, 191, 31));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Microsoft YaHei"));
        font4.setPointSize(10);
        font4.setBold(true);
        font4.setUnderline(false);
        font4.setWeight(75);
        label_16->setFont(font4);
        label_16->setStyleSheet(QString::fromUtf8("background-color:transparent;"));
        run = new QLabel(begin);
        run->setObjectName(QString::fromUtf8("run"));
        run->setGeometry(QRect(440, 620, 201, 111));
        run->setStyleSheet(QString::fromUtf8("background-color:transparent;"));
        label_18 = new QLabel(begin);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(180, 750, 72, 15));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Microsoft YaHei"));
        font5.setBold(true);
        font5.setWeight(75);
        label_18->setFont(font5);
        label_18->setStyleSheet(QString::fromUtf8("background-color:transparent;"));
        label_19 = new QLabel(begin);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(270, 750, 81, 16));
        label_19->setFont(font5);
        label_19->setStyleSheet(QString::fromUtf8("background-color:transparent;"));
        label_20 = new QLabel(begin);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(380, 750, 41, 16));
        label_20->setFont(font5);
        label_20->setStyleSheet(QString::fromUtf8("background-color:transparent;"));
        graphicsView_7 = new QGraphicsView(begin);
        graphicsView_7->setObjectName(QString::fromUtf8("graphicsView_7"));
        graphicsView_7->setGeometry(QRect(1070, 200, 401, 281));
        graphicsView_7->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255, 60%);\n"
"border-radius:30px;"));
        label_21 = new QLabel(begin);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(1110, 260, 81, 31));
        label_21->setFont(font1);
        label_21->setStyleSheet(QString::fromUtf8("background-color:transparent;"));
        label_22 = new QLabel(begin);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(1110, 330, 81, 31));
        label_22->setFont(font1);
        label_22->setStyleSheet(QString::fromUtf8("background-color:transparent;"));
        lineEdit_5 = new QLineEdit(begin);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(1210, 250, 211, 41));
        QFont font6;
        font6.setFamily(QString::fromUtf8("Microsoft YaHei"));
        font6.setPointSize(10);
        font6.setBold(false);
        font6.setItalic(false);
        font6.setWeight(50);
        lineEdit_5->setFont(font6);
        lineEdit_5->setStyleSheet(QString::fromUtf8("background-color:transparent;"));
        lineEdit_6 = new QLineEdit(begin);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(1210, 320, 211, 41));
        QFont font7;
        font7.setFamily(QString::fromUtf8("Microsoft YaHei"));
        font7.setPointSize(10);
        lineEdit_6->setFont(font7);
        lineEdit_6->setStyleSheet(QString::fromUtf8("background-color:transparent;"));
        lineEdit_6->setEchoMode(QLineEdit::Password);
        confirmLoginBtn = new QPushButton(begin);
        confirmLoginBtn->setObjectName(QString::fromUtf8("confirmLoginBtn"));
        confirmLoginBtn->setGeometry(QRect(1110, 410, 71, 41));
        confirmLoginBtn->setFont(font1);
        confirmLoginBtn->setStyleSheet(QString::fromUtf8("color:red; \n"
"background-color:transparent;"));
        confirmLoginBtn->setFlat(true);
        forgetBtn = new QPushButton(begin);
        forgetBtn->setObjectName(QString::fromUtf8("forgetBtn"));
        forgetBtn->setGeometry(QRect(1360, 410, 81, 41));
        forgetBtn->setFont(font1);
        forgetBtn->setStyleSheet(QString::fromUtf8("color:black; \n"
"background-color:transparent;"));
        forgetBtn->setFlat(true);
        radioButton = new QRadioButton(begin);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(1170, 500, 101, 31));
        radioButton->setFont(font5);
        radioButton->setStyleSheet(QString::fromUtf8("QRadioButton {\n"
"    font-family: \"Microsoft YaHei\";\n"
"    font-size: 16px;\n"
"    background-color: transparent;\n"
"}\n"
"QRadioButton::indicator {\n"
"    width:                  10px;\n"
"    height:                 10px;\n"
"    border-radius:          7px;\n"
"}\n"
"\n"
"QRadioButton::indicator:checked {\n"
"    background-color:       rgb(0, 255, 0);\n"
"    border:                 2px solid rgb(0, 255, 0);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked {\n"
"    background-color:       rgb(255, 0, 0);\n"
"    border:                 2px solid rgb(255, 0, 0);\n"
"}"));
        toRegisterBtn_2 = new QPushButton(begin);
        toRegisterBtn_2->setObjectName(QString::fromUtf8("toRegisterBtn_2"));
        toRegisterBtn_2->setGeometry(QRect(1290, 500, 81, 31));
        toRegisterBtn_2->setFont(font5);
        toRegisterBtn_2->setStyleSheet(QString::fromUtf8("font-family: \"Microsoft YaHei\";\n"
"font-size: 16px;\n"
"background-color: transparent;"));
        toRegisterBtn_2->setFlat(true);
        stackedWidget->addWidget(begin);
        begin_background->raise();
        begin_left->raise();
        label_11->raise();
        label_12->raise();
        label_13->raise();
        label_14->raise();
        label_15->raise();
        label_16->raise();
        label_5->raise();
        run->raise();
        label_18->raise();
        label_19->raise();
        label_20->raise();
        graphicsView_7->raise();
        label_21->raise();
        label_22->raise();
        lineEdit_5->raise();
        lineEdit_6->raise();
        confirmLoginBtn->raise();
        toRegisterBtn->raise();
        forgetBtn->raise();
        radioButton->raise();
        toRegisterBtn_2->raise();
        registerPage = new QWidget();
        registerPage->setObjectName(QString::fromUtf8("registerPage"));
        graphicsView_4 = new QGraphicsView(registerPage);
        graphicsView_4->setObjectName(QString::fromUtf8("graphicsView_4"));
        graphicsView_4->setGeometry(QRect(470, 100, 1000, 600));
        graphicsView_4->setStyleSheet(QString::fromUtf8("background-color: rgb(218, 227, 243);\n"
"border-radius:50px;"));
        label = new QLabel(registerPage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(770, 240, 81, 31));
        QFont font8;
        font8.setPointSize(15);
        font8.setBold(true);
        font8.setWeight(75);
        label->setFont(font8);
        label_2 = new QLabel(registerPage);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(770, 320, 91, 31));
        label_2->setFont(font8);
        label_3 = new QLabel(registerPage);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(770, 400, 81, 31));
        label_3->setFont(font8);
        label_4 = new QLabel(registerPage);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(770, 480, 71, 31));
        label_4->setFont(font8);
        lineEdit = new QLineEdit(registerPage);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(890, 240, 241, 41));
        lineEdit->setStyleSheet(QString::fromUtf8("font: 14pt \"Microsoft Sans Serif\";"));
        lineEdit_2 = new QLineEdit(registerPage);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(890, 320, 241, 41));
        lineEdit_2->setStyleSheet(QString::fromUtf8("font: 14pt \"Microsoft Sans Serif\";"));
        lineEdit_2->setEchoMode(QLineEdit::Password);
        lineEdit_3 = new QLineEdit(registerPage);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(890, 400, 241, 41));
        lineEdit_3->setStyleSheet(QString::fromUtf8("font: 14pt \"Microsoft Sans Serif\";"));
        lineEdit_4 = new QLineEdit(registerPage);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(890, 470, 241, 41));
        lineEdit_4->setStyleSheet(QString::fromUtf8("font: 14pt \"Microsoft Sans Serif\";"));
        confirmRegBtn = new QPushButton(registerPage);
        confirmRegBtn->setObjectName(QString::fromUtf8("confirmRegBtn"));
        confirmRegBtn->setGeometry(QRect(780, 590, 111, 51));
        QFont font9;
        font9.setPointSize(13);
        font9.setBold(true);
        font9.setWeight(75);
        confirmRegBtn->setFont(font9);
        confirmRegBtn->setStyleSheet(QString::fromUtf8("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-color: rgb(0, 85, 255);\n"
""));
        returnBegBtn1 = new QPushButton(registerPage);
        returnBegBtn1->setObjectName(QString::fromUtf8("returnBegBtn1"));
        returnBegBtn1->setGeometry(QRect(1050, 590, 111, 51));
        returnBegBtn1->setFont(font9);
        returnBegBtn1->setStyleSheet(QString::fromUtf8("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-color: rgb(0, 85, 255);\n"
""));
        stackedWidget->addWidget(registerPage);
        adminMenu = new QWidget();
        adminMenu->setObjectName(QString::fromUtf8("adminMenu"));
        graphicsView_6 = new QGraphicsView(adminMenu);
        graphicsView_6->setObjectName(QString::fromUtf8("graphicsView_6"));
        graphicsView_6->setGeometry(QRect(480, 100, 1000, 600));
        graphicsView_6->setStyleSheet(QString::fromUtf8("background-color: rgb(218, 227, 243);\n"
"border-radius:50px;"));
        toInfoBtn = new QPushButton(adminMenu);
        toInfoBtn->setObjectName(QString::fromUtf8("toInfoBtn"));
        toInfoBtn->setGeometry(QRect(840, 580, 251, 71));
        toInfoBtn->setFont(font9);
        toInfoBtn->setStyleSheet(QString::fromUtf8("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-color: rgb(0, 85, 255);\n"
""));
        toDateBtn = new QPushButton(adminMenu);
        toDateBtn->setObjectName(QString::fromUtf8("toDateBtn"));
        toDateBtn->setGeometry(QRect(840, 320, 251, 71));
        toDateBtn->setFont(font9);
        toDateBtn->setStyleSheet(QString::fromUtf8("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-color: rgb(0, 85, 255);\n"
""));
        goTestBtn = new QPushButton(adminMenu);
        goTestBtn->setObjectName(QString::fromUtf8("goTestBtn"));
        goTestBtn->setGeometry(QRect(840, 190, 251, 71));
        goTestBtn->setFont(font9);
        goTestBtn->setStyleSheet(QString::fromUtf8("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-color: rgb(0, 85, 255);\n"
""));
        introDuctionText = new QTextBrowser(adminMenu);
        introDuctionText->setObjectName(QString::fromUtf8("introDuctionText"));
        introDuctionText->setGeometry(QRect(490, 0, 911, 61));
        toHelpBtn = new QPushButton(adminMenu);
        toHelpBtn->setObjectName(QString::fromUtf8("toHelpBtn"));
        toHelpBtn->setGeometry(QRect(840, 450, 251, 71));
        toHelpBtn->setFont(font9);
        toHelpBtn->setStyleSheet(QString::fromUtf8("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-color: rgb(0, 85, 255);\n"
""));
        stackedWidget->addWidget(adminMenu);
        helpPage = new QWidget();
        helpPage->setObjectName(QString::fromUtf8("helpPage"));
        label_9 = new QLabel(helpPage);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(690, 180, 441, 101));
        returnMenu_3 = new QPushButton(helpPage);
        returnMenu_3->setObjectName(QString::fromUtf8("returnMenu_3"));
        returnMenu_3->setGeometry(QRect(20, 30, 93, 28));
        returnMenu_3->setStyleSheet(QString::fromUtf8("font: 9pt \"Agency FB\";"));
        stackedWidget->addWidget(helpPage);
        introductionPage = new QWidget();
        introductionPage->setObjectName(QString::fromUtf8("introductionPage"));
        label_10 = new QLabel(introductionPage);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(810, 200, 291, 81));
        QFont font10;
        font10.setFamily(QString::fromUtf8("Adobe Devanagari"));
        font10.setPointSize(20);
        font10.setBold(false);
        font10.setItalic(false);
        font10.setWeight(9);
        label_10->setFont(font10);
        label_10->setStyleSheet(QString::fromUtf8("font: 75 20pt \"Adobe Devanagari\";"));
        returnMenu_2 = new QPushButton(introductionPage);
        returnMenu_2->setObjectName(QString::fromUtf8("returnMenu_2"));
        returnMenu_2->setGeometry(QRect(20, 20, 93, 28));
        returnMenu_2->setStyleSheet(QString::fromUtf8("font: 9pt \"Agency FB\";"));
        stackedWidget->addWidget(introductionPage);
        gratitudePage = new QWidget();
        gratitudePage->setObjectName(QString::fromUtf8("gratitudePage"));
        returnMenu = new QPushButton(gratitudePage);
        returnMenu->setObjectName(QString::fromUtf8("returnMenu"));
        returnMenu->setGeometry(QRect(20, 10, 93, 28));
        returnMenu->setStyleSheet(QString::fromUtf8("font: 9pt \"Agency FB\";"));
        textArea = new QTextBrowser(gratitudePage);
        textArea->setObjectName(QString::fromUtf8("textArea"));
        textArea->setGeometry(QRect(620, 80, 651, 311));
        QFont font11;
        font11.setFamily(QString::fromUtf8("Adobe Devanagari"));
        font11.setPointSize(12);
        textArea->setFont(font11);
        stackedWidget->addWidget(gratitudePage);
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(1250, 30, 81, 31));
        label_8->setFont(font1);
        lineEdit_7 = new QLineEdit(centralwidget);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));
        lineEdit_7->setGeometry(QRect(1350, 30, 113, 31));
        lineEdit_7->setFont(font6);
        lineEdit_7->setStyleSheet(QString::fromUtf8(""));
        exitUserBtn = new QPushButton(centralwidget);
        exitUserBtn->setObjectName(QString::fromUtf8("exitUserBtn"));
        exitUserBtn->setGeometry(QRect(1630, 30, 93, 28));
        exitUserBtn->setFont(font1);
        exitUserBtn->setStyleSheet(QString::fromUtf8("color:black; \n"
"background-color:transparent;"));
        exitUserBtn->setFlat(true);
        logo = new QLabel(centralwidget);
        logo->setObjectName(QString::fromUtf8("logo"));
        logo->setGeometry(QRect(90, 0, 311, 80));
        label_17 = new QLabel(centralwidget);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(1480, 30, 81, 31));
        label_17->setFont(font1);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1929, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        toRegisterBtn->setText(QCoreApplication::translate("MainWindow", "\345\205\215\350\264\271\346\263\250\345\206\214", nullptr));
        begin_background->setText(QString());
        begin_left->setText(QString());
        label_5->setText(QCoreApplication::translate("MainWindow", "\350\277\220\345\212\250\345\221\230\350\256\244\347\237\245\345\212\237\350\203\275\346\265\213\350\257\225\345\271\263\345\217\260", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Athlete cognitive function test platform", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "\346\254\242\350\277\216\346\235\245\345\210\260cogn4sports\357\274\214\350\277\231\346\230\257\344\270\200\344\270\252\345\256\214\345\205\250\345\274\200\346\272\220\345\271\266\344\270\224\345\205\215\350\264\271\347\232\204\350\277\220\345\212\250", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "\345\221\230\350\256\244\347\237\245\345\212\237\350\203\275\346\265\213\350\257\225\345\271\263\345\217\260\357\274\214\345\234\250\350\277\231\351\207\214\346\202\250\345\217\257\344\273\245\345\205\215\350\264\271\344\275\277\347\224\250\346\210\221\344\273\254\347\224\250 Psy-", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "choPY\346\235\245\347\274\226\345\206\231\347\232\204\345\215\201\347\247\215\347\273\217\345\205\270\350\256\244\347\237\245\345\212\237\350\203\275\350\214\203\345\274\217\343\200\202\346\210\221\344\273\254\350\207\264\345\212\233\344\272\216\346\216\250\345\212\250\346\233\264", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "\344\270\272\344\276\277\346\215\267\347\232\204\350\256\244\347\237\245\345\212\237\350\203\275\346\265\213\350\257\225\350\275\257\344\273\266\357\274\214\344\273\245\346\234\237\345\217\257\344\273\245\344\270\272\345\271\277\345\244\247\347\247\221\347\240\224\345\267\245\344\275\234\350\200\205\346\217\220", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "\344\276\233\344\270\200\344\270\252\346\233\264\344\270\272\344\276\277\345\210\251\347\232\204\345\271\263\345\217\260", nullptr));
        run->setText(QString());
        label_18->setText(QCoreApplication::translate("MainWindow", "\345\205\263\344\272\216\350\275\257\344\273\266", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "\346\224\257\346\214\201\344\270\216\346\234\215\345\212\241", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "\346\263\225\345\276\213", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "\347\231\273\345\275\225\350\264\246\345\217\267:", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "\347\231\273\345\275\225\345\257\206\347\240\201:", nullptr));
        lineEdit_6->setText(QString());
        confirmLoginBtn->setText(QCoreApplication::translate("MainWindow", "\347\231\273  \345\275\225", nullptr));
        forgetBtn->setText(QCoreApplication::translate("MainWindow", "\345\277\230\350\256\260\345\257\206\347\240\201", nullptr));
        radioButton->setText(QCoreApplication::translate("MainWindow", "\345\220\214\346\204\217\345\215\217\350\256\256", nullptr));
        toRegisterBtn_2->setText(QCoreApplication::translate("MainWindow", "\345\205\215\350\264\271\346\263\250\345\206\214", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\347\224\250\346\210\267\345\220\215", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\345\257\206\347\240\201", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\345\215\225\344\275\215", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\351\202\256\347\256\261", nullptr));
        confirmRegBtn->setText(QCoreApplication::translate("MainWindow", "\347\241\256\350\256\244", nullptr));
        returnBegBtn1->setText(QCoreApplication::translate("MainWindow", "\350\277\224\345\233\236", nullptr));
        toInfoBtn->setText(QCoreApplication::translate("MainWindow", " \345\205\263\344\272\216\350\275\257\344\273\266", nullptr));
        toDateBtn->setText(QCoreApplication::translate("MainWindow", "\346\225\260\346\215\256\345\257\274\345\207\272", nullptr));
        goTestBtn->setText(QCoreApplication::translate("MainWindow", "\350\277\233\345\205\245\346\265\213\350\257\225", nullptr));
        introDuctionText->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'DejaVu Sans Mono'; font-size:12pt;\">\345\271\263\345\217\260\344\273\213\347\273\215\357\274\232\350\277\231\346\230\257\344\270\200\344\270\252\343\200\202\343\200\202\343\200\202\343\200\202\343\200\202</span></p></body></html>", nullptr));
        toHelpBtn->setText(QCoreApplication::translate("MainWindow", "\344\275\277\347\224\250\345\270\256\345\212\251\357\274\210manual\357\274\211", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "\344\275\277\347\224\250\345\270\256\345\212\251\344\277\241\346\201\257\347\225\214\351\235\242", nullptr));
        returnMenu_3->setText(QCoreApplication::translate("MainWindow", "\350\277\224\345\233\236", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "\350\275\257\344\273\266\344\273\213\347\273\215\347\225\214\351\235\242", nullptr));
        returnMenu_2->setText(QCoreApplication::translate("MainWindow", "\350\277\224\345\233\236", nullptr));
        returnMenu->setText(QCoreApplication::translate("MainWindow", "\350\277\224\345\233\236", nullptr));
        textArea->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Adobe Devanagari'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Adobe Devanagari','DejaVu Sans Mono';\">\346\234\254\351\241\271\347\233\256\347\224\261....\345\256\214\346\210\220\357\274\214\346\204\237\350\260\242\346\202\250\347\232\204\344\275\277\347\224\250\343\200\202\346\255\244\345\244\226\357\274\214\347\224\261\350\241\267\345\270\214\346\234\233\345\276\227\345\210\260\346\202\250\345\234\250\344\275\277\347\224\250\344\270\255\347\232\204\346\265\213\350\257\225\346\225\260\346\215\256\357\274\214\345\256\236\347\216\260\346\225\260\346\215\256\345\205\261\344"
                        "\272\253\343\200\202\343\200\202\343\200\202\343\200\202</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/logo1.png\" /></p></body></html>", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "\345\275\223\345\211\215\347\224\250\346\210\267:", nullptr));
        lineEdit_7->setText(QCoreApplication::translate("MainWindow", "\346\234\252\347\231\273\345\275\225", nullptr));
        exitUserBtn->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272\347\231\273\345\275\225", nullptr));
        logo->setText(QString());
        label_17->setText(QCoreApplication::translate("MainWindow", "\357\274\210\347\256\241\347\220\206\345\221\230\357\274\211", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
