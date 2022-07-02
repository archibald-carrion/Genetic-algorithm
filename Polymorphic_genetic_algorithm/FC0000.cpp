#include "Producto.h"
#include "AmbienteBichoRaro.h"
#include "FC0000.h"
#include<string>
using namespace std;

FC0000::FC0000(string nombre){
   this->setNombre(nombre);
}

Producto * FC0000::getProducto(){
   return new AmbienteBichoRaro();
}
