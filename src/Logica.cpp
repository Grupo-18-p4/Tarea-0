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

struct Array_puertos
{
  DtPuerto *arreglopuerto[MAX_PUERTOS];
  int tope = -1;
} aP;

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
void controlidPuerto(string id)
{
  bool puertoRepetido = false;
  if (aP.tope > -1)
  {
    int i = 0;
    while (i <= aP.tope && puertoRepetido == false)
    {
      if (aP.arreglopuerto[i]->getid() == id)
      {
        throw std::invalid_argument("Ya existe puerto con ese identificador.");
        puertoRepetido = true;
      }
      i++;
    }
  }
}
void agregarPuerto(string id, string nombre, const DtFecha &fechaCreacion)
{
  //Se hace previamente el control del id
  DtPuerto port(id, nombre, fechaCreacion, 0);

  if (aP.tope < 0)
  {
    aP.arreglopuerto[0] = &port;
    aP.tope++;
  }
  else
  {
    if (aP.tope < MAX_PUERTOS)
    {
      aP.arreglopuerto[aP.tope] = &port;
      aP.tope++;
    }
    else
    {
      cout << "No se pueden insertar mas puertos";
    }
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