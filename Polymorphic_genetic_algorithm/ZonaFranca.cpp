#include "Fabrica.h"
#include "ZonaFranca.h"
// AQUI DEBEN AGREGAR SUS .H 2 POR ESTUDIANTE
// #include "FAQQEE.h" 
// Fabrica Algoritmo de estudiante EE del equipo QQ
// #include "FCQQEE.h"
// Fabrica Ambiente de Criatura del estudiante EE del equipo QQ
#include "FA0000.h" // Algorimto simple 
#include "FC0000.h" // Criatura bichoRaro
#include "FA0302.h"
#include "FC0302.h"
#include <string>
using namespace std;

void ZonaFranca::add(Fabrica * fabrica){
   if(cantidad < MAX_FABRICAS){
	   this->fabrica[cantidad++]=fabrica;
   }
}

ZonaFranca::ZonaFranca(){
	cantidad = 0;
	add( new FA0000("simple"));
	add( new FC0000("bichoRaro"));
	add( new FA0302("FA0302"));
	add( new FC0302("FC0302"));
	
	// Cada uno de ustedes debe agregar el suyo
	// FAQQEE donde QQ numero
}
ZonaFranca::~ZonaFranca(){
   for(int i=0; i<cantidad; ++i){
	   if(fabrica[i]){
		   delete fabrica[i];
	   }
   }	
}
Fabrica * ZonaFranca::getFabrica(string nombre){
	Fabrica * actual = 0;
	for(int i=0; !actual && i<cantidad; ++i){
		if(fabrica[i]&&fabrica[i]->produce(nombre)){
			actual = fabrica[i];
		}
	}
	return actual;
}
