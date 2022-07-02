#include "Producto.h"
#include "Simple.h"
#include "FA0000.h"
#include<string>
using namespace std;

FA0000::FA0000(string nombre){
   this->setNombre(nombre);
}

Producto * FA0000::getProducto(){
   return new Simple();
}
