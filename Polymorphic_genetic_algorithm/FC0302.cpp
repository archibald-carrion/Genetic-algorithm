#include "FC0302.h"
//#include "Ambiente.h"
#include "ColdMountain.h"
#include "Producto.h"

Producto* FC0302::getProducto(){
    ColdMountain ambiente();
    return ambiente;
    //create a new ColdMountain and return it as a Producto
}