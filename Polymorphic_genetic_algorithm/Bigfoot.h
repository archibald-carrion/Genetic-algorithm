#ifndef BIGFOOT_CRIATURA
#define BIGFOOT_CRIATURA
#include "Criatura.h"

#define MAX_ATRIBUTO 99
#define MIN_ATRIBUTO 0
#define ALTURA 0
#define PESO 1
#define PELAJE 2
#define VELOCIDAD 3
#define FUERZA 4
#define INTELLIGENCIA 5

class Bigfoot : public Criatura
{
private:
    int atributo[6];                       // attributos del Bigfoot, varian de 0 a 99

public:
    Bigfoot();                             // crea un Bigfoot random
    Bigfoot(int, int, int, int, int, int); // crea un Bigfoot con attributos especificos
    Criatura *mutar();                     // devuelve la criatura base con mutaciones
    Criatura **cruzar(Criatura *);         // devuelve un vector de criaturas que termian en 0
    Criatura *clonar();                    // devuelve una instencia igual a la misma criatura
    Criatura *opuesto();                   // devuelve el contrario de la criatura
    int esIgualA(Criatura *);              // verifica si 2 criaturas son iguales
    ostream &imprimir(ostream &);          // imprime la criatura en la salida estandar
};
#endif