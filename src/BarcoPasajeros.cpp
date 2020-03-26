#include "../include/BarcoPasajeros.h"



BarcoPasajeros::BarcoPasajeros(string nombre,string id, int cantPasajeros, TipoTamanio tamanio): Barco(nombre,id){
    this->cantPasajeros = cantPasajeros;
    this->tamanio = tamanio;
}

void BarcoPasajeros::setcantPasajeros(int cantPasajeros){
    this->cantPasajeros = cantPasajeros;
}

void BarcoPasajeros::setTamanio(TipoTamanio tamanio){
    this->tamanio = tamanio;
}

int BarcoPasajeros::getCantPasajeros(){
    return this->cantPasajeros;
}

TipoTamanio BarcoPasajeros::getTamanio(){
    return this->tamanio;
}
