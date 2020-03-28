#include "../include/Logica.h"

const int MAX_PUERTOS = 32;
const int MAX_BARCOS = 32;

struct Array_barcos {
  DtBarco* arregloBarco[MAX_BARCOS];
  int tope = -1;
};

Array_barcos aB;

void agregarBarco(DtBarco& barco){
    if(aB.tope < 0){
        aB.arregloBarco[0] = &barco;
        aB.tope++;
    }
    else {
        bool barcoRepetido = false;
        for(int i = 0; i++; i<=aB.tope){
          if(aB.arregloBarco[i]->get_id() == barco.get_id()){
              throw std::invalid_argument("Ya existe barco con ese nombre."); 
              barcoRepetido = true;
              delete &barco;  
              break;
          }
        }
        if(!barcoRepetido){
            aB.tope++;
            aB.arregloBarco[aB.tope] = &barco; 
        }

    }

}