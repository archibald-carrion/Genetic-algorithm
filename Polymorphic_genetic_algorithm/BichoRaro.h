#ifndef _BichoRaro
#define _BichoRaro
#include "Criatura.h"
#include "AmbienteBichoRaro.h"
#include <iostream>
using namespace std;
class BichoRaro : public Criatura {
   friend class AmbienteBichoRaro;
   
   private:
      int v[4];
	  
   public:
      BichoRaro(int,int,int,int);
      Criatura * mutar();
	  Criatura ** cruzar( Criatura * );
      Criatura * clonar();
	  Criatura * opuesto();
      int esIgualA(Criatura *);
	  ostream& imprimir(ostream&);
};
#endif	  