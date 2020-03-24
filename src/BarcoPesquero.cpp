#include ".../include/Barco.h"
#include <iostream>

BarcoPesquero :: BarcoPesquero();

BarcoPesquero :: BarcoPesquero(string nombre,string id, int capacidad, int carga): Barco(nombre,id){
    this->capacidad = capacidad;
    this->carga = carga;
}

BarcoPesquero :: BarcoPesqero(int capacidad){
    this->capacidad = capacidad;
}

BarcoPesquero :: BarcoPesquero(int carga){
    this->carga = carga;
}

capacidad BarcoPesquero :: getCapacidad(){
    return this->capacidad;
}

carga BarcoPesquero :: getcarga(){
    return this->carga;
}

