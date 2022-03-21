/********************************************************************************
** Form generated from reading UI file 'testinterface.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTINTERFACE_H
#define UI_TESTINTERFACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TestInterface
{
public:
    QWidget *centralwidget;
    QFrame *line;
    QLabel *label_5;
    QStackedWidget *stackedWidget;
    QWidget *menuPage;
    QGraphicsView *graphicsView_5;
    QPushButton *chooseExistTaskBtn;
    QPushButton *createNewBtn;
    QPushButton *manageTaskBtn;
    QPushButton *checkResusltBtn;
    QWidget *createNewPage;
    QPushButton *pushButton_5;
    QPushButton *pushButton_9;
    QPushButton *pushButton_12;
    QPushButton *pushButton_7;
    QPushButton *pushButton_4;
    QPushButton *pushButton_8;
    QPushButton *pushButton_10;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton_3;
    QPushButton *pushButton_6;
    QPushButton *pushButton_16;
    QPushButton *pushButton_13;
    QLabel *label_4;
    QPushButton *pushButton_14;
    QPushButton *pushButton_15;
    QPushButton *pushButton_2;
    QPushButton *pushButton_11;
    QLabel *label;
    QPushButton *returnMenuBtn;
    QPushButton *beginTestBtn_2;
    QWidget *selectExistPage;
    QLabel *label_6;
    QListWidget *listWidget;
    QPushButton *beginTestBtn;
    QPushButton *returnMenuBtn_2;
    QWidget *managePage;
    QLabel *label_7;
    QListWidget *listWidget_2;
    QPushButton *pushButton_22;
    QPushButton *pushButton_23;
    QPushButton *returnMenuBtn_3;
    QWidget *logPage;
    QPushButton *toLoginBtn;
    QPushButton *toRegisterBtn;
    QWidget *createTestUserPage;
    QLineEdit *lineEdit_2;
    QPushButton *returnBegBtn1;
    QLabel *label_11;
    QLineEdit *lineEdit_3;
    QPushButton *confirmRegBtn;
    QLineEdit *lineEdit;
    QLabel *label_13;
    QLabel *label_14;
    QGraphicsView *graphicsView_4;
    QLineEdit *lineEdit_4;
    QLabel *label_15;
    QLabel *label_16;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QLabel *label_17;
    QLabel *label_12;
    QWidget *testPage;
    QPushButton *startTestBtn;
    QListWidget *listWidget_3;
    QLabel *label_8;
    QLabel *label_10;
    QListWidget *listWidget_4;
    QWidget *loginPage;
    QPushButton *confirmLogBtn;
    QLabel *label_18;
    QLabel *label_19;
    QLineEdit *lineEdit_10;
    QGraphicsView *graphicsView_6;
    QPushButton *returnBegBtn;
    QLineEdit *lineEdit_11;
    QLabel *label_22;
    QPushButton *returnHome;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *TestInterface)
    {
        if (TestInterface->objectName().isEmpty())
            TestInterface->setObjectName(QString::fromUtf8("TestInterface"));
        TestInterface->resize(1924, 943);
        centralwidget = new QWidget(TestInterface);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(0, 81, 1921, 16));
        line->setStyleSheet(QString::fromUtf8(""));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(700, 11, 520, 71));
        QFont font;
        font.setFamily(QString::fromUtf8("DejaVu Sans Mono"));
        font.setBold(true);
        font.setWeight(75);
        label_5->setFont(font);
        label_5->setStyleSheet(QString::fromUtf8("font-size:60px;\n"
"color:black;"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(-20, 90, 1911, 741));
        menuPage = new QWidget();
        menuPage->setObjectName(QString::fromUtf8("menuPage"));
        graphicsView_5 = new QGraphicsView(menuPage);
        graphicsView_5->setObjectName(QString::fromUtf8("graphicsView_5"));
        graphicsView_5->setGeometry(QRect(420, 60, 1121, 651));
        graphicsView_5->setStyleSheet(QString::fromUtf8("background-color: rgb(218, 227, 243);\n"
"border-radius:50px;"));
        chooseExistTaskBtn = new QPushButton(menuPage);
        chooseExistTaskBtn->setObjectName(QString::fromUtf8("chooseExistTaskBtn"));
        chooseExistTaskBtn->setGeometry(QRect(780, 160, 411, 71));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Adobe Devanagari"));
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        chooseExistTaskBtn->setFont(font1);
        createNewBtn = new QPushButton(menuPage);
        createNewBtn->setObjectName(QString::fromUtf8("createNewBtn"));
        createNewBtn->setGeometry(QRect(780, 290, 411, 71));
        createNewBtn->setFont(font1);
        manageTaskBtn = new QPushButton(menuPage);
        manageTaskBtn->setObjectName(QString::fromUtf8("manageTaskBtn"));
        manageTaskBtn->setGeometry(QRect(780, 420, 411, 71));
        manageTaskBtn->setFont(font1);
        checkResusltBtn = new QPushButton(menuPage);
        checkResusltBtn->setObjectName(QString::fromUtf8("checkResusltBtn"));
        checkResusltBtn->setGeometry(QRect(780, 550, 411, 71));
        checkResusltBtn->setFont(font1);
        stackedWidget->addWidget(menuPage);
        createNewPage = new QWidget();
        createNewPage->setObjectName(QString::fromUtf8("createNewPage"));
        pushButton_5 = new QPushButton(createNewPage);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(1260, 210, 151, 111));
        pushButton_5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);"));
        pushButton_9 = new QPushButton(createNewPage);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(910, 340, 151, 111));
        pushButton_9->setStyleSheet(QString::fromUtf8("background-color: rgb(190, 144, 255);"));
        pushButton_12 = new QPushButton(createNewPage);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));
        pushButton_12->setGeometry(QRect(730, 540, 151, 111));
        pushButton_12->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 255);"));
        pushButton_7 = new QPushButton(createNewPage);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(1260, 340, 151, 111));
        pushButton_7->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 80, 97);"));
        pushButton_4 = new QPushButton(createNewPage);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(1080, 210, 151, 111));
        pushButton_4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);"));
        pushButton_8 = new QPushButton(createNewPage);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(550, 340, 151, 111));
        pushButton_8->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 201, 139);"));
        pushButton_10 = new QPushButton(createNewPage);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setGeometry(QRect(730, 340, 151, 111));
        pushButton_10->setStyleSheet(QString::fromUtf8("background-color: rgb(190, 144, 255);"));
        label_2 = new QLabel(createNewPage);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(530, 160, 121, 31));
        label_2->setFont(font1);
        label_3 = new QLabel(createNewPage);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(530, 500, 291, 41));
        label_3->setFont(font1);
        pushButton_3 = new QPushButton(createNewPage);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(910, 210, 151, 111));
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);"));
        pushButton_6 = new QPushButton(createNewPage);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(1080, 340, 151, 111));
        pushButton_6->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 80, 97);"));
        pushButton_16 = new QPushButton(createNewPage);
        pushButton_16->setObjectName(QString::fromUtf8("pushButton_16"));
        pushButton_16->setGeometry(QRect(1080, 540, 151, 111));
        pushButton_16->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);"));
        pushButton_13 = new QPushButton(createNewPage);
        pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));
        pushButton_13->setGeometry(QRect(550, 540, 151, 111));
        pushButton_13->setStyleSheet(QString::fromUtf8("background-color: rgb(71, 255, 139);"));
        label_4 = new QLabel(createNewPage);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(670, 160, 151, 31));
        pushButton_14 = new QPushButton(createNewPage);
        pushButton_14->setObjectName(QString::fromUtf8("pushButton_14"));
        pushButton_14->setGeometry(QRect(1260, 540, 151, 111));
        pushButton_14->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);"));
        pushButton_15 = new QPushButton(createNewPage);
        pushButton_15->setObjectName(QString::fromUtf8("pushButton_15"));
        pushButton_15->setGeometry(QRect(910, 540, 151, 111));
        pushButton_15->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);"));
        pushButton_2 = new QPushButton(createNewPage);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(730, 210, 151, 111));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 255);"));
        pushButton_11 = new QPushButton(createNewPage);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        pushButton_11->setGeometry(QRect(550, 210, 151, 111));
        pushButton_11->setStyleSheet(QString::fromUtf8("background-color: rgb(71, 255, 139);"));
        label = new QLabel(createNewPage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(470, 30, 341, 61));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Adobe Devanagari"));
        font2.setPointSize(16);
        font2.setBold(true);
        font2.setWeight(75);
        label->setFont(font2);
        returnMenuBtn = new QPushButton(createNewPage);
        returnMenuBtn->setObjectName(QString::fromUtf8("returnMenuBtn"));
        returnMenuBtn->setGeometry(QRect(350, 10, 93, 28));
        beginTestBtn_2 = new QPushButton(createNewPage);
        beginTestBtn_2->setObjectName(QString::fromUtf8("beginTestBtn_2"));
        beginTestBtn_2->setGeometry(QRect(1370, 700, 91, 31));
        stackedWidget->addWidget(createNewPage);
        selectExistPage = new QWidget();
        selectExistPage->setObjectName(QString::fromUtf8("selectExistPage"));
        label_6 = new QLabel(selectExistPage);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(310, 80, 341, 61));
        label_6->setFont(font2);
        listWidget = new QListWidget(selectExistPage);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(550, 210, 821, 451));
        listWidget->setStyleSheet(QString::fromUtf8(" border:3px solid gray;\n"
" padding:20px 0px 0px 0px;\n"
"font-size: 20px;\n"
"item:{\n"
"	color:rgb(200,200,200);\n"
"    height:40px;\n"
"    padding-left:20px;\n"
"    border:1px solid gray;\n"
"}"));
        beginTestBtn = new QPushButton(selectExistPage);
        beginTestBtn->setObjectName(QString::fromUtf8("beginTestBtn"));
        beginTestBtn->setGeometry(QRect(880, 680, 161, 61));
        returnMenuBtn_2 = new QPushButton(selectExistPage);
        returnMenuBtn_2->setObjectName(QString::fromUtf8("returnMenuBtn_2"));
        returnMenuBtn_2->setGeometry(QRect(120, 20, 93, 28));
        stackedWidget->addWidget(selectExistPage);
        managePage = new QWidget();
        managePage->setObjectName(QString::fromUtf8("managePage"));
        label_7 = new QLabel(managePage);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(280, 70, 341, 61));
        label_7->setFont(font2);
        listWidget_2 = new QListWidget(managePage);
        new QListWidgetItem(listWidget_2);
        new QListWidgetItem(listWidget_2);
        new QListWidgetItem(listWidget_2);
        new QListWidgetItem(listWidget_2);
        listWidget_2->setObjectName(QString::fromUtf8("listWidget_2"));
        listWidget_2->setGeometry(QRect(510, 240, 821, 451));
        listWidget_2->setStyleSheet(QString::fromUtf8(" border:3px solid gray;\n"
" padding:20px 0px 0px 0px;\n"
"font-size: 20px;\n"
"item:{\n"
"	color:rgb(200,200,200);\n"
"    height:40px;\n"
"    padding-left:20px;\n"
"    border:1px solid gray;\n"
"}"));
        pushButton_22 = new QPushButton(managePage);
        pushButton_22->setObjectName(QString::fromUtf8("pushButton_22"));
        pushButton_22->setGeometry(QRect(510, 160, 141, 41));
        pushButton_23 = new QPushButton(managePage);
        pushButton_23->setObjectName(QString::fromUtf8("pushButton_23"));
        pushButton_23->setGeometry(QRect(350, 160, 141, 41));
        returnMenuBtn_3 = new QPushButton(managePage);
        returnMenuBtn_3->setObjectName(QString::fromUtf8("returnMenuBtn_3"));
        returnMenuBtn_3->setGeometry(QRect(90, 30, 93, 28));
        stackedWidget->addWidget(managePage);
        logPage = new QWidget();
        logPage->setObjectName(QString::fromUtf8("logPage"));
        toLoginBtn = new QPushButton(logPage);
        toLoginBtn->setObjectName(QString::fromUtf8("toLoginBtn"));
        toLoginBtn->setGeometry(QRect(880, 250, 161, 71));
        QFont font3;
        font3.setPointSize(13);
        font3.setBold(true);
        font3.setWeight(75);
        toLoginBtn->setFont(font3);
        toLoginBtn->setStyleSheet(QString::fromUtf8("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-color: rgb(0, 85, 255);\n"
""));
        toRegisterBtn = new QPushButton(logPage);
        toRegisterBtn->setObjectName(QString::fromUtf8("toRegisterBtn"));
        toRegisterBtn->setGeometry(QRect(880, 410, 161, 71));
        toRegisterBtn->setFont(font3);
        toRegisterBtn->setStyleSheet(QString::fromUtf8("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-color: rgb(0, 85, 255);\n"
""));
        stackedWidget->addWidget(logPage);
        createTestUserPage = new QWidget();
        createTestUserPage->setObjectName(QString::fromUtf8("createTestUserPage"));
        lineEdit_2 = new QLineEdit(createTestUserPage);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(920, 220, 241, 41));
        lineEdit_2->setStyleSheet(QString::fromUtf8("font: 14pt \"Microsoft Sans Serif\";"));
        lineEdit_2->setEchoMode(QLineEdit::Password);
        returnBegBtn1 = new QPushButton(createTestUserPage);
        returnBegBtn1->setObjectName(QString::fromUtf8("returnBegBtn1"));
        returnBegBtn1->setGeometry(QRect(1080, 550, 111, 51));
        returnBegBtn1->setFont(font3);
        returnBegBtn1->setStyleSheet(QString::fromUtf8("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-color: rgb(0, 85, 255);\n"
""));
        label_11 = new QLabel(createTestUserPage);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(800, 170, 81, 31));
        QFont font4;
        font4.setPointSize(15);
        font4.setBold(true);
        font4.setWeight(75);
        label_11->setFont(font4);
        lineEdit_3 = new QLineEdit(createTestUserPage);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(920, 270, 241, 41));
        lineEdit_3->setStyleSheet(QString::fromUtf8("font: 14pt \"Microsoft Sans Serif\";"));
        confirmRegBtn = new QPushButton(createTestUserPage);
        confirmRegBtn->setObjectName(QString::fromUtf8("confirmRegBtn"));
        confirmRegBtn->setGeometry(QRect(820, 550, 111, 51));
        confirmRegBtn->setFont(font3);
        confirmRegBtn->setStyleSheet(QString::fromUtf8("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-color: rgb(0, 85, 255);\n"
""));
        lineEdit = new QLineEdit(createTestUserPage);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(920, 170, 241, 41));
        lineEdit->setStyleSheet(QString::fromUtf8("font: 14pt \"Microsoft Sans Serif\";"));
        label_13 = new QLabel(createTestUserPage);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(800, 220, 91, 31));
        label_13->setFont(font4);
        label_14 = new QLabel(createTestUserPage);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(800, 270, 101, 31));
        label_14->setFont(font4);
        graphicsView_4 = new QGraphicsView(createTestUserPage);
        graphicsView_4->setObjectName(QString::fromUtf8("graphicsView_4"));
        graphicsView_4->setGeometry(QRect(480, 50, 1000, 600));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Adobe Devanagari"));
        font5.setPointSize(20);
        font5.setBold(true);
        font5.setWeight(75);
        graphicsView_4->setFont(font5);
        graphicsView_4->setStyleSheet(QString::fromUtf8("background-color: rgb(218, 227, 243);\n"
"border-radius:50px;"));
        lineEdit_4 = new QLineEdit(createTestUserPage);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(920, 320, 241, 41));
        lineEdit_4->setStyleSheet(QString::fromUtf8("font: 14pt \"Microsoft Sans Serif\";"));
        label_15 = new QLabel(createTestUserPage);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(800, 320, 101, 31));
        label_15->setFont(font4);
        label_16 = new QLabel(createTestUserPage);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(800, 370, 101, 31));
        label_16->setFont(font4);
        lineEdit_5 = new QLineEdit(createTestUserPage);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(920, 370, 241, 41));
        lineEdit_5->setStyleSheet(QString::fromUtf8("font: 14pt \"Microsoft Sans Serif\";"));
        lineEdit_6 = new QLineEdit(createTestUserPage);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(920, 420, 241, 41));
        lineEdit_6->setStyleSheet(QString::fromUtf8("font: 14pt \"Microsoft Sans Serif\";"));
        label_17 = new QLabel(createTestUserPage);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(800, 420, 101, 31));
        label_17->setFont(font4);
        label_12 = new QLabel(createTestUserPage);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(940, 90, 161, 51));
        QFont font6;
        font6.setFamily(QString::fromUtf8("Adobe Devanagari"));
        font6.setPointSize(18);
        font6.setBold(true);
        font6.setWeight(75);
        label_12->setFont(font6);
        stackedWidget->addWidget(createTestUserPage);
        graphicsView_4->raise();
        label_14->raise();
        label_11->raise();
        lineEdit_2->raise();
        returnBegBtn1->raise();
        lineEdit->raise();
        label_13->raise();
        confirmRegBtn->raise();
        lineEdit_3->raise();
        lineEdit_4->raise();
        label_15->raise();
        label_16->raise();
        lineEdit_5->raise();
        lineEdit_6->raise();
        label_17->raise();
        label_12->raise();
        testPage = new QWidget();
        testPage->setObjectName(QString::fromUtf8("testPage"));
        startTestBtn = new QPushButton(testPage);
        startTestBtn->setObjectName(QString::fromUtf8("startTestBtn"));
        startTestBtn->setGeometry(QRect(1240, 300, 161, 71));
        startTestBtn->setFont(font3);
        startTestBtn->setStyleSheet(QString::fromUtf8("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-color: rgb(0, 85, 255);\n"
""));
        listWidget_3 = new QListWidget(testPage);
        new QListWidgetItem(listWidget_3);
        new QListWidgetItem(listWidget_3);
        listWidget_3->setObjectName(QString::fromUtf8("listWidget_3"));
        listWidget_3->setGeometry(QRect(440, 70, 561, 211));
        listWidget_3->setStyleSheet(QString::fromUtf8("color:rgb(200,200,200);\n"
"    border:3px solid gray;\n"
"    padding:20px 0px 0px 0px;\n"
"item\n"
"{undefined\n"
"    height:40px;\n"
"    padding-left:20px;\n"
"    border:2px solid gray;\n"
"};"));
        label_8 = new QLabel(testPage);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(440, 20, 311, 51));
        label_8->setFont(font6);
        label_10 = new QLabel(testPage);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(440, 330, 311, 51));
        label_10->setFont(font6);
        listWidget_4 = new QListWidget(testPage);
        new QListWidgetItem(listWidget_4);
        new QListWidgetItem(listWidget_4);
        listWidget_4->setObjectName(QString::fromUtf8("listWidget_4"));
        listWidget_4->setGeometry(QRect(440, 380, 561, 211));
        listWidget_4->setStyleSheet(QString::fromUtf8("color:rgb(200,200,200);\n"
"    border:3px solid gray;\n"
"    padding:20px 0px 0px 0px;\n"
"item\n"
"{undefined\n"
"    height:40px;\n"
"    padding-left:20px;\n"
"    border:2px solid gray;\n"
"};"));
        stackedWidget->addWidget(testPage);
        loginPage = new QWidget();
        loginPage->setObjectName(QString::fromUtf8("loginPage"));
        confirmLogBtn = new QPushButton(loginPage);
        confirmLogBtn->setObjectName(QString::fromUtf8("confirmLogBtn"));
        confirmLogBtn->setGeometry(QRect(790, 440, 111, 51));
        confirmLogBtn->setFont(font3);
        confirmLogBtn->setStyleSheet(QString::fromUtf8("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-color: rgb(0, 85, 255);\n"
""));
        label_18 = new QLabel(loginPage);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(880, 100, 201, 41));
        label_18->setFont(font6);
        label_19 = new QLabel(loginPage);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(790, 320, 91, 31));
        label_19->setFont(font4);
        lineEdit_10 = new QLineEdit(loginPage);
        lineEdit_10->setObjectName(QString::fromUtf8("lineEdit_10"));
        lineEdit_10->setGeometry(QRect(910, 210, 241, 41));
        lineEdit_10->setStyleSheet(QString::fromUtf8("font: 14pt \"Microsoft Sans Serif\";"));
        graphicsView_6 = new QGraphicsView(loginPage);
        graphicsView_6->setObjectName(QString::fromUtf8("graphicsView_6"));
        graphicsView_6->setGeometry(QRect(540, 70, 891, 551));
        graphicsView_6->setFont(font5);
        graphicsView_6->setStyleSheet(QString::fromUtf8("background-color: rgb(218, 227, 243);\n"
"border-radius:50px;"));
        returnBegBtn = new QPushButton(loginPage);
        returnBegBtn->setObjectName(QString::fromUtf8("returnBegBtn"));
        returnBegBtn->setGeometry(QRect(1040, 440, 111, 51));
        returnBegBtn->setFont(font3);
        returnBegBtn->setStyleSheet(QString::fromUtf8("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-color: rgb(0, 85, 255);\n"
""));
        lineEdit_11 = new QLineEdit(loginPage);
        lineEdit_11->setObjectName(QString::fromUtf8("lineEdit_11"));
        lineEdit_11->setGeometry(QRect(910, 320, 241, 41));
        lineEdit_11->setStyleSheet(QString::fromUtf8("font: 14pt \"Microsoft Sans Serif\";"));
        lineEdit_11->setEchoMode(QLineEdit::Password);
        label_22 = new QLabel(loginPage);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(790, 210, 81, 31));
        label_22->setFont(font4);
        stackedWidget->addWidget(loginPage);
        graphicsView_6->raise();
        lineEdit_10->raise();
        lineEdit_11->raise();
        label_19->raise();
        confirmLogBtn->raise();
        label_22->raise();
        label_18->raise();
        returnBegBtn->raise();
        returnHome = new QPushButton(centralwidget);
        returnHome->setObjectName(QString::fromUtf8("returnHome"));
        returnHome->setGeometry(QRect(1690, 50, 151, 31));
        TestInterface->setCentralWidget(centralwidget);
        menubar = new QMenuBar(TestInterface);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1924, 26));
        TestInterface->setMenuBar(menubar);
        statusbar = new QStatusBar(TestInterface);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        TestInterface->setStatusBar(statusbar);

        retranslateUi(TestInterface);

        QMetaObject::connectSlotsByName(TestInterface);
    } // setupUi

    void retranslateUi(QMainWindow *TestInterface)
    {
        TestInterface->setWindowTitle(QCoreApplication::translate("TestInterface", "MainWindow", nullptr));
        label_5->setText(QCoreApplication::translate("TestInterface", "\344\275\223\350\202\262\345\277\203\347\220\206\346\265\213\350\257\225\347\263\273\347\273\237", nullptr));
        chooseExistTaskBtn->setText(QCoreApplication::translate("TestInterface", "\351\200\211\346\213\251\345\267\262\346\234\211\346\265\213\350\257\225\351\241\271\347\233\256", nullptr));
        createNewBtn->setText(QCoreApplication::translate("TestInterface", "\346\226\260\345\273\272\346\265\213\350\257\225\351\241\271\347\233\256", nullptr));
        manageTaskBtn->setText(QCoreApplication::translate("TestInterface", "\351\241\271\347\233\256\347\256\241\347\220\206", nullptr));
        checkResusltBtn->setText(QCoreApplication::translate("TestInterface", "\346\237\245\347\234\213\347\273\223\346\236\234", nullptr));
        pushButton_5->setText(QCoreApplication::translate("TestInterface", "N-back\346\265\213\350\257\225", nullptr));
        pushButton_9->setText(QCoreApplication::translate("TestInterface", "\344\277\241\345\217\267\345\201\234\346\255\242\344\273\273\345\212\241", nullptr));
        pushButton_12->setText(QCoreApplication::translate("TestInterface", "\345\277\203\347\220\206\346\227\213\350\275\254\344\273\273\345\212\241", nullptr));
        pushButton_7->setText(QCoreApplication::translate("TestInterface", "Stroop\344\273\273\345\212\241", nullptr));
        pushButton_4->setText(QCoreApplication::translate("TestInterface", "\346\263\250\346\204\217\350\275\254\346\215\242\344\273\273\345\212\241", nullptr));
        pushButton_8->setText(QCoreApplication::translate("TestInterface", "Posner\346\265\213\350\257\225", nullptr));
        pushButton_10->setText(QCoreApplication::translate("TestInterface", "GNG\346\265\213\350\257\225", nullptr));
        label_2->setText(QCoreApplication::translate("TestInterface", "> \346\265\213\350\257\225\351\241\271\347\233\256", nullptr));
        label_3->setText(QCoreApplication::translate("TestInterface", "> \346\216\250\350\215\220\346\265\213\350\257\225\347\273\204\342\200\224\342\200\224\350\277\220\345\212\250\351\241\271\347\233\256", nullptr));
        pushButton_3->setText(QCoreApplication::translate("TestInterface", "ANT\346\265\213\350\257\225", nullptr));
        pushButton_6->setText(QCoreApplication::translate("TestInterface", "Flanker\344\273\273\345\212\241", nullptr));
        pushButton_16->setText(QCoreApplication::translate("TestInterface", "\346\263\250\346\204\217\350\275\254\346\215\242\344\273\273\345\212\241", nullptr));
        pushButton_13->setText(QCoreApplication::translate("TestInterface", "\350\277\220\345\212\250\351\241\271\347\233\256", nullptr));
        label_4->setText(QCoreApplication::translate("TestInterface", "\351\200\211\344\270\255\345\220\216\345\274\200\345\220\257\346\265\213\350\257\225", nullptr));
        pushButton_14->setText(QCoreApplication::translate("TestInterface", "N-back\346\265\213\350\257\225", nullptr));
        pushButton_15->setText(QCoreApplication::translate("TestInterface", "ANT\346\265\213\350\257\225", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_2->setToolTip(QCoreApplication::translate("TestInterface", "<html><head/><body><p><span style=\" font-family:'STIX2Text','Times New Roman','serif'; font-size:16px; font-weight:600; color:#333333; background-color:#ffffff;\">\347\261\273\345\210\253\357\274\232</span><span style=\" font-family:'STIX2Text','Times New Roman','serif'; font-size:16px; color:#333333; background-color:#ffffff;\">\346\227\266\351\227\264\347\237\245\350\247\211</span></p><p><span style=\" font-family:'STIX2Text','Times New Roman','serif'; font-size:16px; font-weight:600; color:#333333; background-color:#ffffff;\">\346\265\213\350\257\225\346\227\266\351\225\277\357\274\232</span><span style=\" font-family:'STIX2Text','Times New Roman','serif'; font-size:16px; color:#333333; background-color:#ffffff;\"> 10min</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_2->setText(QCoreApplication::translate("TestInterface", "\345\277\203\347\220\206\346\227\213\350\275\254\344\273\273\345\212\241", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_11->setToolTip(QCoreApplication::translate("TestInterface", "<html><head/><body><p><span style=\" font-family:'STIX2Text','Times New Roman','serif'; font-size:16px; font-weight:600; color:#333333; background-color:#ffffff;\">\347\261\273\345\210\253\357\274\232</span><span style=\" font-family:'STIX2Text','Times New Roman','serif'; font-size:16px; color:#333333; background-color:#ffffff;\">\346\227\266\351\227\264\347\237\245\350\247\211</span></p><p><span style=\" font-family:'STIX2Text','Times New Roman','serif'; font-size:16px; font-weight:600; color:#333333; background-color:#ffffff;\">\346\265\213\350\257\225\346\227\266\351\225\277\357\274\232</span><span style=\" font-family:'STIX2Text','Times New Roman','serif'; font-size:16px; color:#333333; background-color:#ffffff;\"> 10min</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_11->setText(QCoreApplication::translate("TestInterface", "TTC\346\265\213\350\257\225", nullptr));
        label->setText(QCoreApplication::translate("TestInterface", "\346\226\260\345\273\272\346\265\213\350\257\225\351\241\271\347\233\256", nullptr));
        returnMenuBtn->setText(QCoreApplication::translate("TestInterface", "\350\277\224\345\233\236", nullptr));
        beginTestBtn_2->setText(QCoreApplication::translate("TestInterface", "\345\274\200\345\247\213", nullptr));
        label_6->setText(QCoreApplication::translate("TestInterface", "\351\200\211\346\213\251\345\267\262\346\234\211\346\265\213\350\257\225\351\241\271\347\233\256", nullptr));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("TestInterface", "\351\241\271\347\233\2561", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("TestInterface", "\351\241\271\347\233\2562", nullptr));
        QListWidgetItem *___qlistwidgetitem2 = listWidget->item(2);
        ___qlistwidgetitem2->setText(QCoreApplication::translate("TestInterface", "\351\241\271\347\233\2563", nullptr));
        QListWidgetItem *___qlistwidgetitem3 = listWidget->item(3);
        ___qlistwidgetitem3->setText(QCoreApplication::translate("TestInterface", "...", nullptr));
        listWidget->setSortingEnabled(__sortingEnabled);

        beginTestBtn->setText(QCoreApplication::translate("TestInterface", "\345\274\200\345\247\213\346\265\213\350\257\225", nullptr));
        returnMenuBtn_2->setText(QCoreApplication::translate("TestInterface", "\350\277\224\345\233\236", nullptr));
        label_7->setText(QCoreApplication::translate("TestInterface", "\351\200\211\346\213\251\345\267\262\346\234\211\346\265\213\350\257\225\351\241\271\347\233\256", nullptr));

        const bool __sortingEnabled1 = listWidget_2->isSortingEnabled();
        listWidget_2->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem4 = listWidget_2->item(0);
        ___qlistwidgetitem4->setText(QCoreApplication::translate("TestInterface", "\351\241\271\347\233\2561", nullptr));
        QListWidgetItem *___qlistwidgetitem5 = listWidget_2->item(1);
        ___qlistwidgetitem5->setText(QCoreApplication::translate("TestInterface", "\351\241\271\347\233\2562", nullptr));
        QListWidgetItem *___qlistwidgetitem6 = listWidget_2->item(2);
        ___qlistwidgetitem6->setText(QCoreApplication::translate("TestInterface", "\351\241\271\347\233\2563", nullptr));
        QListWidgetItem *___qlistwidgetitem7 = listWidget_2->item(3);
        ___qlistwidgetitem7->setText(QCoreApplication::translate("TestInterface", "...", nullptr));
        listWidget_2->setSortingEnabled(__sortingEnabled1);

        pushButton_22->setText(QCoreApplication::translate("TestInterface", "\345\210\240\351\231\244", nullptr));
        pushButton_23->setText(QCoreApplication::translate("TestInterface", "\346\225\260\346\215\256\345\257\274\345\207\272", nullptr));
        returnMenuBtn_3->setText(QCoreApplication::translate("TestInterface", "\350\277\224\345\233\236", nullptr));
        toLoginBtn->setText(QCoreApplication::translate("TestInterface", "\347\231\273\345\275\225", nullptr));
        toRegisterBtn->setText(QCoreApplication::translate("TestInterface", "\346\263\250\345\206\214", nullptr));
        returnBegBtn1->setText(QCoreApplication::translate("TestInterface", "\350\277\224\345\233\236", nullptr));
        label_11->setText(QCoreApplication::translate("TestInterface", "\345\247\223\345\220\215", nullptr));
        confirmRegBtn->setText(QCoreApplication::translate("TestInterface", "\347\241\256\350\256\244", nullptr));
        label_13->setText(QCoreApplication::translate("TestInterface", "\347\273\204\345\210\253", nullptr));
        label_14->setText(QCoreApplication::translate("TestInterface", "\345\207\272\347\224\237\345\271\264\346\234\210", nullptr));
        lineEdit_4->setText(QString());
        label_15->setText(QCoreApplication::translate("TestInterface", "\346\200\247\345\210\253", nullptr));
        label_16->setText(QCoreApplication::translate("TestInterface", "\350\277\220\345\212\250\351\241\271\347\233\256", nullptr));
        lineEdit_5->setText(QString());
        lineEdit_6->setText(QString());
        label_17->setText(QCoreApplication::translate("TestInterface", "\350\277\220\345\212\250\347\255\211\347\272\247", nullptr));
        label_12->setText(QCoreApplication::translate("TestInterface", ">\345\210\233\345\273\272\346\241\243\346\241\210<", nullptr));
        startTestBtn->setText(QCoreApplication::translate("TestInterface", "\345\274\200\345\247\213\346\265\213\350\257\225", nullptr));

        const bool __sortingEnabled2 = listWidget_3->isSortingEnabled();
        listWidget_3->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem8 = listWidget_3->item(0);
        ___qlistwidgetitem8->setText(QCoreApplication::translate("TestInterface", " \346\265\213\350\257\225\346\227\266\351\227\264         | \346\265\213\350\257\225\351\241\271\347\233\256 | \350\256\244\347\237\245\346\210\220\345\210\206 | \346\237\245\347\234\213\347\273\223\346\236\234 |\n"
"", nullptr));
        QListWidgetItem *___qlistwidgetitem9 = listWidget_3->item(1);
        ___qlistwidgetitem9->setText(QCoreApplication::translate("TestInterface", "2022-01-02 12:30TTC  \347\237\245\350\247\211\346\237\245\347\234\213", nullptr));
        listWidget_3->setSortingEnabled(__sortingEnabled2);

        label_8->setText(QCoreApplication::translate("TestInterface", "> \345\256\214\346\210\220\346\203\205\345\206\265", nullptr));
        label_10->setText(QCoreApplication::translate("TestInterface", "> \350\241\245\345\205\205\344\277\241\346\201\257", nullptr));

        const bool __sortingEnabled3 = listWidget_4->isSortingEnabled();
        listWidget_4->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem10 = listWidget_4->item(0);
        ___qlistwidgetitem10->setText(QCoreApplication::translate("TestInterface", "\345\247\223\345\220\215   |  \347\274\226\345\217\267  |  \344\270\223\351\241\271  |", nullptr));
        QListWidgetItem *___qlistwidgetitem11 = listWidget_4->item(1);
        ___qlistwidgetitem11->setText(QCoreApplication::translate("TestInterface", "\345\274\240\344\270\211   |    01   |   \346\270\270\346\263\263 |", nullptr));
        listWidget_4->setSortingEnabled(__sortingEnabled3);

        confirmLogBtn->setText(QCoreApplication::translate("TestInterface", "\347\241\256\350\256\244", nullptr));
        label_18->setText(QCoreApplication::translate("TestInterface", ">\346\265\213\350\257\225\350\200\205\347\231\273\345\275\225<", nullptr));
        label_19->setText(QCoreApplication::translate("TestInterface", "\347\274\226\345\217\267", nullptr));
        returnBegBtn->setText(QCoreApplication::translate("TestInterface", "\350\277\224\345\233\236", nullptr));
        label_22->setText(QCoreApplication::translate("TestInterface", "\345\247\223\345\220\215", nullptr));
        returnHome->setText(QCoreApplication::translate("TestInterface", "\350\277\224\345\233\236\344\270\273\351\241\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TestInterface: public Ui_TestInterface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTINTERFACE_H
