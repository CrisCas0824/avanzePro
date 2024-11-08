#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "ventana1.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_iniciarSecion_clicked();

    void on_registrarse_clicked();

    void on_registrarse_2_clicked();

private:
    Ui::MainWindow *ui;
    ventana1 * ventana1Registro;
    QString usuario,contrasenia;
};

#endif // MAINWINDOW_H
