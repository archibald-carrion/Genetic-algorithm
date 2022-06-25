#include "ZonaFranca.h"
#include "Fabrica.h"
#include "Producto.h"
#include "AlgoritmoGenetico.h"
#include "Ambiente.h"
#include "Poblacion.h"
#include <string>
#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
   ZonaFranca zonaFranca; // crea las Fabricas y su destructor las destruye
   Fabrica *fabricaDeAlgoritmos;
   Fabrica *fabricaDeAmbientes;
   AlgoritmoGenetico *algoritmo;
   Ambiente *ambiente;
   Poblacion *poblacionInicial;
   Poblacion *poblacionFinal;

   if (argc != 3)
   {
      cout << "Uso: darwin nombre_algoritmo nombre_criatura" << endl;
   }
   else
   {
      for (int i = 0; i < argc; ++i)
      {
         cout << argv[i] << endl;
      }
      fabricaDeAlgoritmos = zonaFranca.getFabrica(argv[1]);
      fabricaDeAmbientes = zonaFranca.getFabrica(argv[2]);
      algoritmo = dynamic_cast<AlgoritmoGenetico *>(fabricaDeAlgoritmos->getProducto());
      ambiente = dynamic_cast<Ambiente *>(fabricaDeAmbientes->getProducto());
      if (algoritmo && ambiente)
      {
         algoritmo->setAmbiente(ambiente);
         poblacionInicial = algoritmo->crearPoblacionInicial();
         if (poblacionInicial)
         {
            cout << "POBLACION INICIAL" << endl;
            cout << poblacionInicial << endl;
            poblacionFinal = algoritmo->evolucionar(poblacionInicial);
            if (poblacionFinal)
            {
               cout << "POBLACION FINAL" << endl;
               cout << poblacionFinal << endl;
               delete poblacionFinal;
            }
            else
            {
               cerr << "Algoritmo: " << argv[1] << " no pudo generar poblacion evolucionada de " << argv[2] << endl;
            }
            delete poblacionInicial;
         }
         else
         {
            cerr << "Algoritmo: " << argv[1] << " no pudo crear poblacion inicial de " << argv[2] << endl;
         }
      }
      else
      {
         if (!algoritmo)
         {
            cerr << "Algoritmo: " << argv[1] << " no existe" << endl;
         }
         if (!ambiente)
         {
            cerr << "No se encontro un ambiente con nombre de criatura: " << argv[2] << endl;
         }
      }
      if (algoritmo)
      {
         delete algoritmo;
      }
      if (ambiente)
      {
         delete ambiente;
      }
   }
   return 0;
}
