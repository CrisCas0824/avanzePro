#ifndef VENTANA1_H
#define VENTANA1_H

#include <QWidget>

namespace Ui {
class ventana1;
}

class ventana1 : public QWidget
{
    Q_OBJECT

public:
    explicit ventana1(QWidget *parent = 0);
    ~ventana1();

private slots:
    void on_pushButton_clicked();

private:
    Ui::ventana1 *ui;
    QString nombre, apellidos, edad, telefono, usuario, contra;
    bool sexo;
};

#endif // VENTANA1_H
