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

/**
 *  @brief Metodo constructor de Bigfoot, recibe 6 int, los cuales son los atributos del Bigfoot, el metodo no devuelve nada
 *  @param altura altura es un parametro int que se usa para asignar la altura del Bigfoot
 *  @param peso peso es un parametro int que se usa para asignar el peso del Bigfoot
 *  @param pelaje pelaje es un parametro int que se usa para asignar la cantidad de pelaje del Bigfoot
 *  @param velocidad velocidad es un parametro int que se usa para asignar la velocidad del Bigfoot
 *  @param fuerza fuerza es un parametro int que se usa para asignar la fuerza del Bigfoot
 *  @param intelligencia intelligencia es un parametro int que se usa para asignar la intelligencia del Bigfoot
 **/
Bigfoot::Bigfoot(int altura, int peso, int pelaje, int velocidad, int fuerza, int intelligencia)
{
    if (altura <= MAX_ATRIBUTO && altura >= MIN_ATRIBUTO)
    {
        atributo[ALTURA] = altura;
    }
    else
    {
        atributo[ALTURA] = 0;
    }

    if (peso <= MAX_ATRIBUTO && peso >= MIN_ATRIBUTO)
    {
        atributo[PESO] = peso;
    }
    else
    {
        atributo[PESO] = 0;
    }

    if (pelaje <= MAX_ATRIBUTO && pelaje >= MIN_ATRIBUTO)
    {
        atributo[PELAJE] = pelaje;
    }
    else
    {
        atributo[PELAJE] = 0;
    }

    if (velocidad <= MAX_ATRIBUTO && velocidad >= MIN_ATRIBUTO)
    {
        atributo[VELOCIDAD] = velocidad;
    }
    else
    {
        atributo[VELOCIDAD] = 0;
    }

    if (fuerza <= MAX_ATRIBUTO && fuerza >= MIN_ATRIBUTO)
    {
        atributo[FUERZA] = fuerza;
    }
    else
    {
        atributo[FUERZA] = 0;
    }

    if (intelligencia <= MAX_ATRIBUTO && intelligencia >= MIN_ATRIBUTO)
    {
        atributo[INTELLIGENCIA] = intelligencia;
    }
    else
    {
        atributo[INTELLIGENCIA] = 0;
    }
}