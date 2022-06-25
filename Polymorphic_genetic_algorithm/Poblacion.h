#ifndef POBLACION
#define POBLACION
#define MAX_CANTIDAD 100
#include "Criatura.h"
#include<iostream>
using namespace std;

class Poblacion {
   friend ostream& operator<<(ostream& salida, Poblacion * p){
      return p->imprimir(salida);
   }
   private:
      Criatura * criatura[MAX_CANTIDAD];
	  int cantidad;
      int actual;
	  
   public:
     Poblacion();
     ~Poblacion();// Poblacion mata sus bichos
	 void add(Criatura *);
	 Criatura * next(); // retorna acceso a bicho actual++
	 void begin();
     ostream& imprimir(ostream & );
};

#endif
