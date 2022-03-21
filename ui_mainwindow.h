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
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label_5;
    QStackedWidget *stackedWidget;
    QWidget *begin;
    QPushButton *toLoginBtn;
    QPushButton *toRegisterBtn;
    QWidget *loginPage;
    QGraphicsView *graphicsView_5;
    QLabel *label_6;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QLabel *label_7;
    QPushButton *confirmLoginBtn;
    QPushButton *returnBeginBtn;
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
    QFrame *line;
    QLabel *label_8;
    QLineEdit *lineEdit_7;
    QPushButton *exitUserBtn;
    QPushButton *toThankBtn;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1929, 944);
        QFont font;
        font.setFamily(QString::fromUtf8("DejaVu Sans Mono"));
        font.setPointSize(30);
        MainWindow->setFont(font);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(700, -10, 520, 71));
        QFont font1;
        font1.setFamily(QString::fromUtf8("DejaVu Sans Mono"));
        font1.setBold(true);
        font1.setWeight(75);
        label_5->setFont(font1);
        label_5->setStyleSheet(QString::fromUtf8("font-size:60px;\n"
"color:black;"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 89, 1920, 891));
        begin = new QWidget();
        begin->setObjectName(QString::fromUtf8("begin"));
        toLoginBtn = new QPushButton(begin);
        toLoginBtn->setObjectName(QString::fromUtf8("toLoginBtn"));
        toLoginBtn->setGeometry(QRect(870, 270, 161, 71));
        QFont font2;
        font2.setPointSize(13);
        font2.setBold(true);
        font2.setWeight(75);
        toLoginBtn->setFont(font2);
        toLoginBtn->setStyleSheet(QString::fromUtf8("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-color: rgb(0, 85, 255);\n"
""));
        toRegisterBtn = new QPushButton(begin);
        toRegisterBtn->setObjectName(QString::fromUtf8("toRegisterBtn"));
        toRegisterBtn->setGeometry(QRect(870, 430, 161, 71));
        toRegisterBtn->setFont(font2);
        toRegisterBtn->setStyleSheet(QString::fromUtf8("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-color: rgb(0, 85, 255);\n"
""));
        stackedWidget->addWidget(begin);
        loginPage = new QWidget();
        loginPage->setObjectName(QString::fromUtf8("loginPage"));
        graphicsView_5 = new QGraphicsView(loginPage);
        graphicsView_5->setObjectName(QString::fromUtf8("graphicsView_5"));
        graphicsView_5->setGeometry(QRect(470, 100, 1000, 600));
        graphicsView_5->setStyleSheet(QString::fromUtf8("background-color: rgb(218, 227, 243);\n"
"border-radius:50px;"));
        label_6 = new QLabel(loginPage);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(700, 240, 81, 31));
        QFont font3;
        font3.setPointSize(15);
        font3.setBold(true);
        font3.setWeight(75);
        label_6->setFont(font3);
        lineEdit_5 = new QLineEdit(loginPage);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(900, 240, 241, 41));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Microsoft Sans Serif"));
        font4.setPointSize(14);
        font4.setBold(false);
        font4.setItalic(false);
        font4.setWeight(50);
        lineEdit_5->setFont(font4);
        lineEdit_5->setStyleSheet(QString::fromUtf8("font: 14pt \"Microsoft Sans Serif\";"));
        lineEdit_6 = new QLineEdit(loginPage);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(900, 360, 241, 41));
        lineEdit_6->setStyleSheet(QString::fromUtf8("font: 14pt \"Microsoft Sans Serif\";"));
        lineEdit_6->setEchoMode(QLineEdit::Password);
        label_7 = new QLabel(loginPage);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(700, 360, 81, 31));
        label_7->setFont(font3);
        confirmLoginBtn = new QPushButton(loginPage);
        confirmLoginBtn->setObjectName(QString::fromUtf8("confirmLoginBtn"));
        confirmLoginBtn->setGeometry(QRect(790, 560, 111, 51));
        confirmLoginBtn->setFont(font2);
        confirmLoginBtn->setStyleSheet(QString::fromUtf8("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-color: rgb(0, 85, 255);\n"
""));
        returnBeginBtn = new QPushButton(loginPage);
        returnBeginBtn->setObjectName(QString::fromUtf8("returnBeginBtn"));
        returnBeginBtn->setGeometry(QRect(1070, 560, 111, 51));
        returnBeginBtn->setFont(font2);
        returnBeginBtn->setStyleSheet(QString::fromUtf8("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-color: rgb(0, 85, 255);\n"
""));
        stackedWidget->addWidget(loginPage);
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
        label->setFont(font3);
        label_2 = new QLabel(registerPage);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(770, 320, 91, 31));
        label_2->setFont(font3);
        label_3 = new QLabel(registerPage);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(770, 400, 81, 31));
        label_3->setFont(font3);
        label_4 = new QLabel(registerPage);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(770, 480, 71, 31));
        label_4->setFont(font3);
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
        confirmRegBtn->setFont(font2);
        confirmRegBtn->setStyleSheet(QString::fromUtf8("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-color: rgb(0, 85, 255);\n"
""));
        returnBegBtn1 = new QPushButton(registerPage);
        returnBegBtn1->setObjectName(QString::fromUtf8("returnBegBtn1"));
        returnBegBtn1->setGeometry(QRect(1050, 590, 111, 51));
        returnBegBtn1->setFont(font2);
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
        toInfoBtn->setFont(font2);
        toInfoBtn->setStyleSheet(QString::fromUtf8("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-color: rgb(0, 85, 255);\n"
""));
        toDateBtn = new QPushButton(adminMenu);
        toDateBtn->setObjectName(QString::fromUtf8("toDateBtn"));
        toDateBtn->setGeometry(QRect(840, 320, 251, 71));
        toDateBtn->setFont(font2);
        toDateBtn->setStyleSheet(QString::fromUtf8("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-color: rgb(0, 85, 255);\n"
""));
        goTestBtn = new QPushButton(adminMenu);
        goTestBtn->setObjectName(QString::fromUtf8("goTestBtn"));
        goTestBtn->setGeometry(QRect(840, 190, 251, 71));
        goTestBtn->setFont(font2);
        goTestBtn->setStyleSheet(QString::fromUtf8("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-color: rgb(0, 85, 255);\n"
""));
        introDuctionText = new QTextBrowser(adminMenu);
        introDuctionText->setObjectName(QString::fromUtf8("introDuctionText"));
        introDuctionText->setGeometry(QRect(490, 0, 911, 61));
        toHelpBtn = new QPushButton(adminMenu);
        toHelpBtn->setObjectName(QString::fromUtf8("toHelpBtn"));
        toHelpBtn->setGeometry(QRect(840, 450, 251, 71));
        toHelpBtn->setFont(font2);
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
        QFont font5;
        font5.setFamily(QString::fromUtf8("Adobe Devanagari"));
        font5.setPointSize(20);
        font5.setBold(false);
        font5.setItalic(false);
        font5.setWeight(9);
        label_10->setFont(font5);
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
        QFont font6;
        font6.setFamily(QString::fromUtf8("Adobe Devanagari"));
        font6.setPointSize(12);
        textArea->setFont(font6);
        stackedWidget->addWidget(gratitudePage);
        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(0, 70, 1921, 16));
        line->setStyleSheet(QString::fromUtf8(""));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(1431, 19, 121, 31));
        label_8->setFont(font3);
        lineEdit_7 = new QLineEdit(centralwidget);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));
        lineEdit_7->setGeometry(QRect(1570, 15, 113, 41));
        lineEdit_7->setStyleSheet(QString::fromUtf8("font: 14pt \"Microsoft Sans Serif\";"));
        exitUserBtn = new QPushButton(centralwidget);
        exitUserBtn->setObjectName(QString::fromUtf8("exitUserBtn"));
        exitUserBtn->setGeometry(QRect(1700, 20, 93, 28));
        exitUserBtn->setStyleSheet(QString::fromUtf8("font: 9pt \"Agency FB\";"));
        toThankBtn = new QPushButton(centralwidget);
        toThankBtn->setObjectName(QString::fromUtf8("toThankBtn"));
        toThankBtn->setGeometry(QRect(20, 40, 91, 31));
        toThankBtn->setFont(font6);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1929, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\344\275\223\350\202\262\345\277\203\347\220\206\346\265\213\350\257\225\347\263\273\347\273\237", nullptr));
        toLoginBtn->setText(QCoreApplication::translate("MainWindow", "\347\231\273\345\275\225", nullptr));
        toRegisterBtn->setText(QCoreApplication::translate("MainWindow", "\346\263\250\345\206\214", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\347\224\250\346\210\267\345\220\215", nullptr));
        lineEdit_6->setText(QString());
        label_7->setText(QCoreApplication::translate("MainWindow", "\345\257\206\347\240\201", nullptr));
        confirmLoginBtn->setText(QCoreApplication::translate("MainWindow", "\347\241\256\350\256\244", nullptr));
        returnBeginBtn->setText(QCoreApplication::translate("MainWindow", "\350\277\224\345\233\236", nullptr));
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
"</style></head><body style=\" font-family:'DejaVu Sans Mono'; font-size:30pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">\345\271\263\345\217\260\344\273\213\347\273\215\357\274\232\350\277\231\346\230\257\344\270\200\344\270\252\343\200\202\343\200\202\343\200\202\343\200\202\343\200\202</span></p></body></html>", nullptr));
        toHelpBtn->setText(QCoreApplication::translate("MainWindow", "\344\275\277\347\224\250\345\270\256\345\212\251\357\274\210manual\357\274\211", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "\344\275\277\347\224\250\345\270\256\345\212\251\344\277\241\346\201\257\347\225\214\351\235\242", nullptr));
        returnMenu_3->setText(QCoreApplication::translate("MainWindow", "\350\277\224\345\233\236", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "\350\275\257\344\273\266\344\273\213\347\273\215\347\225\214\351\235\242", nullptr));
        returnMenu_2->setText(QCoreApplication::translate("MainWindow", "\350\277\224\345\233\236", nullptr));
        returnMenu->setText(QCoreApplication::translate("MainWindow", "\350\277\224\345\233\236", nullptr));
        textArea->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Adobe Devanagari','DejaVu Sans Mono'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\346\234\254\351\241\271\347\233\256\347\224\261....\345\256\214\346\210\220\357\274\214\346\204\237\350\260\242\346\202\250\347\232\204\344\275\277\347\224\250\343\200\202\346\255\244\345\244\226\357\274\214\347\224\261\350\241\267\345\270\214\346\234\233\345\276\227\345\210\260\346\202\250\345\234\250\344\275\277\347\224\250\344\270\255\347\232\204\346\265\213\350\257\225\346\225\260\346\215\256\357\274\214\345\256\236\347\216\260\346\225\260\346\215\256\345\205\261\344\272\253\343\200\202\343\200\202\343\200\202\343"
                        "\200\202</p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/logo1.png\" /></p></body></html>", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "\345\275\223\345\211\215\347\224\250\346\210\267:", nullptr));
        lineEdit_7->setText(QCoreApplication::translate("MainWindow", "\346\234\252\347\231\273\345\275\225", nullptr));
        exitUserBtn->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272\347\231\273\345\275\225", nullptr));
        toThankBtn->setText(QCoreApplication::translate("MainWindow", "\350\207\264\350\260\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
