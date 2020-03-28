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
Puerto::Puerto();
Puerto::Puerto(string id, string nombre, DtFecha fechaCreacion);
Puerto::~Puerto();
string Puerto::GetPuertoId(puerto port);
string Puerto::GetPuertoNombre(puerto port);
DtFecha Puerto::GetPuertoFecha(puerto port);
 };
 #endif
