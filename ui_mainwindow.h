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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label_5;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QWidget *page_2;
    QGraphicsView *graphicsView_5;
    QLabel *label_6;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QLabel *label_7;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QWidget *page_3;
    QGraphicsView *graphicsView_4;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QWidget *page_4;
    QGraphicsView *graphicsView_6;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QWidget *page_5;
    QLabel *label_9;
    QPushButton *pushButton_14;
    QWidget *page_6;
    QLabel *label_10;
    QPushButton *pushButton_13;
    QWidget *page_7;
    QLabel *label_11;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QFrame *line;
    QLabel *label_8;
    QLineEdit *lineEdit_7;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1920, 942);
        QFont font;
        font.setFamily(QString::fromUtf8("DejaVu Sans Mono"));
        font.setPointSize(30);
        MainWindow->setFont(font);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(700, 0, 520, 71));
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
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        pushButton_4 = new QPushButton(page);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(870, 270, 161, 71));
        QFont font2;
        font2.setPointSize(13);
        font2.setBold(true);
        font2.setWeight(75);
        pushButton_4->setFont(font2);
        pushButton_4->setStyleSheet(QString::fromUtf8("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-color: rgb(0, 85, 255);\n"
""));
        pushButton_5 = new QPushButton(page);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(870, 430, 161, 71));
        pushButton_5->setFont(font2);
        pushButton_5->setStyleSheet(QString::fromUtf8("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-color: rgb(0, 85, 255);\n"
""));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        graphicsView_5 = new QGraphicsView(page_2);
        graphicsView_5->setObjectName(QString::fromUtf8("graphicsView_5"));
        graphicsView_5->setGeometry(QRect(470, 100, 1000, 600));
        graphicsView_5->setStyleSheet(QString::fromUtf8("background-color: rgb(218, 227, 243);\n"
"border-radius:50px;"));
        label_6 = new QLabel(page_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(700, 240, 81, 31));
        QFont font3;
        font3.setPointSize(15);
        font3.setBold(true);
        font3.setWeight(75);
        label_6->setFont(font3);
        lineEdit_5 = new QLineEdit(page_2);
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
        lineEdit_6 = new QLineEdit(page_2);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(900, 360, 241, 41));
        lineEdit_6->setStyleSheet(QString::fromUtf8("font: 14pt \"Microsoft Sans Serif\";"));
        lineEdit_6->setEchoMode(QLineEdit::Password);
        label_7 = new QLabel(page_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(700, 360, 81, 31));
        label_7->setFont(font3);
        pushButton_6 = new QPushButton(page_2);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(790, 560, 111, 51));
        pushButton_6->setFont(font2);
        pushButton_6->setStyleSheet(QString::fromUtf8("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-color: rgb(0, 85, 255);\n"
""));
        pushButton_7 = new QPushButton(page_2);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(1070, 560, 111, 51));
        pushButton_7->setFont(font2);
        pushButton_7->setStyleSheet(QString::fromUtf8("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-color: rgb(0, 85, 255);\n"
""));
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        graphicsView_4 = new QGraphicsView(page_3);
        graphicsView_4->setObjectName(QString::fromUtf8("graphicsView_4"));
        graphicsView_4->setGeometry(QRect(470, 100, 1000, 600));
        graphicsView_4->setStyleSheet(QString::fromUtf8("background-color: rgb(218, 227, 243);\n"
"border-radius:50px;"));
        label = new QLabel(page_3);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(770, 240, 81, 31));
        label->setFont(font3);
        label_2 = new QLabel(page_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(770, 320, 91, 31));
        label_2->setFont(font3);
        label_3 = new QLabel(page_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(770, 400, 81, 31));
        label_3->setFont(font3);
        label_4 = new QLabel(page_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(770, 480, 71, 31));
        label_4->setFont(font3);
        lineEdit = new QLineEdit(page_3);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(890, 240, 241, 41));
        lineEdit->setStyleSheet(QString::fromUtf8("font: 14pt \"Microsoft Sans Serif\";"));
        lineEdit_2 = new QLineEdit(page_3);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(890, 320, 241, 41));
        lineEdit_2->setStyleSheet(QString::fromUtf8("font: 14pt \"Microsoft Sans Serif\";"));
        lineEdit_2->setEchoMode(QLineEdit::Password);
        lineEdit_3 = new QLineEdit(page_3);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(890, 400, 241, 41));
        lineEdit_3->setStyleSheet(QString::fromUtf8("font: 14pt \"Microsoft Sans Serif\";"));
        lineEdit_4 = new QLineEdit(page_3);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(890, 470, 241, 41));
        lineEdit_4->setStyleSheet(QString::fromUtf8("font: 14pt \"Microsoft Sans Serif\";"));
        pushButton_8 = new QPushButton(page_3);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(780, 590, 111, 51));
        pushButton_8->setFont(font2);
        pushButton_8->setStyleSheet(QString::fromUtf8("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-color: rgb(0, 85, 255);\n"
""));
        pushButton_9 = new QPushButton(page_3);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(1050, 590, 111, 51));
        pushButton_9->setFont(font2);
        pushButton_9->setStyleSheet(QString::fromUtf8("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-color: rgb(0, 85, 255);\n"
""));
        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        graphicsView_6 = new QGraphicsView(page_4);
        graphicsView_6->setObjectName(QString::fromUtf8("graphicsView_6"));
        graphicsView_6->setGeometry(QRect(500, 100, 1000, 600));
        graphicsView_6->setStyleSheet(QString::fromUtf8("background-color: rgb(218, 227, 243);\n"
"border-radius:50px;"));
        pushButton_10 = new QPushButton(page_4);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setGeometry(QRect(880, 220, 251, 71));
        pushButton_10->setFont(font2);
        pushButton_10->setStyleSheet(QString::fromUtf8("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-color: rgb(0, 85, 255);\n"
""));
        pushButton_11 = new QPushButton(page_4);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        pushButton_11->setGeometry(QRect(880, 360, 251, 71));
        pushButton_11->setFont(font2);
        pushButton_11->setStyleSheet(QString::fromUtf8("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-color: rgb(0, 85, 255);\n"
""));
        pushButton_12 = new QPushButton(page_4);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));
        pushButton_12->setGeometry(QRect(880, 510, 251, 71));
        pushButton_12->setFont(font2);
        pushButton_12->setStyleSheet(QString::fromUtf8("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-color: rgb(0, 85, 255);\n"
""));
        stackedWidget->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName(QString::fromUtf8("page_5"));
        label_9 = new QLabel(page_5);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(870, 180, 111, 61));
        label_9->setStyleSheet(QString::fromUtf8("font: 9pt \"Agency FB\";"));
        pushButton_14 = new QPushButton(page_5);
        pushButton_14->setObjectName(QString::fromUtf8("pushButton_14"));
        pushButton_14->setGeometry(QRect(880, 230, 93, 28));
        pushButton_14->setStyleSheet(QString::fromUtf8("font: 9pt \"Agency FB\";"));
        stackedWidget->addWidget(page_5);
        page_6 = new QWidget();
        page_6->setObjectName(QString::fromUtf8("page_6"));
        label_10 = new QLabel(page_6);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(900, 180, 131, 61));
        label_10->setStyleSheet(QString::fromUtf8("font: 9pt \"Agency FB\";"));
        pushButton_13 = new QPushButton(page_6);
        pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));
        pushButton_13->setGeometry(QRect(910, 260, 93, 28));
        pushButton_13->setStyleSheet(QString::fromUtf8("font: 9pt \"Agency FB\";"));
        stackedWidget->addWidget(page_6);
        page_7 = new QWidget();
        page_7->setObjectName(QString::fromUtf8("page_7"));
        label_11 = new QLabel(page_7);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(910, 310, 111, 61));
        label_11->setStyleSheet(QString::fromUtf8("font: 9pt \"Agency FB\";"));
        pushButton_2 = new QPushButton(page_7);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(920, 400, 93, 28));
        pushButton_2->setStyleSheet(QString::fromUtf8("font: 9pt \"Agency FB\";"));
        pushButton_3 = new QPushButton(page_7);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(920, 470, 93, 28));
        pushButton_3->setStyleSheet(QString::fromUtf8("font: 9pt \"Agency FB\";"));
        stackedWidget->addWidget(page_7);
        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(0, 70, 1921, 16));
        line->setStyleSheet(QString::fromUtf8(""));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(1431, 24, 121, 31));
        label_8->setFont(font3);
        lineEdit_7 = new QLineEdit(centralwidget);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));
        lineEdit_7->setGeometry(QRect(1570, 20, 113, 41));
        lineEdit_7->setStyleSheet(QString::fromUtf8("font: 14pt \"Microsoft Sans Serif\";"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(1700, 25, 93, 28));
        pushButton->setStyleSheet(QString::fromUtf8("font: 9pt \"Agency FB\";"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1920, 26));
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
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "\347\231\273\345\275\225", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "\346\263\250\345\206\214", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\347\224\250\346\210\267\345\220\215", nullptr));
        lineEdit_6->setText(QString());
        label_7->setText(QCoreApplication::translate("MainWindow", "\345\257\206\347\240\201", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "\347\241\256\350\256\244", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "\350\277\224\345\233\236", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\347\224\250\346\210\267\345\220\215", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\345\257\206\347\240\201", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\345\215\225\344\275\215", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\351\202\256\347\256\261", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "\347\241\256\350\256\244", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "\350\277\224\345\233\236", nullptr));
        pushButton_10->setText(QCoreApplication::translate("MainWindow", "\347\256\241\347\220\206\350\200\205\351\241\265\351\235\242", nullptr));
        pushButton_11->setText(QCoreApplication::translate("MainWindow", "\346\225\260\346\215\256\347\256\241\347\220\206\351\241\265\351\235\242", nullptr));
        pushButton_12->setText(QCoreApplication::translate("MainWindow", "\346\265\213\350\257\225\350\200\205\351\241\265\351\235\242", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "\350\277\231\346\230\257\347\256\241\347\220\206\350\200\205\351\241\265\351\235\242", nullptr));
        pushButton_14->setText(QCoreApplication::translate("MainWindow", "\350\277\224\345\233\236", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "\350\277\231\346\230\257\346\225\260\346\215\256\347\256\241\347\220\206\351\241\265\351\235\242", nullptr));
        pushButton_13->setText(QCoreApplication::translate("MainWindow", "\350\277\224\345\233\236", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "\350\277\231\346\230\257\346\265\213\350\257\225\350\200\205\351\241\265\351\235\242", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "\346\211\247\350\241\214\346\265\213\350\257\225", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "\350\277\224\345\233\236", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "\345\275\223\345\211\215\347\224\250\346\210\267:", nullptr));
        lineEdit_7->setText(QCoreApplication::translate("MainWindow", "\346\234\252\347\231\273\345\275\225", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272\347\231\273\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
