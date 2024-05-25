#include "sensor.h"


void Sensor::actualizar(){
    _dato = ( (rand() % _limite) + _vmin);
    _acum += _dato;
    if (_dato > _max) _max = _dato;
    if (_dato < _min) _min = _dato;
    _cant++;
}

void Sensor::reiniciar() {
    _acum = 0;
    _dato = 0;
    _max = -3000;
    _min = 3000;
    _conteo = 0;
    _cant = 0;
}
