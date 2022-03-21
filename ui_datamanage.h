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
#include <QtWidgets/QGraphicsView>
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
    QFrame *line;
    QPushButton *returnHome;
    QStackedWidget *stackedWidget;
    QWidget *menuPage_2;
    QGraphicsView *graphicsView_6;
    QPushButton *chooseExistTaskBtn_2;
    QPushButton *createNewBtn_2;
    QPushButton *manageTaskBtn_2;
    QWidget *page;
    QLabel *label_13;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *DataManage)
    {
        if (DataManage->objectName().isEmpty())
            DataManage->setObjectName(QString::fromUtf8("DataManage"));
        DataManage->resize(1925, 890);
        centralwidget = new QWidget(DataManage);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(20, 90, 1921, 16));
        line->setStyleSheet(QString::fromUtf8(""));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        returnHome = new QPushButton(centralwidget);
        returnHome->setObjectName(QString::fromUtf8("returnHome"));
        returnHome->setGeometry(QRect(1710, 59, 151, 31));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 99, 1911, 741));
        menuPage_2 = new QWidget();
        menuPage_2->setObjectName(QString::fromUtf8("menuPage_2"));
        graphicsView_6 = new QGraphicsView(menuPage_2);
        graphicsView_6->setObjectName(QString::fromUtf8("graphicsView_6"));
        graphicsView_6->setGeometry(QRect(420, 60, 1121, 651));
        graphicsView_6->setStyleSheet(QString::fromUtf8("background-color: rgb(218, 227, 243);\n"
"border-radius:50px;"));
        chooseExistTaskBtn_2 = new QPushButton(menuPage_2);
        chooseExistTaskBtn_2->setObjectName(QString::fromUtf8("chooseExistTaskBtn_2"));
        chooseExistTaskBtn_2->setGeometry(QRect(780, 350, 411, 71));
        QFont font;
        font.setFamily(QString::fromUtf8("Adobe Devanagari"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        chooseExistTaskBtn_2->setFont(font);
        createNewBtn_2 = new QPushButton(menuPage_2);
        createNewBtn_2->setObjectName(QString::fromUtf8("createNewBtn_2"));
        createNewBtn_2->setGeometry(QRect(780, 190, 411, 71));
        createNewBtn_2->setFont(font);
        manageTaskBtn_2 = new QPushButton(menuPage_2);
        manageTaskBtn_2->setObjectName(QString::fromUtf8("manageTaskBtn_2"));
        manageTaskBtn_2->setGeometry(QRect(780, 510, 411, 71));
        manageTaskBtn_2->setFont(font);
        stackedWidget->addWidget(menuPage_2);
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        stackedWidget->addWidget(page);
        label_13 = new QLabel(centralwidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(720, 20, 520, 71));
        QFont font1;
        font1.setFamily(QString::fromUtf8("DejaVu Sans Mono"));
        font1.setBold(true);
        font1.setWeight(75);
        label_13->setFont(font1);
        label_13->setStyleSheet(QString::fromUtf8("font-size:60px;\n"
"color:black;"));
        DataManage->setCentralWidget(centralwidget);
        menubar = new QMenuBar(DataManage);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1925, 26));
        DataManage->setMenuBar(menubar);
        statusbar = new QStatusBar(DataManage);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        DataManage->setStatusBar(statusbar);

        retranslateUi(DataManage);

        QMetaObject::connectSlotsByName(DataManage);
    } // setupUi

    void retranslateUi(QMainWindow *DataManage)
    {
        DataManage->setWindowTitle(QCoreApplication::translate("DataManage", "MainWindow", nullptr));
        returnHome->setText(QCoreApplication::translate("DataManage", "\350\277\224\345\233\236\344\270\273\351\241\265", nullptr));
        chooseExistTaskBtn_2->setText(QCoreApplication::translate("DataManage", "\346\265\213\350\257\225\346\225\264\344\275\223\350\277\233\345\272\246", nullptr));
        createNewBtn_2->setText(QCoreApplication::translate("DataManage", "\347\256\241\347\220\206\350\200\205\344\277\241\346\201\257", nullptr));
        manageTaskBtn_2->setText(QCoreApplication::translate("DataManage", "\346\225\260\346\215\256\345\210\227\350\241\250", nullptr));
        label_13->setText(QCoreApplication::translate("DataManage", "\344\275\223\350\202\262\345\277\203\347\220\206\346\265\213\350\257\225\347\263\273\347\273\237", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DataManage: public Ui_DataManage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATAMANAGE_H
