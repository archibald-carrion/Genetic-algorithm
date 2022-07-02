#ifndef FABRICA_AMBIENTE_BICHORARO
#define FABRICA_AMBIENTE_BICHORARO
#include "Producto.h"
#include "Fabrica.h"
#include<string>
using namespace std;

class FC0000 : public Fabrica {
   public:
      FC0000(string);
      Producto * getProducto();
};

#endif
