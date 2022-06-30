#ifndef FABRICA_FA0302
#define FABRICA_FA0302
#include "Fabrica.h"
#include "AlgoritmoGenetico.h"
#include "Producto.h"

class FA0302 : public Fabrica
{
public:
    FA0302(string);
    AlgoritmoGenetico *getProducto();
    //~FA0302(){}
};
#endif