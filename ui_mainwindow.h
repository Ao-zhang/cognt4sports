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
#include <QtWidgets/QFrame>
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
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *begin;
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
    QStackedWidget *stackedWidget_2;
    QWidget *page;
    QPushButton *toRegisterBtn_2;
    QLabel *label_21;
    QLabel *label_22;
    QPushButton *forgetBtn;
    QPushButton *confirmLoginBtn;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QPushButton *toRegisterBtn;
    QRadioButton *agreebutton;
    QGraphicsView *graphicsView_7;
    QWidget *page_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_3;
    QPushButton *returnBegBtn1;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineEdit_4;
    QLabel *label;
    QLineEdit *lineEdit_2;
    QPushButton *confirmRegBtn;
    QGraphicsView *graphicsView_8;
    QWidget *adminMenu;
    QPushButton *toDateBtn;
    QPushButton *goTestBtn;
    QPushButton *toHelpBtn;
    QLabel *begin_background_2;
    QLabel *begin_left_2;
    QLabel *label_6;
    QLabel *label_23;
    QPushButton *goTestBtn_2;
    QFrame *line;
    QLabel *label_24;
    QLabel *run_2;
    QLabel *begin_right;
    QLabel *label_25;
    QLabel *label_26;
    QTextEdit *textEdit;
    QLabel *label_27;
    QTextEdit *textEdit_2;
    QLabel *label_28;
    QTextEdit *textEdit_3;
    QLabel *label_29;
    QTextEdit *textEdit_4;
    QLabel *label_30;
    QTextEdit *textEdit_5;
    QLabel *label_31;
    QTextEdit *textEdit_6;
    QLabel *label_32;
    QLabel *label_33;
    QTextEdit *textEdit_7;
    QLabel *label_34;
    QTextEdit *textEdit_8;
    QLabel *label_35;
    QTextEdit *textEdit_9;
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
        QFont font1;
        font1.setFamily(QString::fromUtf8("Microsoft YaHei"));
        font1.setPointSize(25);
        font1.setBold(true);
        font1.setWeight(75);
        label_5->setFont(font1);
        label_5->setStyleSheet(QString::fromUtf8("background-color:transparent;"));
        label_11 = new QLabel(begin);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(170, 170, 481, 31));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Microsoft YaHei"));
        font2.setPointSize(14);
        font2.setBold(true);
        font2.setWeight(75);
        label_11->setFont(font2);
        label_11->setStyleSheet(QString::fromUtf8("background-color:transparent;"));
        label_12 = new QLabel(begin);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(180, 330, 451, 31));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Microsoft YaHei"));
        font3.setPointSize(10);
        font3.setBold(true);
        font3.setWeight(75);
        label_12->setFont(font3);
        label_12->setStyleSheet(QString::fromUtf8("background-color:transparent;"));
        label_13 = new QLabel(begin);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(180, 370, 451, 31));
        label_13->setFont(font3);
        label_13->setStyleSheet(QString::fromUtf8("background-color:transparent;"));
        label_14 = new QLabel(begin);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(180, 410, 451, 31));
        label_14->setFont(font3);
        label_14->setStyleSheet(QString::fromUtf8("background-color:transparent;"));
        label_15 = new QLabel(begin);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(180, 450, 451, 31));
        label_15->setFont(font3);
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
        stackedWidget_2 = new QStackedWidget(begin);
        stackedWidget_2->setObjectName(QString::fromUtf8("stackedWidget_2"));
        stackedWidget_2->setGeometry(QRect(960, 220, 731, 551));
        stackedWidget_2->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        toRegisterBtn_2 = new QPushButton(page);
        toRegisterBtn_2->setObjectName(QString::fromUtf8("toRegisterBtn_2"));
        toRegisterBtn_2->setGeometry(QRect(380, 330, 81, 31));
        toRegisterBtn_2->setFont(font5);
        toRegisterBtn_2->setStyleSheet(QString::fromUtf8("font-family: \"Microsoft YaHei\";\n"
"font-size: 16px;\n"
"background-color: transparent;"));
        toRegisterBtn_2->setFlat(true);
        label_21 = new QLabel(page);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(200, 90, 81, 31));
        label_21->setFont(font3);
        label_21->setStyleSheet(QString::fromUtf8("background-color:transparent;"));
        label_22 = new QLabel(page);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(200, 160, 81, 31));
        label_22->setFont(font3);
        label_22->setStyleSheet(QString::fromUtf8("background-color:transparent;"));
        forgetBtn = new QPushButton(page);
        forgetBtn->setObjectName(QString::fromUtf8("forgetBtn"));
        forgetBtn->setGeometry(QRect(450, 240, 81, 41));
        forgetBtn->setFont(font3);
        forgetBtn->setStyleSheet(QString::fromUtf8("color:black; \n"
"background-color:transparent;"));
        forgetBtn->setFlat(true);
        confirmLoginBtn = new QPushButton(page);
        confirmLoginBtn->setObjectName(QString::fromUtf8("confirmLoginBtn"));
        confirmLoginBtn->setGeometry(QRect(200, 240, 71, 41));
        confirmLoginBtn->setFont(font3);
        confirmLoginBtn->setStyleSheet(QString::fromUtf8("color:red; \n"
"background-color:transparent;"));
        confirmLoginBtn->setFlat(true);
        lineEdit_5 = new QLineEdit(page);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(300, 80, 211, 41));
        QFont font6;
        font6.setFamily(QString::fromUtf8("Microsoft YaHei"));
        font6.setPointSize(10);
        font6.setBold(false);
        font6.setItalic(false);
        font6.setWeight(50);
        lineEdit_5->setFont(font6);
        lineEdit_5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255, 60%);"));
        lineEdit_6 = new QLineEdit(page);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(300, 150, 211, 41));
        QFont font7;
        font7.setFamily(QString::fromUtf8("Microsoft YaHei"));
        font7.setPointSize(10);
        lineEdit_6->setFont(font7);
        lineEdit_6->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255, 60%);"));
        lineEdit_6->setEchoMode(QLineEdit::Password);
        toRegisterBtn = new QPushButton(page);
        toRegisterBtn->setObjectName(QString::fromUtf8("toRegisterBtn"));
        toRegisterBtn->setGeometry(QRect(320, 240, 81, 41));
        toRegisterBtn->setFont(font3);
        toRegisterBtn->setStyleSheet(QString::fromUtf8("color:black; \n"
"background-color:transparent;"));
        toRegisterBtn->setFlat(true);
        agreebutton = new QRadioButton(page);
        agreebutton->setObjectName(QString::fromUtf8("agreebutton"));
        agreebutton->setGeometry(QRect(260, 330, 101, 31));
        agreebutton->setFont(font5);
        agreebutton->setStyleSheet(QString::fromUtf8("QRadioButton {\n"
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
        graphicsView_7 = new QGraphicsView(page);
        graphicsView_7->setObjectName(QString::fromUtf8("graphicsView_7"));
        graphicsView_7->setGeometry(QRect(150, 40, 421, 351));
        graphicsView_7->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255, 60%);\n"
"border-radius:30px;"));
        stackedWidget_2->addWidget(page);
        graphicsView_7->raise();
        toRegisterBtn_2->raise();
        label_21->raise();
        label_22->raise();
        forgetBtn->raise();
        confirmLoginBtn->raise();
        lineEdit_5->raise();
        lineEdit_6->raise();
        toRegisterBtn->raise();
        agreebutton->raise();
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        lineEdit = new QLineEdit(page_2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(290, 80, 241, 41));
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255, 60%);"));
        lineEdit_3 = new QLineEdit(page_2);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(290, 200, 241, 41));
        lineEdit_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255, 60%);"));
        returnBegBtn1 = new QPushButton(page_2);
        returnBegBtn1->setObjectName(QString::fromUtf8("returnBegBtn1"));
        returnBegBtn1->setGeometry(QRect(400, 340, 81, 41));
        QFont font8;
        font8.setPointSize(13);
        font8.setBold(true);
        font8.setWeight(75);
        returnBegBtn1->setFont(font8);
        returnBegBtn1->setStyleSheet(QString::fromUtf8("border-radius:20px;\n"
"background-color: rgb(85, 170, 255);\n"
"color: rgb(255, 255, 255);\n"
""));
        label_2 = new QLabel(page_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(210, 150, 51, 31));
        label_2->setFont(font3);
        label_3 = new QLabel(page_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(210, 210, 51, 31));
        label_3->setFont(font3);
        label_4 = new QLabel(page_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(210, 270, 71, 31));
        label_4->setFont(font3);
        lineEdit_4 = new QLineEdit(page_2);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(290, 260, 241, 41));
        lineEdit_4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255, 60%);"));
        label = new QLabel(page_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(210, 90, 81, 31));
        label->setFont(font3);
        lineEdit_2 = new QLineEdit(page_2);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(290, 140, 241, 41));
        lineEdit_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255, 60%);"));
        lineEdit_2->setEchoMode(QLineEdit::Password);
        confirmRegBtn = new QPushButton(page_2);
        confirmRegBtn->setObjectName(QString::fromUtf8("confirmRegBtn"));
        confirmRegBtn->setGeometry(QRect(270, 340, 81, 41));
        confirmRegBtn->setFont(font8);
        confirmRegBtn->setStyleSheet(QString::fromUtf8("border-radius:20px;\n"
"background-color: rgb(85, 170, 255);\n"
"color: rgb(255, 255, 255);\n"
""));
        graphicsView_8 = new QGraphicsView(page_2);
        graphicsView_8->setObjectName(QString::fromUtf8("graphicsView_8"));
        graphicsView_8->setGeometry(QRect(160, 50, 421, 351));
        graphicsView_8->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255, 60%);\n"
