#include "../include/Arribo.h"
#include <iostream>

////////////////////////////////constructores////////////////////////////////////////
//Por parámetros
Arribo :: Arribo(DtFecha fecha,float carga){
this->fecha=fecha;
this->carga=carga;
}

//Por defecto
//Arribo::Arribo(){
//this->fecha=NULL;
//this->carga=0;
//}
////////////////////////////////////////////////////////////////////////////////////


/////////////////////////////////Destructores///////////////////////////////////////
Arribo::~Arribo()
{ //delete(arrival->fecha);
  delete(arrival);}

////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////Getters//////////////////////////////////////////
DtFecha Arribo::GetArriboFecha(){return this->fecha}
float Arribo::GetArriboCarga(){return this->carga}

//void agregarArribo(string idPuerto, string idBarco, float cargaDespacho) //modifica atributos del barco
////////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////Setters////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////
