#include "FA0302.h"
//#include "AlgoritmoGenetico.h"
#include "Algoritmo0302.h"
#include "Producto.h"

/**
 *  @brief descrp
 **/
FA0302::FA0302(string name){
    setNombre(name);
}

/**
 *  @brief descrp
 *  @return descrp
 **/
AlgoritmoGenetico* FA0302::getProducto(){
    Algoritmo0302* algoritmo = new Algoritmo0302();
    return algoritmo;
    //create a new Algoritmo0302 and return it as a Producto
}