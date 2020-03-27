#include <string>
#include <stdlib.h>

void agregarPuerto(string id, string nombre, const DtFecha& fechaCreacion){}
void agregarBarco(DtBarco& barco) {}
Col(DtPuerto) listarPuertos(){}
void agregarArribo(string idPuerto, string idBarco, float cargaDespacho){}
Col(DtArribo) obtenerInfoArribosEnPuerto(string idPuerto){}
void eliminarArribos(string idPuerto, const DtFecha& fecha){}
Col(DtBarco*)listarBarcos(){}
