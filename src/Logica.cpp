#include "../include/Logica.h"
#include <string>
#include <stdlib.h>
#include <ctime>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//const int MAX_PUERTOS = 32;
//const int MAX_BARCOS = 32;
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
struct Array_barcos
{
  Barco *arregloBarco[MAX_BARCOS];
  int tope = -1;
} aB;



struct Array_puertos
{
  Puerto *arr_Puerto[MAX_PUERTOS];
  int tope = -1;
};

typedef Array_puertos *arr_pt;
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
      //cout << "I: " << i << "ID: " << aB.arregloBarco[i]->getid() << "\n";
      if (aB.arregloBarco[i]->getid() == id)
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
  DtBarcoPesquero *barcoObj = dynamic_cast<DtBarcoPesquero *>(&barco);
  Barco *aAgregar;
  if (barcoObj == NULL)
  {
    DtBarcoPasajeros *barcoPas = dynamic_cast<DtBarcoPasajeros *>(&barco);
    aAgregar = new BarcoPasajeros(barcoPas->get_id(), barcoPas->get_nombre(), barcoPas->get_cantPasajeros(), barcoPas->get_tamanio());
  }
  else
  {
    aAgregar = new BarcoPesquero(barcoObj->get_id(), barcoObj->get_nombre(), barcoObj->get_capacidad(), barcoObj->get_carga());
  }

  if (aB.tope < MAX_BARCOS)
  {
    aB.tope++;
    aB.arregloBarco[aB.tope] = aAgregar;
  }
  else
  {
    cout << "No se pueden agregar mas barcos";
  }
  /*
  if (cB.tope < MAX_BARCOS)
  {
    cB.tope++;
    cB.colBarco[cB.tope] = &barco;
  }
  else
  {
    cout << "No se pueden agregar mas barcos";
  } */
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
bool idPuertoRepetido(string id)
{
  int i = 0;
  if (aP->tope == -1)
  {
    i = 0;
  }
  else
  {
    while ((i <= aP->tope) && (aP->arr_Puerto[i]->GetPuertoId() != id))
    {
      i++;
    }
  }
  return (i <= aP->tope); /* si i es menor o igual al tope es porque el while se corto con la condicion (aP->arr_Puerto[i] != id) */
}

