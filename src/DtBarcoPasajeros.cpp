#include "../include/DtBarcoPasajeros.h"
using namespace std;

DtBarcoPasajeros::DtBarcoPasajeros(string nombre, string id, int cantPasajeros, TipoTamanio tamanio):DtBarco(nombre,id){
        this->cantPasajeros = cantPasajeros;
        this->tamanio =  tamanio;
}
int DtBarcoPasajeros::get_cantPasajeros(){
    return this->cantPasajeros;
};
TipoTamanio DtBarcoPasajeros::get_tamanio(){
    return this->tamanio;
}
const ostream& operator<< (ostream& os, DtBarcoPasajeros obj) {
    os << "Id barco: " << obj.get_id() << '\n';
    os << "Nombre: " << obj.get_nombre() << '\n';
    os << "Tipo de barco: Barco de pasajeros" << '\n'; 
    os << "Cantidad de pasajeros: " << obj.get_cantPasajeros() << '\n';
    os << "Carga: " << obj.get_tamanio() << '\n';
    return os;
}