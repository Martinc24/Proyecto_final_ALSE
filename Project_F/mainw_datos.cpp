#include "mainw_datos.h"
#include "ui_mainw_datos.h"
#include <QTimer>
#include <QTime>
#include <sstream>
#include <unistd.h>

MainW_datos::MainW_datos(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MainW_datos)
{

    ui->setupUi(this);
    timer = new QTimer(this);
    connect(timer,&QTimer::timeout,this,&MainW_datos::actualizarDatos);
    timer->start(1000);

    actualizarDatos();


}

MainW_datos::~MainW_datos()
{
    delete ui;
    delete timer;
}


void MainW_datos::actualizarDatos()
{

    double Datos[18];
    for (int i = 0; i < 18; i++){
        Datos[i] = 0.0;
    }

    _control.abrir_DB();
    _control.ObtenerDatos_DB(Datos);
    _control.cerrar_DB();

    stringstream sql;
    sql << Datos[0]<<" °C";
    ui->lineEdit_temperatura->setText(QString::fromStdString(sql.str()));
    sql.str("");
    sql << Datos[3]<<" %";
    ui->lineEdit_humedad->setText(QString::fromStdString(sql.str()));
    sql.str("");
    sql << Datos[6]<<" m/s";
    ui->lineEdit_velocidad->setText(QString::fromStdString(sql.str()));
    sql.str("");
    sql << Datos[9]<<" ° Norte";
    ui->lineEdit_direccion->setText(QString::fromStdString(sql.str()));
    sql.str("");
    sql << Datos[12]<<" mm";
    ui->lineEdit_precipitacion->setText(QString::fromStdString(sql.str()));
    sql.str("");
    sql << Datos[15]<<" lumen";
    ui->lineEdit_intensidadLuz->setText(QString::fromStdString(sql.str()));
    sql.str("");
    sql << "0";
    ui->lineEdit_tiempo->setText(QString::fromStdString(sql.str()));


}