void agregarPuerto(string id, string nombre, const DtFecha &fechaCreacion)
{
  //Chequear si el id no esta repetido en la propia función o chequearlo en el principal
  if (aP->tope == MAX_PUERTOS - 1)
  {

    cout << "Ya se ha alcanzado la cantidad máxima de puertos. \n";
  }
  else
  {
    //Puerto p(id,nombre,fechaCreacion);
    Puerto *p = new Puerto(id, nombre, fechaCreacion);
    aP->tope++;
    aP->arr_Puerto[aP->tope] = p;
  }
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int obtener_cantarribos(Puerto* p){
  return p->Puer_Arr.tope + 1;
}

col_dtPuerto listarPuertos(){
  col_dtPuerto ret;
  ret.tope = aP->tope;
  if (ret.tope != -1){
    for (int i = 0;i<=ret.tope;i++){
      DtPuerto *res = new DtPuerto(aP->arr_Puerto[i]->GetPuertoId(),aP->arr_Puerto[i]->GetPuertoNombre(),aP->arr_Puerto[i]->GetPuertoFecha(),obtener_cantarribos(aP->arr_Puerto[i]));
      ret.col_dtP[i] = *res;
      cout << ret.col_dtP[i];
  }
}
  return ret;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void agregarArribo(string idPuerto, string idBarco, float cargaDespacho)
{

  // int i = 0;
  // Barco *Barquito2;
  // while (i <= aB.tope)
  // {
  //   if (aB.arregloBarco[i]->getid() == idBarco)
  //   {
  //     Barquito2 = aB.arregloBarco[i];
  //     i = aB.tope;
  //   }
  //   i++;
  // }
  // try
  // {
  //   BarcoPesquero *barcoObj = dynamic_cast<BarcoPesquero *>(Barquito2);
    
  //   if(barcoObj == NULL && cargaDespacho != 0)
  //     throw std::invalid_argument("\n La carga despachada no puede ser distinta de 0 cuando arriba un barco de pasajeros.");
  //   else if( barcoObj != NULL && (barcoObj->getCarga() - cargaDespacho) > (barcoObj->getCapacidad()) )
  //     throw std::invalid_argument("\n Se sobrepasa la capacidad del barco con el valor de carga.");
  //   else if( barcoObj != NULL && (barcoObj->getCarga() - cargaDespacho) < 0)
  //     throw std::invalid_argument("\n El barco no tiene la suficiente carga como para realizar el arribo.");
  //   else{
  //       i=0;
  //       Puerto *P;
  //       while (i <= aP->tope)
  //       {
  //         if (aP->arr_Puerto[i]->GetPuertoId() == idPuerto)
  //         {
  //           P = aP->arr_Puerto[i];
  //           i = aP->tope;
  //         }
  //         i++;
  //       }
  //       if (obtener_cantarribos(P) == 30)
  //            throw std::invalid_argument("\n El puerto tiene 30 arribos y no puede tener mas.");
  //       else{

  //         time_t t = time(NULL);
  //         tm *timePtr = localtime(&t);
  //         DtFecha FechaActual(timePtr->tm_mday, timePtr->tm_mon, timePtr->tm_year + 1900);
  //         Barquito2->arribar(cargaDespacho);
  //         Arribo *a = new Arribo(FechaActual, cargaDespacho, Barquito2);

  //         DtBarco Barquito1;
  //         i = 0;
  //         while (i <= cB.tope)
  //         {
  //           if (cB.colBarco[i]->get_id() == idBarco)
  //           {
  //             Barquito1 = *cB.colBarco[i];
  //             i = cB.tope;
  //           }
  //           i++;
  //         }
        
  //         DtArribo dta(FechaActual, cargaDespacho, Barquito1);

  //         P->Puer_Arr.arrA[P->Puer_Arr.tope + 1] = a;
  //         P->Puer_Arr.tope++;
  //         }
  //     }
  //   }
  //   catch(const std::exception& e)
  //   {
  //     std::cerr << e.what() << '\n';
  //   }
}



void obtenerInfoArribosEnPuerto(string idPuerto)
{
  bool puertoEncontrado = false;
  int i = 0;
  //Recorrer array de puertos hasta encontrar el id que quiero
  //Siempre va a encontrar un puerto. Porque la comprobacion de existencia esta en principal
  Puerto* PuertoSeleccionado = NULL; 
  while (i <= aP->tope && puertoEncontrado == false)
  {
    if (aP->arr_Puerto[i]->GetPuertoId() == idPuerto)
    {
      PuertoSeleccionado = aP->arr_Puerto[i];
      puertoEncontrado = true;
    }
  i++;
  }
  i =0;
  while (i <= PuertoSeleccionado->Puer_Arr.tope )
  { 
    cout << "Arribo " << i + 1;
    cout << "\nBarco id: " << PuertoSeleccionado->Puer_Arr.arrA[i]->GetArriboBarco()->getid() << "  Barco Nombre: " <<  PuertoSeleccionado->Puer_Arr.arrA[i]->GetArriboBarco()->getnombre();
    cout << "\nCarga despachada: " << PuertoSeleccionado->Puer_Arr.arrA[i]->GetArriboCarga();
    cout << "\nFecha: " << PuertoSeleccionado->Puer_Arr.arrA[i]->GetArriboFecha().getD() << "/" << PuertoSeleccionado->Puer_Arr.arrA[i]->GetArriboFecha().getM() << "/" << PuertoSeleccionado->Puer_Arr.arrA[i]->GetArriboFecha().getA();
    cout << "\n\n";
    i++;
  }
  //return PuertoSeleccionado->Puer_Arr; //Puerr_Arr está declarado como public
}



//////////////////////////////////////////////////////////////////////////////////////////////////////////////

void eliminarArribos(string idPuerto, const DtFecha& fecha){}
/*{
    arr_Arribos ArribosDelPuerto = obtenerInfoArribosEnPuerto(idPuerto);
    for(int i=0;i++;i<=ArribosDelPuerto.tope)
    { //Recorrer los arribos e ir borrando  aquellos cuya fecha sean iguales a fecha
        if(ArribosDelPuerto.arrA[i]->GetArriboFecha()==fecha)
        {
            ArribosDelPuerto.arrA[i]->~Arribo();//Eliminar el arribo
            for(int l=i;l++;l<ArribosDelPuerto.tope)
              ArribosDelPuerto.arrA[l]=ArribosDelPuerto.arrA[l+1];

            ArribosDelPuerto.tope--;
        }
    }
    
}*/


//////////////////////////////////////////////////////////////////////////////////////////////////////////////
Col_barcos listarBarcos()
{
  Col_barcos cB;
  for (int j = 0; j <= aB.tope; j++)
  {  
    Barco *actual = aB.arregloBarco[j];
    BarcoPesquero *barcoObj = dynamic_cast<BarcoPesquero *>(actual);
    if(barcoObj == NULL){
        BarcoPasajeros* barcoPas = dynamic_cast<BarcoPasajeros*>(actual);
        cB.tope++;
        DtBarcoPasajeros* pas = new DtBarcoPasajeros(barcoPas->getnombre(),barcoPas->getid(),barcoPas->getCantPasajeros(),barcoPas->getTamanio()); 
        cB.colBarco[cB.tope] = pas;
    }
    else{
       cB.tope++;
       //DtBarcoPesquero* pes(barcoObj->getnombre(),barcoObj->getid(),barcoObj->getCapacidad(),barcoObj->getCarga())
       DtBarcoPesquero* pes = new DtBarcoPesquero(barcoObj->getnombre(),barcoObj->getid(),barcoObj->getCapacidad(),barcoObj->getCarga());
       cB.colBarco[cB.tope] = pes;
    }
  }
  return cB;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////

void imprimirBarcos(){
    Col_barcos Barcos = listarBarcos();
    for(int j = 0; j <= Barcos.tope; j++){
      DtBarco *actual = Barcos.colBarco[j];
      DtBarcoPesquero *barcoObj = dynamic_cast<DtBarcoPesquero *>(actual);
      if(barcoObj == NULL){
        DtBarcoPasajeros *barcoPas = dynamic_cast<DtBarcoPasajeros*>(actual);
        cout << *barcoPas;
        cout << "\n";
      }
      else{
        cout << *barcoObj;
        cout << "\n";
      } 
    } 
}