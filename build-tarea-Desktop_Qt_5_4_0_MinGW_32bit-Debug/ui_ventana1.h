/********************************************************************************
** Form generated from reading UI file 'ventana1.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VENTANA1_H
#define UI_VENTANA1_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ventana1
{
public:
    QLineEdit *ingrecontra;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *ingre_nombre;
    QLineEdit *ingreApellido;
    QLineEdit *ingreEdad;
    QLineEdit *ingreTelefono;
    QLabel *label_7;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_3;
    QRadioButton *radioMasculino;
    QRadioButton *radioFemenino;
    QLabel *label_6;
    QPushButton *pushButton;
    QLabel *label_5;
    QLineEdit *ingreUsuario;
    QWidget *layoutWidget_3;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QWidget *ventana1)
    {
        if (ventana1->objectName().isEmpty())
            ventana1->setObjectName(QStringLiteral("ventana1"));
        ventana1->resize(400, 308);
        ingrecontra = new QLineEdit(ventana1);
        ingrecontra->setObjectName(QStringLiteral("ingrecontra"));
        ingrecontra->setGeometry(QRect(150, 230, 133, 20));
        layoutWidget = new QWidget(ventana1);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(150, 10, 135, 141));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        ingre_nombre = new QLineEdit(layoutWidget);
        ingre_nombre->setObjectName(QStringLiteral("ingre_nombre"));

        verticalLayout_2->addWidget(ingre_nombre);

        ingreApellido = new QLineEdit(layoutWidget);
        ingreApellido->setObjectName(QStringLiteral("ingreApellido"));

        verticalLayout_2->addWidget(ingreApellido);

        ingreEdad = new QLineEdit(layoutWidget);
        ingreEdad->setObjectName(QStringLiteral("ingreEdad"));

        verticalLayout_2->addWidget(ingreEdad);

        ingreTelefono = new QLineEdit(layoutWidget);
        ingreTelefono->setObjectName(QStringLiteral("ingreTelefono"));

        verticalLayout_2->addWidget(ingreTelefono);

        label_7 = new QLabel(ventana1);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(100, 220, 41, 29));
        layoutWidget_2 = new QWidget(ventana1);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(150, 150, 131, 42));
        verticalLayout_3 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        radioMasculino = new QRadioButton(layoutWidget_2);
        radioMasculino->setObjectName(QStringLiteral("radioMasculino"));

        verticalLayout_3->addWidget(radioMasculino);

        radioFemenino = new QRadioButton(layoutWidget_2);
        radioFemenino->setObjectName(QStringLiteral("radioFemenino"));

        verticalLayout_3->addWidget(radioFemenino);

        label_6 = new QLabel(ventana1);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(100, 190, 41, 29));
        pushButton = new QPushButton(ventana1);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(150, 270, 75, 23));
        label_5 = new QLabel(ventana1);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(100, 150, 41, 29));
        ingreUsuario = new QLineEdit(ventana1);
        ingreUsuario->setObjectName(QStringLiteral("ingreUsuario"));
        ingreUsuario->setGeometry(QRect(150, 200, 133, 20));
        layoutWidget_3 = new QWidget(ventana1);
        layoutWidget_3->setObjectName(QStringLiteral("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(100, 10, 44, 131));
        verticalLayout = new QVBoxLayout(layoutWidget_3);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget_3);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(layoutWidget_3);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(layoutWidget_3);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(layoutWidget_3);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout->addWidget(label_4);


        retranslateUi(ventana1);

        QMetaObject::connectSlotsByName(ventana1);
    } // setupUi

    void retranslateUi(QWidget *ventana1)
    {
        ventana1->setWindowTitle(QApplication::translate("ventana1", "Form", 0));
        label_7->setText(QApplication::translate("ventana1", "contra", 0));
        radioMasculino->setText(QApplication::translate("ventana1", "masculino", 0));
        radioFemenino->setText(QApplication::translate("ventana1", "femenino", 0));
        label_6->setText(QApplication::translate("ventana1", "usuario", 0));
        pushButton->setText(QApplication::translate("ventana1", "sgt", 0));
        label_5->setText(QApplication::translate("ventana1", "Sexo", 0));
        label->setText(QApplication::translate("ventana1", "Nombre", 0));
        label_2->setText(QApplication::translate("ventana1", "Apellidos", 0));
        label_3->setText(QApplication::translate("ventana1", "Edad", 0));
        label_4->setText(QApplication::translate("ventana1", "Telefono", 0));
    } // retranslateUi

};

namespace Ui {
    class ventana1: public Ui_ventana1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTANA1_H
