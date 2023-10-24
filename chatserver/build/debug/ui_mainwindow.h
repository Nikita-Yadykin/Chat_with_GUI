/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox_2;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QTableView *tableViewMessages;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pButtonRefreshMessages;
    QGroupBox *groupBox;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QTableView *tableViewClients;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *bBanUser;
    QPushButton *bDisableUser;
    QPushButton *bActivateUser;
    QSpacerItem *horizontalSpacer;
    QPushButton *pButtonRefreshUsers;
    QMenuBar *menubar;
    QMenu *menuServer;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(576, 549);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(178, 204, 207);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout_4 = new QHBoxLayout(centralwidget);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setStyleSheet(QString::fromUtf8("background-color: rgb(208, 232, 234);"));
        layoutWidget = new QWidget(groupBox_2);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 30, 541, 191));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        tableViewMessages = new QTableView(layoutWidget);
        tableViewMessages->setObjectName("tableViewMessages");
        tableViewMessages->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        tableViewMessages->setSelectionMode(QAbstractItemView::SingleSelection);
        tableViewMessages->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout_2->addWidget(tableViewMessages);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        pButtonRefreshMessages = new QPushButton(layoutWidget);
        pButtonRefreshMessages->setObjectName("pButtonRefreshMessages");
        QFont font;
        font.setBold(true);
        pButtonRefreshMessages->setFont(font);
        pButtonRefreshMessages->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #808080;\n"
"    border-radius: 8px;\n"
"    font-size: 13px;\n"
"    padding: 3px 10px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color:  #C0C0C0;\n"
"}\n"
""));

        horizontalLayout_3->addWidget(pButtonRefreshMessages);


        verticalLayout_2->addLayout(horizontalLayout_3);


        verticalLayout_3->addWidget(groupBox_2);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setStyleSheet(QString::fromUtf8("background-color: rgb(208, 232, 234);"));
        layoutWidget1 = new QWidget(groupBox);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(10, 30, 421, 211));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        tableViewClients = new QTableView(layoutWidget1);
        tableViewClients->setObjectName("tableViewClients");
        tableViewClients->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        tableViewClients->setSelectionMode(QAbstractItemView::SingleSelection);
        tableViewClients->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout->addWidget(tableViewClients);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        bBanUser = new QPushButton(layoutWidget1);
        bBanUser->setObjectName("bBanUser");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI")});
        font1.setBold(true);
        bBanUser->setFont(font1);
        bBanUser->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FF0000;\n"
"    border-radius: 8px;\n"
"    font-size: 13px;\n"
"    padding: 3px 10px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #CC0000;\n"
"}\n"
""));

        horizontalLayout->addWidget(bBanUser);

        bDisableUser = new QPushButton(layoutWidget1);
        bDisableUser->setObjectName("bDisableUser");
        bDisableUser->setFont(font);
        bDisableUser->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(255,255,0);\n"
"    border-radius: 8px;\n"
"    font-size: 13px;\n"
"    padding: 3px 10px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #FFFF99;\n"
"}\n"
""));

        horizontalLayout->addWidget(bDisableUser);

        bActivateUser = new QPushButton(layoutWidget1);
        bActivateUser->setObjectName("bActivateUser");
        bActivateUser->setFont(font);
        bActivateUser->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(0,170,0);\n"
"    border-radius: 8px;\n"
"    font-size: 13px;\n"
"    padding: 3px 10px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #66FF66;\n"
"}\n"
""));

        horizontalLayout->addWidget(bActivateUser);


        horizontalLayout_2->addLayout(horizontalLayout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pButtonRefreshUsers = new QPushButton(layoutWidget1);
        pButtonRefreshUsers->setObjectName("pButtonRefreshUsers");
        pButtonRefreshUsers->setFont(font);
        pButtonRefreshUsers->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #808080;\n"
"    border-radius: 8px;\n"
"    font-size: 13px;\n"
"    padding: 3px 10px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color:  #C0C0C0;\n"
"}\n"
""));

        horizontalLayout_2->addWidget(pButtonRefreshUsers);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_3->addWidget(groupBox);


        horizontalLayout_4->addLayout(verticalLayout_3);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 576, 21));
        menuServer = new QMenu(menubar);
        menuServer->setObjectName("menuServer");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuServer->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Server chat application", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "Messages", nullptr));
        pButtonRefreshMessages->setText(QCoreApplication::translate("MainWindow", "Refresh messages", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Clients", nullptr));
        bBanUser->setText(QCoreApplication::translate("MainWindow", "Ban user", nullptr));
        bDisableUser->setText(QCoreApplication::translate("MainWindow", "Disable user", nullptr));
        bActivateUser->setText(QCoreApplication::translate("MainWindow", "Activate", nullptr));
        pButtonRefreshUsers->setText(QCoreApplication::translate("MainWindow", "Refresh user list", nullptr));
        menuServer->setTitle(QCoreApplication::translate("MainWindow", "Server", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
