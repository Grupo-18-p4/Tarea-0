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
     Barco * barco;
 public:
    
    DtFecha GetArriboFecha();
    float GetArriboCarga();
    Barco* GetArriboBarco();
    ~Arribo();
    Arribo();
    Arribo(DtFecha fecha,float carga,Barco* barco);
 };
 #endif
