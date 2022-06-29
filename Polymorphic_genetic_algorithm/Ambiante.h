#ifndef AMBIENTE
#define AMBIENTE
#include "Criatura.h"
#include "Producto.h"

class Ambiente : public Producto {
	public:
	  virtual Criatura * getCriatura()=0;
	  virtual double fitness(Criatura *)=0;
	  virtual ~Ambiente(){};
};
#endif
