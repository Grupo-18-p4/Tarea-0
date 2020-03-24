#include ".../include/Barco.h"
#include <iostream>

BarcoPasajero :: BarcoPasajero();

BarcoPasajero :: BarcoPasajero(string nombre,string id, int cantPasajeros, TipoTamanio Tamanio): Barco(nombre,id){
    this->cantPasajeros = cantPasajeros;
    this->Tamanio = Tamanio;
}

BarcoPasajero :: BarcoPesqero(int cantPasajeros){
    this->cantPasajeros = cantPasajeros;
}

BarcoPasajero :: BarcoPasajero(TipoTamanio Tamanio){
    this->Tamanio = Tamanio;
}

cantPasajeros BarcoPasajero :: getcantPasajeros(){
    return this->cantPasajeros;
}

Tamanio BarcoPasajero :: getTamanio(){
    return this->Tamanio;
}
