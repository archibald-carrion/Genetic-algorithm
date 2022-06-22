#ifndef ALGORITMO
#define ALGORITMO
#include "Ambiente.h"
#include "Poblacion.h"

class AlgoritmoGenetico : public Producto {
	protected:
	   Ambiente * ambiente;
	public:
	  void setAmbiente(Ambiente * ambiente){
		this->ambiente = ambiente;  
	  }
	
	  virtual Poblacion * crearPoblacionInicial()=0;
	  virtual Poblacion * evolucionar(Poblacion *)=0;
	  
	  virtual ~AlgoritmoGenetico(){};
};
#endif
