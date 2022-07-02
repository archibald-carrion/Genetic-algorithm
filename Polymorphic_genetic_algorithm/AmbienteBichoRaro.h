#ifndef AMBIENTEBICHO
#define AMBIENTEBICHO

#include "Ambiente.h"
#include "Criatura.h"
#include "BichoRaro.h"

class AmbienteBichoRaro : public Ambiente {
	private:
	   int c[4];
	public:
	  AmbienteBichoRaro();
	  Criatura * getCriatura();
	  double fitness(Criatura *);
};
#endif
