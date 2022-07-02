#ifndef FABRICA_SIMPLE
#define FABRICA_SIMPLE
#include "Producto.h"
#include "Fabrica.h"
#include<string>
using namespace std;

class FA0000 : public Fabrica {
   public:
      FA0000(string);
      Producto * getProducto();
};

#endif
