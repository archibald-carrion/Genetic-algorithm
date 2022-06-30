#ifndef ALGORITMO_0302
#define ALGORITMO_0302
#include "AlgoritmoGenetico.h"
//#include "Poblacion.h"

class Algoritmo0302 : public AlgoritmoGenetico
{
//private:
    //Criatura **poblacion;   //para guardar la poblacion inicial

public:
    Poblacion *crearPoblacionInicial();
    Poblacion *evolucionar(Poblacion *);
    int verificarCondicion25(Criatura**, double);
    Criatura** nuevaGeneracion(Criatura**);
    int poblacionSize(Criatura**);
};
#endif