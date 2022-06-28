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


/**
 *  @brief El metodo mutar crea un Bigfoot identico al bigfoot "original" y lo hace mutar
 *  @return El metodo devuelve un pointer hacia una criatura, la cual en ese caso es el Bigfoot mutado
 **/
Criatura *Bigfoot::mutar()
{
    Bigfoot *bigfootMutado = new Bigfoot(atributo[ALTURA], atributo[PESO], atributo[PELAJE], atributo[VELOCIDAD], atributo[FUERZA], atributo[INTELLIGENCIA]);

    int cantidadMutaciones = (rand() % 6) + 1;
    for (int counter = 0; counter < cantidadMutaciones; ++counter)
    {
        int modifier = (rand() % 100);

        if (modifier % 2 == 0)
        { // par   -> se suma el numero
            modifier = (modifier % 10) + 1;
        }
        else
        { // impar -> se resta el numero
            modifier = (-1) * ((modifier % 10) + 1);
        }
        int indiceAtributo = rand() % 6;
        bigfootMutado->atributo[indiceAtributo] += modifier;

        // en casos de "overflow" o "underflow" se hace un redondeo hacia el extremo mas cercano
        if (bigfootMutado->atributo[indiceAtributo] < 0)
        {
            bigfootMutado->atributo[indiceAtributo] = 0;
        }
        if (bigfootMutado->atributo[indiceAtributo] > 99)
        {
            bigfootMutado->atributo[indiceAtributo] = 99;
        }
    }
    return bigfootMutado;
}

/**
 *  @brief El metodo cruzar permite cruzar 2 Bigfoot
 *  @param otra otra es un puntero que apunta a una instencia de Criatura, vamos a cruzar "this" con otra
 *  @return El metodo devuelve un vector de criaturas (los hijos) que termina en 0
 **/
Criatura **Bigfoot::cruzar(Criatura *otra)
{
    Bigfoot **hijo = new Bigfoot *[3];
    for (int counter = 0; counter < 2; ++counter)
    {
        int atrNew[6];
        for (int counterAtr = 0; counterAtr < 6; ++counterAtr)
        {
            int herencia = rand() % 3;
            if (herencia == 0)
            { // se hace un promedio de este atributo
                int atributoPromedio = ((this->atributo[counterAtr]) + (dynamic_cast<Bigfoot *>(otra->atributo[counterAtr]))) / 2;
                atrNew[counterAtr] = atributoPromedio;
            }
            else
            {
                if (herencia == 1)
                { // el atributo es igual a "otra"
                    atrNew[counterAtr] = dynamic_cast<Bigfoot *>(otra->atributo[counterAtr]);
                }
                else
                { // el atributo es igual a this
                    atrNew[counterAtr] = this->atributo[counterAtr];
                }
            }
        }
        hijo[counter] = new Bigfoot(atrNew[ALTURA], atrNew[PESO], atrNew[PELAJE], atrNew[VELOCIDAD], atrNew[FUERZA], atrNew[INTELLIGENCIA]);
    }
    hijo[2] = 0;

    return hijo;
}

/**
 *  @brief descrp
 *  @param param0 descrp
 *  @param param1 descrp
 *  @return descrp
 **/
Criatura *Bigfoot::clonar()
{
    Bigfoot *clon = new Bigfoot(atributo[ALTURA], atributo[PESO], atributo[PELAJE], atributo[VELOCIDAD], atributo[FUERZA], atributo[INTELLIGENCIA]);
    return clon;
}
