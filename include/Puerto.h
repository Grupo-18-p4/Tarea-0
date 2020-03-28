#ifndef _Puerto_
#define _Puerto_

#include <iostream>
#include "DtFecha.h"
using namespace std;
class Puerto{   
    private:  
        string id;  //field or data member     
        string nombre; //field or data member  
        DtFecha fechaCreacion;//field or data member
     
    public: 
        Puerto();
        Puerto(string id, string nombre, DtFecha fechaCreacion);
        ~Puerto();
        string GetPuertoId();
        string GetPuertoNombre();
        DtFecha GetPuertoFecha();
 };
 #endif
