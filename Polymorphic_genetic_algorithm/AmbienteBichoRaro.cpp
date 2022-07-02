#include "Criatura.h"
#include "BichoRaro.h"
#include "AmbienteBichoRaro.h"
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <math.h>       /* time */

AmbienteBichoRaro::AmbienteBichoRaro(){
	srand(time(NULL));
	for(int i=0; i<4;++i){
	  c[i] = (int) (rand()%100+1); 
	}
	
}
Criatura * AmbienteBichoRaro::getCriatura(){
	BichoRaro * bicho = new BichoRaro(0,0,0,0);
	for(int i=0; i<4;++i){
	  bicho->v[i] = (int) (rand()%100+1); 
	}	
	return bicho;
}

double AmbienteBichoRaro::fitness(Criatura * otro){
	BichoRaro * bicho = dynamic_cast< BichoRaro * >(otro);
        double producto = 0;
	double cuadrado1 = 0;
	double cuadrado2 = 0;
	for(int i=0; i<4;++i){
		producto+= this->c[i] * bicho->v[i];
		cuadrado1+= this->c[i] * this->c[i];
		cuadrado2+= bicho->v[i] * bicho->v[i];
	}
	double distancia = producto / sqrt( cuadrado1 * cuadrado2);
        
    return distancia;
}
