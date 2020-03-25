#include "../include/DtFecha.h"
#include "../include/DtBarco.h"
#include "../include/DtArribo.h"
#include <iostream>

DtArribo :: DtArribo(){
};

DtArribo :: DtArribo(DtFecha fecha, float carga, DtBarco barco){
	this->fecha->dia = fecha.getD();
	this->fecha->mes = fecha.getM();     // o this->fecha = fecha;
	this->fecha->anio = fecha.getA();
	this->carga = carga;
	this->barco = barco;
};

DtFecha DtArribo :: getF(){
	return this->fecha;
};

float DtArribo :: getC(){
	return this->carga;
};

DtBarco getB(){
	return this->barco;
};


