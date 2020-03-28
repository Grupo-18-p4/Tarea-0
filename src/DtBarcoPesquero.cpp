#include "../include/DtBarcoPesquero.h"
using namespace std;
DtBarcoPesquero::DtBarcoPesquero(string nombre,string id, int capacidad, int carga): DtBarco(nombre, id){
    this->capacidad = capacidad;
    this->carga = carga;
}
int DtBarcoPesquero::get_capacidad(){
    return this->capacidad;
}
int DtBarcoPesquero::get_carga(){
    return this->carga;
}


DtBarcoPesquero::~DtBarcoPesquero(){}//No se que verga hay que hacer


const ostream& operator<< (ostream& os, DtBarcoPesquero obj) {
    os << "Id barco: " << obj.get_id() << '\n';
    os << "Nombre: " << obj.get_nombre() << '\n';
    os << "Tipo de barco: Barco pesquero" << '\n'; 
    os << "Capacidad: " << obj.get_capacidad() << '\n';
    os << "Carga: " << obj.get_carga() << '\n';
    return os;
}
