#include "../include/Logica.h"
#include <string>
#include <stdlib.h>
#include <ctime>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
const int MAX_PUERTOS = 32;
const int MAX_BARCOS = 32;
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
struct Array_barcos {
  DtBarco* arregloBarco[MAX_BARCOS];
  int tope = -1;
} aB;

struct Array_puertos {
  Dtpuerto* arreglopuerto[MAX_PUERTOS];
  int tope = -1;
} aP;
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void agregarBarco(DtBarco& barco){
    if(aB.tope < 0){
        aB.arregloBarco[0] = &barco;
        aB.tope++;
    }
    else {
        bool barcoRepetido = false;
        for(int i = 0; i++; i<=aB.tope){
          if(aB.arregloBarco[i]->get_id() == barco.get_id()){
              throw std::invalid_argument("Ya existe barco con ese identificador."); 
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
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
controlidPuerto(String id){
bool puertoRepetido = false;
  if (aP.tope >-1){
    int i = 0;
        while (i<=aP.tope && puertoRepetido==false){
          if(aP.arregloPuerto[i]->get_id() == id){
              throw std::invalid_argument("Ya existe puerto con ese identificador."); 
              puertoRepetido = true;}
          i++;
}
    
void agregarPuerto(string id, string nombre, const DtFecha& fechaCreacion){
  //Se hace previamente el control del id
  puerto port= new dtpuerto(id,nombre,DtFecha,0); 
  
  if(aP.tope < 0){
        aP.arregloPuerto[0] = &port;
        aP.tope++;
    } else {
    if (aP.tope<MAX_PUERTOS){
  aP.arregloPuerto[aP.tope] = &port;
    aP.tope++; }else {cout << "No se pueden insertar mas puertos";}
  
  }
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////






Col(DtPuerto) listarPuertos(){}
void agregarArribo(string idPuerto, string idBarco, float cargaDespacho){}
Col(DtArribo) obtenerInfoArribosEnPuerto(string idPuerto){}
void eliminarArribos(string idPuerto, const DtFecha& fecha){}
Col(DtBarco*)listarBarcos(){}
