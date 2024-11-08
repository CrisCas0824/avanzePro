#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ventana1.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    ventana1Registro(NULL)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete ventana1Registro;
}

void MainWindow::on_iniciarSecion_clicked(){

    QString usu= ui->dato_Usuario->text();
    QString con=ui->dato_Contra->text();
    if(usu==usuario && contrasenia==con){
        ui->mostrar->setText("contraseña correcta");
    }else{
       ui->mostrar->setText("contraseña incorrecta");
    }
}

void MainWindow::on_registrarse_clicked()
{
    if (ventana1Registro == NULL) {
        ventana1Registro = new ventana1(this);
        ventana1Registro->setWindowModality(Qt::ApplicationModal); // Modalidad para bloquear MainWindow
        ventana1Registro->setAttribute(Qt::WA_DeleteOnClose);      // Elimina la ventana al cerrar
    }
    ventana1Registro->show();
}

