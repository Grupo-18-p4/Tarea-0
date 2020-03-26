#include "../include/Barco.h"


Barco::Barco(string id, string nombre){
    this->id = id;
    this->nombre = nombre;
};

Barco::Barco(string nombre){
    this->nombre = nombre;   
};

string Barco::getnombre(){
    return this->nombre;
};

string Barco::getid(){
    return this->id;
};

void Barco::arribar(float cargaDespacho){
    //no hace nada, para que lo herede barcopasajeros
};