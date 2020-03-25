#include "../include/DtFecha.h"
#include "<iostream>"
DtFecha :: DtFecha(){
};

DtFecha :: DtFecha(int dia, int mes, int anio){
	if (dia > 31) || (dia < 1) || (mes > 12) || (mes < 1) || (anio < 1900){
		throw std::invalid_argument("No es válido."); 
	}
	else{
	this->dia = dia;
	this->mes = mes;
	this->anio = anio;
	}
};

int DtFecha :: getD(){
	return this->dia;
};

int DtFecha :: getM(){
	return this->mes;
};

int DtFecha :: getA(){
	return this->anio;
}

