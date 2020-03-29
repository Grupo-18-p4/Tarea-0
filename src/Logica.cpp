#include "../include/Logica.h"
#include <string>
#include <stdlib.h>
#include <ctime>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
const int MAX_PUERTOS = 32;
const int MAX_BARCOS = 32;
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
struct Array_barcos
{
  DtBarco *arregloBarco[MAX_BARCOS];
  int tope = -1;
} aB;

struct Array_puertos{
  Puerto* arr_Puerto[MAX_PUERTOS];
  int tope = -1;
};

typedef Array_puertos * arr_pt;
arr_pt aP = new Array_puertos;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
bool controlIdBarco(string id)
{
  bool barcoRepetido = false;
  if (aB.tope >= 0)
  {
    int i = 0;
    while (i <= aB.tope && !barcoRepetido)
    {
      if (aB.arregloBarco[i]->get_id() == id)
      {
        barcoRepetido = true;
      }
      i++;
    }
  }
  return barcoRepetido;
}

void agregarBarco(DtBarco &barco)
{
  if (aB.tope < MAX_BARCOS)
  {
    aB.tope++;
    aB.arregloBarco[aB.tope] = &barco;
  }
  else
  {
    cout << "No se pueden agregar mas barcos";
  }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
bool idPuertoRepetido(string id){
  int i = 0;
  if (aP->tope == -1){
    i = 0;
  }
  else{
    while ((i<= aP->tope) && (aP->arr_Puerto[i]->GetPuertoId() != id)){
      i++;
    }
  }
  return (i <= aP->tope); /* si i es menor o igual al tope es porque el while se corto con la condicion (aP->arr_Puerto[i] != id) */
} 

void agregarPuerto(string id, string nombre, const DtFecha& fechaCreacion){
  //Chequear si el id no esta repetido en la propia función o chequearlo en el principal
  if (aP->tope == MAX_PUERTOS - 1){
    cout << "Ya se ha alcanzado la cantidad máxima de puertos. \n";
  }
  else{
    //Puerto p(id,nombre,fechaCreacion); 
    Puerto* p = new Puerto(id,nombre,fechaCreacion);
    aP->tope++;
    aP->arr_Puerto[aP->tope] = p;
  }
    
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
Col(DtPuerto) listarPuertos(){}
void agregarArribo(string idPuerto, string idBarco, float cargaDespacho){}
Col(DtArribo) obtenerInfoArribosEnPuerto(string idPuerto){}
void eliminarArribos(string idPuerto, const DtFecha& fecha){}
Col(DtBarco*)listarBarcos(){}
*/

