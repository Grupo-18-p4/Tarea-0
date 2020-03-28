#include "../include/DtFecha.h"
#include "../include/DtBarco.h"
#include "../include/DtArribo.h"
#include <iostream>



DtArribo::DtArribo(DtFecha fecha, float carga, DtBarco* barco){
	this->fecha = fecha;
	this->carga = carga;
	this->barco = barco;
}

DtFecha DtArribo :: getF(){
	return this->fecha;
}

float DtArribo :: getC(){
	return this->carga;
}

DtBarco* DtArribo::getB(){
	return this->barco;
}


