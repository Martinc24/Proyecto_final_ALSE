/**
 * @file sensor.h
 * @author Andres Medrano
 * @date 14/05/2022
 * @brief Aquí es donde se crean las funciones que se usarán en todo el programa las cuales se encargarán de generar y calcular todos los datos que se mostrarán relacionados con los sensores.
 */


#ifndef SENSOR_H
#define SENSOR_H

#include <iostream>
#include <string>
#include <sstream>
#include <cmath>

/**
 * @brief Definición de la clase Sensor. Aquí se define las variables y métodos tanto privados como públicos.
 */
class Sensor{

private:

    double _dato;

    int _limite;

    double _max;

    double _min;

    double _acum;

    int _cant;

    int _periodo;

    int _conteo;

    int _vmin;

public:

    Sensor(int limite = 0, int vmin = 0, int periodo = 0, double dato = 0., double max = -3000, double min = 3000, double acum = 0, int cant = 0){
        _dato = dato;
        _limite = limite;
        _periodo = periodo;
        _acum = acum;
        _max = max;
        _min = min;
        _cant = cant;
        _vmin = vmin;
    }

    double leerDato(){ return _dato; }

    void actualizar();

    double prom () {return _acum/_cant;}

    double maximo () {return _max;}

    double minimo () {return _min;}

    void reiniciar ();

};

class Temperatura: public Sensor{
public:

    Temperatura():Sensor(55, -10){}
};

class Humedad: public Sensor{
public:

    Humedad():Sensor(100, 0){}
};

class Velocidad: public Sensor{
public:

    Velocidad():Sensor(40, 0){}
};

class DViento: public Sensor{
public:

    DViento():Sensor(360, -180){}
};

class Precipitacion: public Sensor{
public:

    Precipitacion():Sensor(50, 0){}
};

class Intensidad: public Sensor{
public:

    Intensidad():Sensor(2000, 0){}
};

#endif // SENSOR_H
