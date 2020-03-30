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

ostream& operator << (ostream &os,DtPuerto & dtp){
	os << "Id puerto: " << dtp.getid() << "\n" << "Nombre: " <<  dtp.getnombre() << "\n" << "Fecha de creación: "  << dtp.getfecha().getD() << "/" << dtp.getfecha().getM() << "/" << dtp.getfecha().getA() << "\n" << "Cantidad de Arribos: " << dtp.getcant() << "\n";
	return os;
}
