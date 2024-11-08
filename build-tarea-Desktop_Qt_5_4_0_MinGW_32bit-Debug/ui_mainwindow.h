/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *iniciarSecion;
    QLabel *mostrar;
    QLineEdit *dato_Contra;
    QLineEdit *dato_Usuario;
    QLabel *label;
    QLabel *label_2;
    QPushButton *registrarse;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(400, 300);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        iniciarSecion = new QPushButton(centralWidget);
        iniciarSecion->setObjectName(QStringLiteral("iniciarSecion"));
        iniciarSecion->setGeometry(QRect(120, 140, 75, 23));
        mostrar = new QLabel(centralWidget);
        mostrar->setObjectName(QStringLiteral("mostrar"));
        mostrar->setGeometry(QRect(90, 110, 161, 21));
        dato_Contra = new QLineEdit(centralWidget);
        dato_Contra->setObjectName(QStringLiteral("dato_Contra"));
        dato_Contra->setGeometry(QRect(150, 90, 113, 20));
        dato_Usuario = new QLineEdit(centralWidget);
        dato_Usuario->setObjectName(QStringLiteral("dato_Usuario"));
        dato_Usuario->setGeometry(QRect(150, 50, 113, 20));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 50, 71, 16));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(60, 90, 71, 16));
        registrarse = new QPushButton(centralWidget);
        registrarse->setObjectName(QStringLiteral("registrarse"));
        registrarse->setGeometry(QRect(120, 170, 75, 23));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        iniciarSecion->setText(QApplication::translate("MainWindow", "iniciar sesion", 0));
        mostrar->setText(QString());
        label->setText(QApplication::translate("MainWindow", "USUARIO", 0));
        label_2->setText(QApplication::translate("MainWindow", "CONTRASE\303\221A", 0));
        registrarse->setText(QApplication::translate("MainWindow", "registrarse", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
