
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

struct array_barcos;
struct Array_puertos;

void  agregarBarco(DtBarco& barco);
void controlidPuerto(string id);
void agregarPuerto(string id, string nombre, const DtFecha& fechaCreacion);
//void Col(DtPuerto) listarPuertos();
void agregarArribo(string idPuerto, string idBarco, float cargaDespacho);
//void Col(DtArribo) obtenerInfoArribosEnPuerto(string idPuerto);
void eliminarArribos(string idPuerto, const DtFecha& fecha);
//void Col(DtBarco*)listarBarcos();

#endif