#include "../include/Puerto.h"
#include <iostream>

////////////////////////////////constructores////////////////////////////////////////
//Por parámetros
Puerto :: Puerto(string id, string nombre, DtFecha fecha){
this->id=id;
this->nombre=nombre
this->fechaCreacion=fecha;
}

//Por defecto
Puerto::Puerto(){
this->id=0;
this->nombre=0;
this->fechaCreacion=NULL;
}
////////////////////////////////////////////////////////////////////////////////////


/////////////////////////////////Destructores///////////////////////////////////////
Puerto::~Puerto()
{ delete(port->fechaCreacion);
  delete(port);}
////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////Getters//////////////////////////////////////////
string Puerto::GetPuertoId(){return this->nombre}
string Puerto::GetPuertoNombre(){return this->nombre}
DtFecha Puerto::GetPuertoFecha(){return this->DtFecha}
//Arraydenombres listarPuertos
////////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////Setters////////////////////////////////////////

//Se crearan segun sea necesario

///////////////////////////////////////////////////////////////////////////////////
