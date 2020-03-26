#ifndef _Barco_
#define _Barco_

#include <iostream>
using namespace std;

class Barco
 {    
     private:  
        string nombre;   
        string id; 
     
    public:
       
        Barco(string id, string nombre);
        Barco(string nombre);

        string getnombre();
        string getid();
    
        void arribar(float cargaDespacho); 
 };
 #endif
