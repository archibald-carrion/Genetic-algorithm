#include "Poblacion.h"
#include "Criatura.h"
#include<iostream>
using namespace std;

Poblacion::Poblacion(){
    cantidad = 0;
    actual = 0;
}

Poblacion::~Poblacion(){
	for(int i=0; i<cantidad;++i){
	   delete criatura[i];	
	}
}// Poblacion mata sus bichos

void Poblacion::add(Criatura * c){
	if(c){
		if(cantidad < MAX_CANTIDAD){
			criatura[cantidad++]=c;
		}
	}
}

Criatura * Poblacion::next(){
   Criatura * retornado = 0;
   if(actual < cantidad){
	  retornado = criatura[actual++]; 
   }
   return retornado;
} // retorna acceso a bicho actual++

void Poblacion::begin(){
	actual = 0;
}

ostream& Poblacion::imprimir(ostream & salida){
	for(int i=0; i < cantidad; ++i){
	   salida << endl << "-----INICIO CRIATURA-----"<< endl;
	   salida << criatura[i] << endl;
	   salida << "-----FIN CRIATURA-----"<< endl;	   
	}
	return salida;
}
