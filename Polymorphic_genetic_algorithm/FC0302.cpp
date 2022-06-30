#include "FC0302.h"
//#include "Ambiente.h"
#include "ColdMountain.h"
#include "Producto.h"

/**
 *  @brief descrp
 **/
FC0302::FC0302(string name)
{
    setNombre(name);
}

/**
 *  @brief descrp
 *  @return descrp
 **/
Producto *FC0302::getProducto()
{
    ColdMountain *ambiente = new ColdMountain();
    return ambiente;
    // create a new ColdMountain and return it as a Producto
}