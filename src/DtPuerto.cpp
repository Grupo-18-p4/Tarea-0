#include "../include/DtFecha.h"
#include "../include/DtPuerto.h"
#include <iostream>
using namespace std;

DtPuerto :: DtPuerto(){
};

DtPuerto :: DtPuerto(string id, string nombre, DtFecha fechaCreacion, int cantArribos){
	this->id = id;
	this->nombre = nombre;
	this->fechaCreacion->dia = fechaCreacion.getD();
	this->fechaCreacion->mes = fechaCreacion.getM();
	this->fechaCreacion->anio = fechaCreacion.getA();
	this->cantArribos = cantArribos;
};

std::string DtPuerto :: getid(){
	return this->id;
};

std::string DtPuerto :: getnombre(){
	return this->nombre;
};

DtFecha DtPuerto :: getfecha(){
	return this->fecha;
};

int DtPuerto :: getcant(){
	return this->cantArribos;
};