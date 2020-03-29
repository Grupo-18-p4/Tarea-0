
#ifndef _Logica_
#define _Logica_
#include "Puerto.h"
#include "BarcoPesquero.h"
#include "BarcoPasajeros.h"
#include "DtArribo.h"
#include "DtBarcoPesquero.h"
#include "DtBarcoPasajeros.h"
#include "DtFecha.h"
#include "DtPuerto.h"
#include "Puerto.h"
#include "TipoTamanio.h"
#define MAX_PUERTOS 32
#define MAX_BARCOS  32
struct array_barcos;
struct Array_puertos;
struct Col_barcos{
  DtBarco *colBarco[32];
  int tope = -1;
}; 
struct col_dtPuerto{
  DtPuerto col_dtP[MAX_PUERTOS];
  int tope = -1;
};
struct col_dtPuerto;
bool controlIdBarco(string id);
bool idPuertoRepetido(string id);
void  agregarBarco(DtBarco& barco);
void agregarPuerto(string id, string nombre, const DtFecha& fechaCreacion);
//void Col(DtPuerto) listarPuertos();
void agregarArribo(string idPuerto, string idBarco, float cargaDespacho);
void eliminarArribos(string idPuerto, const DtFecha& fecha);
Col_barcos listarBarcos();
arr_Arribos obtenerInfoArribosEnPuerto(string idPuerto);
col_dtPuerto listarPuertos();
#endif

