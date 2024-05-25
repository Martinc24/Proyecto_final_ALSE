#include "Control_DB.h"
#include <sstream>
#include <iostream>
#include <stdio.h>
#include <sqlite3.h>
#include <string>
#include <stdlib.h>


using namespace std;

Control_DB::Control_DB(string path){
    _url = path;
}

bool Control_DB::abrir_DB(){
    int rc;
    rc = sqlite3_open( _url.c_str(), &_db );

    if( rc ) {
       fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(_db));
       return(0);
    }
    return true;}

bool Control_DB::crear_DB()
{
    sqlite3 *db;
    char *zErrMsg = 0;
    int rc;
    string sqlstr;

    /* Open database */
    rc = sqlite3_open("Sensores.db", &db);

    if( rc != 0 ) {
       fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
       return(1);
    } else {
       fprintf(stdout, "Opened database successfully\n");
    }

    /* Create SQL statement */
    sqlstr="CREATE TABLE IF NOT EXISTS Datos (" \
           "No_Medida INTEGER NOT NULL PRIMARY KEY AUTOINCREMENT UNIQUE," \
           "Temp_prom REAL NOT NULL," \
           "Temp_max	REAL NOT NULL," \
           "Temp_min	REAL NOT NULL," \
           "Hum_prom	REAL NOT NULL," \
           "Hum_max REAL NOT NULL," \
           "Hum_min REAL NOT NULL," \
           "Vel_prom	REAL NOT NULL," \
           "Vel_max REAL NOT NULL," \
           "Vel_min REAL NOT NULL," \
           "DirV_prom REAL NOT NULL," \
           "DirV_max	REAL NOT NULL," \
           "DirV_min	REAL NOT NULL," \
           "Prec_prom REAL NOT NULL," \
           "Prec_max	REAL NOT NULL," \
           "Prec_min	REAL NOT NULL," \
           "IntL_prom REAL NOT NULL," \
           "IntL_max	REAL NOT NULL," \
           "IntL_min	REAL NOT NULL" \
           ");";

    /* Execute SQL statement */
    rc = sqlite3_exec(db, sqlstr.c_str(), 0, 0, &zErrMsg);

    if( rc != SQLITE_OK ){
       fprintf(stderr, "SQL error: %s\n", zErrMsg);
       sqlite3_free(zErrMsg);
       return (3);
    } else {
       fprintf(stdout, "Table created successfully\n");
    }

    /* Create SQL statement */
    sqlstr="CREATE TABLE IF NOT EXISTS Ejecucion (" \
           "No_Ejecucion INTEGER NOT NULL PRIMARY KEY AUTOINCREMENT UNIQUE," \
           "FechaHora SMALLDATETIME NOT NULL" \
           ");";

    /* Execute SQL statement */
    rc = sqlite3_exec(db, sqlstr.c_str(), 0, 0, &zErrMsg);

    if( rc != SQLITE_OK ){
       fprintf(stderr, "SQL error: %s\n", zErrMsg);
       sqlite3_free(zErrMsg);
       return (3);
    } else {
       fprintf(stdout, "Table created successfully\n");
    }

    sqlite3_close(db);
    return true;

}


bool Control_DB::cerrar_DB(){

    int rc = sqlite3_close( _db );

    if( rc != SQLITE_OK )
        return false;

    return true;
}

bool Control_DB::guardarEjecucion_DB(){
    char *mesg = 0;
    int rc = 0;
    stringstream sql;
    sql << "INSERT INTO Ejecucion (FechaHora) VALUES (DATETIME())";
    rc = sqlite3_exec( _db, sql.str().c_str(), 0, 0, &mesg );

    if( rc != SQLITE_OK ){
       fprintf(stderr, "SQL error: %s\n", mesg);
       sqlite3_free(mesg);
    }
    sql.str("");
    return true;
}

bool Control_DB::guardarDatos_DB(double Data[18]){
    char *mesg = 0;
    int rc = 0;
    stringstream sql;
    sql << "INSERT INTO Datos (Temp_prom, Temp_max, Temp_min, Hum_prom, Hum_max, Hum_min, Vel_prom, Vel_max, Vel_min, DirV_prom, DirV_max, DirV_min, Prec_prom, Prec_max, Prec_min, IntL_prom, IntL_max, IntL_min) VALUES (";
    sql << "'" << Data[0] << "', '" << Data[1] << "', '" << Data[2] << "', '" << Data[3] << "', '" << Data[4] << "', '" << Data[5] << "', '" << Data[6] << "', '" << Data[7] << "', '" << Data[8] << "', '" << Data[9] << "', '" << Data[10] << "', '" << Data[11] << "', '" << Data[12] << "', '" << Data[13] << "', '" << Data[14] << "', '" << Data[15] << "', '" << Data[16] << "', '" << Data[17] << "');" ;
    rc = sqlite3_exec( _db, sql.str().c_str(), 0, 0, &mesg );

    if( rc != SQLITE_OK ){
       fprintf(stderr, "SQL error: %s\n", mesg);
       sqlite3_free(mesg);
    }
    sql.str("");
    return true;
}

int Control_DB::rellenar_U (void* data, int argc, char *argv[], char *campos[]){
    int *ttemp = (int*)data;
    for (int i = 0; i < 7; i++ ){
        ttemp[i] = atoi(argv[i]);
    }
    return 0;
}

int Control_DB::rellenar_Datos(void* data, int argc, char *argv[], char *campos[]){
    double *ttemp = (double*)data;
    for (int i = 0; i < 18; i++ ){
        ttemp[i] = atof(argv[i]);
    }
    return 0;
}

bool Control_DB::ObtenerDatos_DB(double Data[19])
{
    char *mesg = 0;
    int rc = 0;

    double tmp[18]; // En este vector se traen los datos de la callback function.
    stringstream sql;
    sql << "SELECT Temp_prom, Temp_max, Temp_min, Hum_prom, Hum_max, Hum_min, Vel_prom, Vel_max, Vel_min, DirV_prom, DirV_max, DirV_min, Prec_prom, Prec_max, Prec_min, IntL_prom, IntL_max, IntL_min FROM Datos WHERE No_Medida = (SELECT MAX(No_medida) FROM Datos)";

    rc = sqlite3_exec( _db, sql.str().c_str(), rellenar_Datos, (void*)&tmp, &mesg);
    if (rc != SQLITE_OK ){
        return false;
    }
    Data[0] = tmp[0], Data[1] = tmp[1], Data[2] = tmp[2], Data[3] = tmp[3];
    Data[4] = tmp[4], Data[5] = tmp[5], Data[6] = tmp[6], Data[7] = tmp[7];
    Data[8] = tmp[8], Data[9] = tmp[9], Data[10] = tmp[10], Data[11] = tmp[11];
    Data[12] = tmp[12], Data[13] = tmp[13], Data[14] = tmp[14], Data[15] = tmp[15];
    Data[16] = tmp[16], Data[17] = tmp[17];
    //cout <<"Temperatura: "<< Data[0]<<", Humedad: "<< Data[3]<< endl;
    sql.str("");

    return true;

}

Control_DB::Control_DB()
{

}
