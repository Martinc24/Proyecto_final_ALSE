/**
 * @file Control_DB.h
 * @authors Andres Medrano
 * @date 17/05/2024
 * @brief Aquí es donde se crean las funciones que se usarán en todo el programa las cuales se encargarán de todo el control de la base de datos.
 */

#ifndef CONTROL_DB_H
#define CONTROL_DB_H
#include <string>
#include <sqlite3.h>

using namespace std;
/**
 * @brief Definición de la clase Control_DB. Aquí se decide que partes de la clase serán públicas y por lo tanto se heredarán y que parte será privada.
 */
class Control_DB{

public:

    Control_DB(std::string path);

    bool abrir_DB();

    bool crear_DB();

    bool cerrar_DB();

    bool guardarDatos_DB(double Data[18]);

    bool guardarEjecucion_DB();

    bool ObtenerDatos_DB(double Data[18]);


private:
    sqlite3         *_db;
    std::string     _url;

    static int rellenar_U (void* data, int argc, char *argv[], char *campos[]);

    static int rellenar_Datos (void* data, int argc, char *argv[], char *campos[]);


    Control_DB();

};
#endif // DB_LOCAL_H
