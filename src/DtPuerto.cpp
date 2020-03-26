#include "../include/DtFecha.h"
#include "../include/DtPuerto.h"
#include <iostream>
using namespace std;

DtPuerto :: DtPuerto(){
}

DtPuerto :: DtPuerto(string id, string nombre, DtFecha fechaCreacion, int cantArribos){
	this->id = id;
	this->nombre = nombre;
	this->fechaCreacion = fechaCreacion;
	this->cantArribos = cantArribos;
}

string DtPuerto :: getid(){
	return this->id;
}

string DtPuerto :: getnombre(){
	return this->nombre;
}

DtFecha DtPuerto :: getfecha(){
	return this->fechaCreacion;
}

int DtPuerto :: getcant(){
	return this->cantArribos;
}
