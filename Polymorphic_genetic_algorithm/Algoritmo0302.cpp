#include "Algoritmo0302.h"
#include "Poblacion.h"
#include <stdlib.h> // biblioteca random
#include <time.h>

/**
 *  @brief El metodo crearPoblacionInicial permite crear una poblacion inicial de 50 individuos random dados por el ambiente
 *  @return El metodo devuelve un puntero hacia una instencia de Poblacion, la cual es la poblacion que acaba de crear
 **/
Poblacion *Algoritmo0302::crearPoblacionInicial()
{
    Poblacion *poblacionInicial = new Poblacion();
    srand(time(NULL));
    for (int counter = 0; counter < 50; ++counter)
    {
        Criatura *criatura = (*ambiente).getCriatura();
        (*poblacionInicial).add(criatura); // la poblacion inicial es de 50 individuos randoms
        // poblacion[counter] = criatura;
    }
    (*poblacionInicial).add(0);
    return poblacionInicial;
}

