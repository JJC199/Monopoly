/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *Board;
    QLabel *PL1;
    QPushButton *pushButton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1366, 780);
        MainWindow->setMinimumSize(QSize(1366, 780));
        MainWindow->setMaximumSize(QSize(1366, 780));
        MainWindow->setBaseSize(QSize(1366, 780));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        Board = new QLabel(centralWidget);
        Board->setObjectName(QStringLiteral("Board"));
        Board->setGeometry(QRect(0, 0, 1366, 780));
        Board->setMinimumSize(QSize(1366, 780));
        Board->setMaximumSize(QSize(1366, 780));
        Board->setAutoFillBackground(false);
        Board->setPixmap(QPixmap(QString::fromUtf8("Images/Board/Monopoly-Board.png")));
        PL1 = new QLabel(centralWidget);
        PL1->setObjectName(QStringLiteral("PL1"));
        PL1->setGeometry(QRect(44, 44, 32, 32));
        PL1->setMinimumSize(QSize(32, 32));
        PL1->setMaximumSize(QSize(32, 32));
        PL1->setPixmap(QPixmap(QString::fromUtf8("Images/Players/Player1.png")));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(810, 670, 141, 51));
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Monopoly", 0));
        Board->setText(QString());
        PL1->setText(QString());
        pushButton->setText(QApplication::translate("MainWindow", "Start Turn", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
