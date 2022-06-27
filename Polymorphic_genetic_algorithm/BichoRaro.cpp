
#include "Criatura.h"
#include "BichoRaro.h"
#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h> 
using namespace std;
    BichoRaro::BichoRaro(int x1, int y1, int x2, int y2){
	   this->v[0] = x1;
	   this->v[1] = y1;
	   this->v[2] = x2;
	   this->v[3] = y2;
	}

    Criatura * mutar(){
		BichoRaro * clon = dynamic_cast<BichoRaro *>(this->clonar());
        srand (time(NULL));
        int i = (int) (rand() % 4);
		int pos = (int) (rand() % 2);
		if(pos==0){
		   (clon->v[i])--;
		}
		else {
		   (clon->v[i])++;	
		}
		return clon;
	}
	  Criatura ** BichoRaro::cruzar( Criatura * otra){		  
	      BichoRaro ** hijo = new BichoRaro * [3];
          hijo[0] = dynamic_cast<BichoRaro *>(this->clonar());
          hijo[1] = dynamic_cast<BichoRaro *>(otra->clonar());		  
          hijo[2] = 0;
		  if(hijo[1]){
			  int corte = (int) (rand() % 4);
			  for(int i=0; i<corte;i++){
				 int valor = hijo[0]->v[i];
                 hijo[0]->v[i] = hijo[1]->v[i];
                 hijo[1]->v[i] = valor;				 
			  }
		  }
		  return hijo;
      }
	  
      Criatura * BichoRaro::clonar(){
		  BichoRaro otro = new BichoRaro(this->v[0],this->v[1],this->v[2],this->v[3]);
		  return otro;
	  }
	  
	  Criatura * BichoRaro::opuesto(){
		  BichoRaro * otro = new BichoRaro(this->v[0],-1*this->v[1],this->v[2],-1*this->v[3]);
		  return otro;
	  }
      int BichoRaro::esIgualA(Criatura *);
	  ostream& BichoRaro::imprimir(ostream&);
};
#endif	  