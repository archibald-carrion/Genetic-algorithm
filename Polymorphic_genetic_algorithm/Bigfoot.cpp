#include "Bigfoot.h"
#include "Criatura.h"
#include <stdlib.h> // biblioteca random
#include <time.h>

/**
 *  @brief Metodo constructor por omisión de Bigfoot, recibe parametros y no devuelve nada
 **/
Bigfoot::Bigfoot()
{
    srand(time(NULL));
    for (int counter = 0; counter < 6; ++counter)
    {
        atributo[counter] = rand() % 100;
    }
}
