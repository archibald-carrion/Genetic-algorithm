#ifndef FABRICA_FC0302
#define FABRICA_FC0302
#include "Fabrica.h"
#include "Ambiente.h"
#include "Producto.h"

class FC0302 : public Fabrica
{
public:
    FC0302(string);
    Producto *getProducto();
};
#endif