#include "FA0302.h"
//#include "AlgoritmoGenetico.h"
#include "Algoritmo0302.h"
#include "Producto.h"

Producto* FA0302::getProducto(){
    Algoritmo0302 algoritmo();
    return algoritmo;
    //create a new Algoritmo0302 and return it as a Producto
}