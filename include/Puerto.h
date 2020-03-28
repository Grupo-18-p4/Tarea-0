#ifndef _Puerto_
#define _Puerto_

#include <iostream>
#include "DtFecha.h"
#include "Arribo.h"
using namespace std;

struct arr_Arribos{
 Arribo* arrA[30];
 int tope;
};

class Puerto{   
    private:  
        string id;  //field or data member     
        string nombre; //field or data member  
        DtFecha fechaCreacion;//field or data member
     
    public:
        arr_Arribos Puer_Arr; 
        Puerto();
        Puerto(string id, string nombre, DtFecha fechaCreacion);
        ~Puerto();
        string GetPuertoId();
        string GetPuertoNombre();
        DtFecha GetPuertoFecha();
 };
 #endif
