#include "Control_DB.h"
#include "sensor.h"
#include <vector>
#include <iostream>
#include <ctime>
#include <stdio.h>
#include <stdlib.h>
#include <sqlite3.h>
#include <string>
#include <sstream>
#include <ctime>
#include <unistd.h>

using namespace std;

int main (int argc , char** argv){
    double Datos[18];

    for (int i = 0 ; i < 18 ; i++){
        Datos[i] = 0;
    }

    Temperatura T;
    Humedad H;
    Velocidad V;
    DViento D;
    Precipitacion P;
    Intensidad I;

    string db_name;
    int periodo;

    Control_DB control("Sensores.db");

    int inicio = 0;
    int contador = 0;

    if (argc==3 && (string)argv[1] == "Datos"){
        db_name = argv[1];
        periodo = stoi(argv[2]);
    }else {
        cout << "Parámetros incorrectos. Por favor escriba el nombre de la base de datos y la frecuencia de toma de datos" << endl;
        return 1;
    }

    control.abrir_DB();
    control.crear_DB();
    control.cerrar_DB();

    control.abrir_DB();
    control.guardarEjecucion_DB();
    control.cerrar_DB();

    time_t startTime;
        struct tm *localTime;
        time( &startTime );
        localTime = localtime( &startTime );
        int Hor_ini = localTime->tm_hour;
        int Min_ini = localTime->tm_min;
        int Sec_ini = localTime->tm_sec;

    inicio = 1;

    while (inicio == 1){
        while(contador < periodo){
            T.actualizar();
            H.actualizar();
            V.actualizar();
            D.actualizar();
            P.actualizar();
            I.actualizar();
            contador++;
            sleep(1);
        }
        Datos[0] = T.prom(), Datos[1] = T.maximo(), Datos[2] = T.minimo();
        Datos[3] = H.prom(), Datos[4] = H.maximo(), Datos[5] = H.minimo();
        Datos[6] = V.prom(), Datos[7] = V.maximo(), Datos[8] = V.minimo();
        Datos[9] = D.prom(), Datos[10] = D.maximo(), Datos[11] = D.minimo();
        Datos[12] = P.prom(), Datos[13] = P.maximo(), Datos[14] = P.minimo();
        Datos[15] = I.prom(), Datos[16] = I.maximo(), Datos[17] = I.minimo();
        control.abrir_DB();
        control.guardarDatos_DB(Datos);
        control.cerrar_DB();

        time_t currentTime;
            struct tm *localTime;
            time( &currentTime );
            localTime = localtime( &currentTime );
            int Hor = localTime->tm_hour - Hor_ini;
            int Min = localTime->tm_min - Min_ini;
            int Sec = localTime->tm_sec - Sec_ini;

            string value[6] = {"Temperatura", "Humedad", "Velocidad del viento", "Dirección del viento", "Precipitación", "Intensidad de luz"};

        cout << "--------------------------------------------------------------------------------------------------" << endl;
        cout << "Tiempo de Ejecucion: " << Hor << "H:" << Min << "M:" << Sec << "S" << endl;
        for(int i = 0; i < 6; i++) {
            cout << value[i] << " ->     Prom: " << Datos[i*3] << ", Max: " << Datos[(i*3) + 1] << ", Min: " << Datos[(i*3) + 2] << endl;
        }
        cout << "--------------------------------------------------------------------------------------------------" << endl;

        T.reiniciar(), H.reiniciar(), V.reiniciar(), D.reiniciar(), P.reiniciar(), I.reiniciar();
        contador = 0;
    }
}
