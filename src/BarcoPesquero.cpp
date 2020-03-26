#include "../include/BarcoPesquero.h"



BarcoPesquero::BarcoPesquero(string nombre,string id, int capacidad, int carga): Barco(nombre,id){
    this->capacidad = capacidad;
    this->carga = carga;
};

void BarcoPesquero::setCapacidad(int capacidad){
    this->capacidad = capacidad;
};

void BarcoPesquero::setCarga(int carga){
    this->carga = carga;
};

int BarcoPesquero::getCapacidad(){
    return this->capacidad;
};

int BarcoPesquero::getCarga(){
    return this->carga;
};

void BarcoPesquero::arribar(float cargaDespacho){
    this->carga = this->carga - cargaDespacho;
}

