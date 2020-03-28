#ifndef _Arribo_
#define _Arribo_
#include <iostream>
#include "DtFecha.h"
using namespace std;


class Arribo {    
     private:  
     DtFecha fecha;    
     float carga;
 
 public:
    DtFecha GetArriboFecha(Arribo arrival);
    string GetArriboCarga(Arribo arrival);
    Arribo::~Arribo();
    Arribo::Arribo();
    Arribo :: Arribo(DtFecha fecha,float carga);
 };
 #endif