"border-radius:30px;"));
        stackedWidget_2->addWidget(page_2);
        graphicsView_8->raise();
        lineEdit->raise();
        lineEdit_3->raise();
        returnBegBtn1->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        lineEdit_4->raise();
        label->raise();
        lineEdit_2->raise();
        confirmRegBtn->raise();
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
        stackedWidget_2->raise();
        adminMenu = new QWidget();
        adminMenu->setObjectName(QString::fromUtf8("adminMenu"));
        toDateBtn = new QPushButton(adminMenu);
        toDateBtn->setObjectName(QString::fromUtf8("toDateBtn"));
        toDateBtn->setGeometry(QRect(310, 450, 200, 60));
        toDateBtn->setFont(font8);
        toDateBtn->setStyleSheet(QString::fromUtf8("border-radius:30px;\n"
"background-color: rgb(85, 170, 255);\n"
"color: rgb(255, 255, 255);\n"
""));
        goTestBtn = new QPushButton(adminMenu);
        goTestBtn->setObjectName(QString::fromUtf8("goTestBtn"));
        goTestBtn->setGeometry(QRect(310, 350, 200, 60));
        goTestBtn->setFont(font8);
        goTestBtn->setStyleSheet(QString::fromUtf8("border-radius:30px;\n"
"background-color: rgb(85, 170, 255);\n"
"color: rgb(255, 255, 255);\n"
""));
        toHelpBtn = new QPushButton(adminMenu);
        toHelpBtn->setObjectName(QString::fromUtf8("toHelpBtn"));
        toHelpBtn->setGeometry(QRect(310, 550, 200, 60));
        toHelpBtn->setFont(font8);
        toHelpBtn->setStyleSheet(QString::fromUtf8("border-radius:30px;\n"
"background-color: rgb(85, 170, 255);\n"
"color: rgb(255, 255, 255);\n"
""));
        begin_background_2 = new QLabel(adminMenu);
        begin_background_2->setObjectName(QString::fromUtf8("begin_background_2"));
        begin_background_2->setGeometry(QRect(741, 0, 1181, 841));
        begin_left_2 = new QLabel(adminMenu);
        begin_left_2->setObjectName(QString::fromUtf8("begin_left_2"));
        begin_left_2->setGeometry(QRect(-10, -10, 751, 871));
        begin_left_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-top-color: rgb(0, 0, 0);"));
        label_6 = new QLabel(adminMenu);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(170, 90, 481, 71));
        label_6->setFont(font1);
        label_6->setStyleSheet(QString::fromUtf8("background-color:transparent;"));
        label_23 = new QLabel(adminMenu);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(170, 170, 481, 31));
        label_23->setFont(font2);
        label_23->setStyleSheet(QString::fromUtf8("background-color:transparent;"));
        goTestBtn_2 = new QPushButton(adminMenu);
        goTestBtn_2->setObjectName(QString::fromUtf8("goTestBtn_2"));
        goTestBtn_2->setGeometry(QRect(310, 250, 200, 60));
        goTestBtn_2->setFont(font8);
        goTestBtn_2->setStyleSheet(QString::fromUtf8("border-radius:30px;\n"
"background-color: rgb(170, 0, 127);\n"
"color: rgb(255, 255, 255);"));
        line = new QFrame(adminMenu);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(-10, 750, 491, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label_24 = new QLabel(adminMenu);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(220, 760, 271, 21));
        QFont font9;
        font9.setFamily(QString::fromUtf8("Microsoft YaHei"));
        font9.setPointSize(8);
        font9.setBold(true);
        font9.setWeight(75);
        label_24->setFont(font9);
        label_24->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"color: grey;"));
        run_2 = new QLabel(adminMenu);
        run_2->setObjectName(QString::fromUtf8("run_2"));
        run_2->setGeometry(QRect(90, 640, 241, 111));
        run_2->setStyleSheet(QString::fromUtf8("background-color:transparent;"));
        begin_right = new QLabel(adminMenu);
        begin_right->setObjectName(QString::fromUtf8("begin_right"));
        begin_right->setGeometry(QRect(770, -10, 1111, 871));
        begin_right->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255, 30%);"));
        label_25 = new QLabel(adminMenu);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setGeometry(QRect(1060, 60, 81, 31));
        label_25->setFont(font3);
        label_25->setStyleSheet(QString::fromUtf8("background-color:transparent;"));
        label_26 = new QLabel(adminMenu);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setGeometry(QRect(1150, 110, 51, 31));
        label_26->setFont(font3);
        label_26->setStyleSheet(QString::fromUtf8("background-color:transparent;"));
        textEdit = new QTextEdit(adminMenu);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(1260, 100, 351, 41));
        textEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255, 30%);"));
        label_27 = new QLabel(adminMenu);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setGeometry(QRect(1150, 180, 51, 31));
        label_27->setFont(font3);
        label_27->setStyleSheet(QString::fromUtf8("background-color:transparent;"));
        textEdit_2 = new QTextEdit(adminMenu);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));
        textEdit_2->setGeometry(QRect(1260, 170, 351, 41));
        textEdit_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255, 30%);"));
        label_28 = new QLabel(adminMenu);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setGeometry(QRect(1150, 250, 81, 31));
        label_28->setFont(font3);
        label_28->setStyleSheet(QString::fromUtf8("background-color:transparent;"));
        textEdit_3 = new QTextEdit(adminMenu);
        textEdit_3->setObjectName(QString::fromUtf8("textEdit_3"));
        textEdit_3->setGeometry(QRect(1260, 240, 351, 41));
        textEdit_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255, 30%);"));
        label_29 = new QLabel(adminMenu);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setGeometry(QRect(1150, 320, 51, 31));
        label_29->setFont(font3);
        label_29->setStyleSheet(QString::fromUtf8("background-color:transparent;"));
        textEdit_4 = new QTextEdit(adminMenu);
        textEdit_4->setObjectName(QString::fromUtf8("textEdit_4"));
        textEdit_4->setGeometry(QRect(1260, 310, 351, 41));
        textEdit_4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255, 30%);"));
        label_30 = new QLabel(adminMenu);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setGeometry(QRect(1150, 390, 81, 31));
        label_30->setFont(font3);
        label_30->setStyleSheet(QString::fromUtf8("background-color:transparent;"));
        textEdit_5 = new QTextEdit(adminMenu);
        textEdit_5->setObjectName(QString::fromUtf8("textEdit_5"));
        textEdit_5->setGeometry(QRect(1260, 380, 351, 41));
        textEdit_5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255, 30%);"));
        label_31 = new QLabel(adminMenu);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        label_31->setGeometry(QRect(1150, 460, 91, 31));
        label_31->setFont(font3);
        label_31->setStyleSheet(QString::fromUtf8("background-color:transparent;"));
        textEdit_6 = new QTextEdit(adminMenu);
        textEdit_6->setObjectName(QString::fromUtf8("textEdit_6"));
        textEdit_6->setGeometry(QRect(1260, 450, 351, 41));
        textEdit_6->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255, 30%);"));
        label_32 = new QLabel(adminMenu);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        label_32->setGeometry(QRect(1060, 540, 81, 31));
        label_32->setFont(font3);
        label_32->setStyleSheet(QString::fromUtf8("background-color:transparent;"));
        label_33 = new QLabel(adminMenu);
        label_33->setObjectName(QString::fromUtf8("label_33"));
        label_33->setGeometry(QRect(1150, 610, 71, 31));
        label_33->setFont(font3);
        label_33->setStyleSheet(QString::fromUtf8("background-color:transparent;"));
        textEdit_7 = new QTextEdit(adminMenu);
        textEdit_7->setObjectName(QString::fromUtf8("textEdit_7"));
        textEdit_7->setGeometry(QRect(1260, 600, 351, 41));
        textEdit_7->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255, 30%);"));
        label_34 = new QLabel(adminMenu);
        label_34->setObjectName(QString::fromUtf8("label_34"));
        label_34->setGeometry(QRect(1150, 670, 71, 31));
        label_34->setFont(font3);
        label_34->setStyleSheet(QString::fromUtf8("background-color:transparent;"));
        textEdit_8 = new QTextEdit(adminMenu);
        textEdit_8->setObjectName(QString::fromUtf8("textEdit_8"));
        textEdit_8->setGeometry(QRect(1260, 660, 351, 41));
        textEdit_8->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255, 30%);"));
        label_35 = new QLabel(adminMenu);
        label_35->setObjectName(QString::fromUtf8("label_35"));
        label_35->setGeometry(QRect(1150, 730, 81, 31));
        label_35->setFont(font3);
        label_35->setStyleSheet(QString::fromUtf8("background-color:transparent;"));
        textEdit_9 = new QTextEdit(adminMenu);
        textEdit_9->setObjectName(QString::fromUtf8("textEdit_9"));
        textEdit_9->setGeometry(QRect(1260, 720, 351, 41));
        textEdit_9->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255, 30%);"));
        stackedWidget->addWidget(adminMenu);
        begin_background_2->raise();
        begin_left_2->raise();
        toDateBtn->raise();
        goTestBtn->raise();
        toHelpBtn->raise();
        label_6->raise();
        label_23->raise();
        goTestBtn_2->raise();
        line->raise();
        label_24->raise();
        run_2->raise();
        begin_right->raise();
        label_25->raise();
        label_26->raise();
        textEdit->raise();
        label_27->raise();
        textEdit_2->raise();
        label_28->raise();
        textEdit_3->raise();
        label_29->raise();
        textEdit_4->raise();
        label_30->raise();
        textEdit_5->raise();
        label_31->raise();
        textEdit_6->raise();
        label_32->raise();
        label_33->raise();
        textEdit_7->raise();
        label_34->raise();
        textEdit_8->raise();
        label_35->raise();
        textEdit_9->raise();
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
        label_8->setFont(font3);
        lineEdit_7 = new QLineEdit(centralwidget);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));
        lineEdit_7->setGeometry(QRect(1350, 30, 113, 31));
        lineEdit_7->setFont(font6);
        lineEdit_7->setStyleSheet(QString::fromUtf8(""));
        exitUserBtn = new QPushButton(centralwidget);
        exitUserBtn->setObjectName(QString::fromUtf8("exitUserBtn"));
        exitUserBtn->setGeometry(QRect(1630, 32, 93, 28));
        exitUserBtn->setFont(font3);
        exitUserBtn->setStyleSheet(QString::fromUtf8("color:black; \n"
"background-color:transparent;"));
        exitUserBtn->setFlat(true);
        logo = new QLabel(centralwidget);
        logo->setObjectName(QString::fromUtf8("logo"));
        logo->setGeometry(QRect(90, 0, 311, 80));
        label_17 = new QLabel(centralwidget);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(1480, 30, 81, 31));
        label_17->setFont(font3);
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
        stackedWidget_2->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
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
        toRegisterBtn_2->setText(QCoreApplication::translate("MainWindow", "\346\237\245\347\234\213\345\215\217\350\256\256", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "\347\231\273\345\275\225\350\264\246\345\217\267:", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "\347\231\273\345\275\225\345\257\206\347\240\201:", nullptr));
        forgetBtn->setText(QCoreApplication::translate("MainWindow", "\345\277\230\350\256\260\345\257\206\347\240\201", nullptr));
        confirmLoginBtn->setText(QCoreApplication::translate("MainWindow", "\347\231\273  \345\275\225", nullptr));
        lineEdit_6->setText(QString());
        toRegisterBtn->setText(QCoreApplication::translate("MainWindow", "\345\205\215\350\264\271\346\263\250\345\206\214", nullptr));
        agreebutton->setText(QCoreApplication::translate("MainWindow", "\345\220\214\346\204\217\345\215\217\350\256\256", nullptr));
        returnBegBtn1->setText(QCoreApplication::translate("MainWindow", "\350\277\224\345\233\236", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\345\257\206\347\240\201", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\345\215\225\344\275\215", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\351\202\256\347\256\261", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\347\224\250\346\210\267\345\220\215", nullptr));
        confirmRegBtn->setText(QCoreApplication::translate("MainWindow", "\347\241\256\350\256\244", nullptr));
        toDateBtn->setText(QCoreApplication::translate("MainWindow", "\346\225\260\346\215\256\345\257\274\345\207\272", nullptr));
        goTestBtn->setText(QCoreApplication::translate("MainWindow", "\350\277\233\345\205\245\346\265\213\350\257\225", nullptr));
        toHelpBtn->setText(QCoreApplication::translate("MainWindow", "\344\275\277\347\224\250\345\270\256\345\212\251", nullptr));
        begin_background_2->setText(QString());
        begin_left_2->setText(QString());
        label_6->setText(QCoreApplication::translate("MainWindow", "\350\277\220\345\212\250\345\221\230\350\256\244\347\237\245\345\212\237\350\203\275\346\265\213\350\257\225\345\271\263\345\217\260", nullptr));
        label_23->setText(QCoreApplication::translate("MainWindow", "Athlete cognitive function test platform", nullptr));
        goTestBtn_2->setText(QCoreApplication::translate("MainWindow", "\347\224\250\346\210\267\344\270\255\345\277\203", nullptr));
        label_24->setText(QCoreApplication::translate("MainWindow", "Athlete cognitive function test platform", nullptr));
        run_2->setText(QString());
        begin_right->setText(QString());
        label_25->setText(QCoreApplication::translate("MainWindow", "\347\224\250\346\210\267\344\277\241\346\201\257", nullptr));
        label_26->setText(QCoreApplication::translate("MainWindow", "\345\247\223\345\220\215\357\274\232", nullptr));
        label_27->setText(QCoreApplication::translate("MainWindow", "\347\273\204\345\210\253\357\274\232", nullptr));
        label_28->setText(QCoreApplication::translate("MainWindow", "\345\207\272\347\224\237\345\271\264\346\234\210\357\274\232", nullptr));
        label_29->setText(QCoreApplication::translate("MainWindow", "\346\200\247\345\210\253\357\274\232", nullptr));
        label_30->setText(QCoreApplication::translate("MainWindow", "\350\277\220\345\212\250\351\241\271\347\233\256\357\274\232", nullptr));
        label_31->setText(QCoreApplication::translate("MainWindow", "\350\277\220\345\212\250\347\255\211\347\272\247\357\274\232", nullptr));
        label_32->setText(QCoreApplication::translate("MainWindow", "\347\224\250\346\210\267\350\256\276\347\275\256", nullptr));
        label_33->setText(QCoreApplication::translate("MainWindow", "\346\227\247\345\257\206\347\240\201\357\274\232", nullptr));
        label_34->setText(QCoreApplication::translate("MainWindow", "\346\226\260\345\257\206\347\240\201\357\274\232", nullptr));
        label_35->setText(QCoreApplication::translate("MainWindow", "\345\257\206\347\240\201\347\241\256\350\256\244\357\274\232", nullptr));
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
