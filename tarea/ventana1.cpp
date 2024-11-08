#include "ventana1.h"
#include "ui_ventana1.h"

ventana1::ventana1(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ventana1)
{
    ui->setupUi(this);
    // Configurar como ventana flotante y modal
        this->setWindowFlags(Qt::Window);
        this->setWindowModality(Qt::ApplicationModal);
}

ventana1::~ventana1()
{
    delete ui;
}

void ventana1::on_pushButton_clicked()
{
    nombre = ui->ingre_nombre->text();
    apellidos = ui->ingreApellido->text();
    edad = ui->ingreEdad->text();
    telefono = ui->ingreTelefono->text();
    usuario = ui->ingreUsuario->text();
    contra = ui->ingrecontra->text();

    if (ui->radioMasculino->isChecked()) {
        sexo = true; // Masculino
    } else if (ui->radioFemenino->isChecked()) {
        sexo = false; // Femenino
    }

     this->close();
}
