#ifndef _Arribo_
#define _Arribo_
#include <iostream>
#include "DtFecha.h"
#include "Barco.h"
using namespace std;


class Arribo {    
 private:  
     DtFecha fecha;    
     float carga;
 public:
     Barco * barco;  //ni idea si va en public o en private la asociacion
    DtFecha GetArriboFecha();
    float GetArriboCarga();
    ~Arribo();
    Arribo();
    Arribo(DtFecha fecha,float carga);
 };
 #endif
