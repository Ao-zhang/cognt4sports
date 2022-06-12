/********************************************************************************
** Form generated from reading UI file 'datamanage.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATAMANAGE_H
#define UI_DATAMANAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DataManage
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *menuPage_2;
    QPushButton *chooseExistTaskBtn_2;
    QPushButton *createNewBtn_2;
    QPushButton *manageTaskBtn_2;
    QLabel *begin_background_2;
    QPushButton *returnHome;
    QLabel *begin_right;
    QLabel *label_6;
    QFrame *line;
    QLabel *label_24;
    QLabel *run_2;
    QWidget *page;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *DataManage)
    {
        if (DataManage->objectName().isEmpty())
            DataManage->setObjectName(QString::fromUtf8("DataManage"));
        DataManage->resize(1925, 926);
        centralwidget = new QWidget(DataManage);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 1911, 901));
        menuPage_2 = new QWidget();
        menuPage_2->setObjectName(QString::fromUtf8("menuPage_2"));
        chooseExistTaskBtn_2 = new QPushButton(menuPage_2);
        chooseExistTaskBtn_2->setObjectName(QString::fromUtf8("chooseExistTaskBtn_2"));
        chooseExistTaskBtn_2->setGeometry(QRect(920, 300, 261, 71));
        QFont font;
        font.setFamily(QString::fromUtf8("Adobe Devanagari"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        chooseExistTaskBtn_2->setFont(font);
        chooseExistTaskBtn_2->setStyleSheet(QString::fromUtf8("border-radius:30px;\n"
"background-color: rgb(85, 170, 255);\n"
"color: rgb(255, 255, 255);\n"
""));
        createNewBtn_2 = new QPushButton(menuPage_2);
        createNewBtn_2->setObjectName(QString::fromUtf8("createNewBtn_2"));
        createNewBtn_2->setGeometry(QRect(920, 190, 261, 71));
        createNewBtn_2->setFont(font);
        createNewBtn_2->setStyleSheet(QString::fromUtf8("border-radius:30px;\n"
"background-color: rgb(85, 170, 255);\n"
"color: rgb(255, 255, 255);\n"
""));
        manageTaskBtn_2 = new QPushButton(menuPage_2);
        manageTaskBtn_2->setObjectName(QString::fromUtf8("manageTaskBtn_2"));
        manageTaskBtn_2->setGeometry(QRect(920, 420, 261, 71));
        manageTaskBtn_2->setFont(font);
        manageTaskBtn_2->setStyleSheet(QString::fromUtf8("border-radius:30px;\n"
"background-color: rgb(85, 170, 255);\n"
"color: rgb(255, 255, 255);\n"
""));
        begin_background_2 = new QLabel(menuPage_2);
        begin_background_2->setObjectName(QString::fromUtf8("begin_background_2"));
        begin_background_2->setGeometry(QRect(0, 0, 1181, 901));
        returnHome = new QPushButton(menuPage_2);
        returnHome->setObjectName(QString::fromUtf8("returnHome"));
        returnHome->setGeometry(QRect(920, 530, 261, 71));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        returnHome->setFont(font1);
        returnHome->setStyleSheet(QString::fromUtf8("border-radius:30px;\n"
"background-color: rgb(170, 0, 127);\n"
"color: rgb(255, 255, 255);"));
        begin_right = new QLabel(menuPage_2);
        begin_right->setObjectName(QString::fromUtf8("begin_right"));
        begin_right->setGeometry(QRect(0, 50, 1921, 846));
        begin_right->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255, 45%);"));
        label_6 = new QLabel(menuPage_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(200, 70, 41, 611));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Microsoft YaHei"));
        font2.setPointSize(25);
        font2.setBold(true);
        font2.setWeight(75);
        label_6->setFont(font2);
        label_6->setStyleSheet(QString::fromUtf8("background-color:transparent;"));
        label_6->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_6->setWordWrap(true);
        line = new QFrame(menuPage_2);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(30, 820, 651, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label_24 = new QLabel(menuPage_2);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(430, 830, 271, 21));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Microsoft YaHei"));
        font3.setPointSize(8);
        font3.setBold(true);
        font3.setWeight(75);
        label_24->setFont(font3);
        label_24->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"color: grey;"));
        run_2 = new QLabel(menuPage_2);
        run_2->setObjectName(QString::fromUtf8("run_2"));
        run_2->setGeometry(QRect(100, 710, 241, 111));
        run_2->setStyleSheet(QString::fromUtf8("background-color:transparent;"));
        stackedWidget->addWidget(menuPage_2);
        begin_background_2->raise();
        begin_right->raise();
        chooseExistTaskBtn_2->raise();
        createNewBtn_2->raise();
        manageTaskBtn_2->raise();
        returnHome->raise();
        label_6->raise();
        line->raise();
        label_24->raise();
        run_2->raise();
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        stackedWidget->addWidget(page);
        DataManage->setCentralWidget(centralwidget);
        menubar = new QMenuBar(DataManage);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1925, 26));
        DataManage->setMenuBar(menubar);
        statusbar = new QStatusBar(DataManage);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        DataManage->setStatusBar(statusbar);

        retranslateUi(DataManage);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(DataManage);
    } // setupUi

    void retranslateUi(QMainWindow *DataManage)
    {
        DataManage->setWindowTitle(QCoreApplication::translate("DataManage", "MainWindow", nullptr));
        chooseExistTaskBtn_2->setText(QCoreApplication::translate("DataManage", "\346\265\213\350\257\225\346\225\264\344\275\223\350\277\233\345\272\246", nullptr));
        createNewBtn_2->setText(QCoreApplication::translate("DataManage", "\347\256\241\347\220\206\350\200\205\344\277\241\346\201\257", nullptr));
        manageTaskBtn_2->setText(QCoreApplication::translate("DataManage", "\346\225\260\346\215\256\345\210\227\350\241\250", nullptr));
        begin_background_2->setText(QString());
        returnHome->setText(QCoreApplication::translate("DataManage", "\350\277\224\345\233\236\344\270\273\351\241\265", nullptr));
        begin_right->setText(QString());
        label_6->setText(QCoreApplication::translate("DataManage", "\350\277\220\345\212\250\345\221\230\350\256\244\347\237\245\345\212\237\350\203\275\346\265\213\350\257\225\345\271\263\345\217\260", nullptr));
        label_24->setText(QCoreApplication::translate("DataManage", "Athlete cognitive function test platform", nullptr));
        run_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DataManage: public Ui_DataManage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATAMANAGE_H
