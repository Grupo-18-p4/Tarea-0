#include "../include/DtBarco.h"

DtBarco::DtBarco(string nombre, string id){
    this->nombre = nombre;
    this->id = id;
};
DtBarco::DtBarco(){}
string DtBarco::get_nombre(){
    return this->nombre;
}
string DtBarco::get_id(){
    return this->id;
}
