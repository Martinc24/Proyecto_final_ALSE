
#include "mainw_datos.h"
#include <QApplication>
#include <ctime>


void delay(int secs) {
    for(int i = (time(NULL) + secs); time(NULL) != i; time(NULL));}


int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    MainW_datos Ppal;
    Ppal.show();

    return a.exec();
}
