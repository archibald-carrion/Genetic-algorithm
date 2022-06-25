#ifndef _CRIATURA
#define _CRIATURA
#include <iostream>
using namespace std;
class Criatura
{
    friend ostream &operator<<(ostream &salida, Criatura *c)
    {
        return c->imprimir(salida);
    }

public:
    virtual Criatura *mutar() = 0;             // Crea una nueva criatuar con una mutación
    virtual Criatura **cruzar(Criatura *) = 0; // Cruza y genera vector de criaturas hijas terminado en 0
    virtual Criatura *clonar() = 0;
    virtual Criatura *opuesto() = 0; // Una criatura contraria a la que se tiene
    virtual int esIgualA(Criatura *) = 0;
    int operator==(Criatura *otro)
    {
        return this->esIgualA(otro);
    }
    virtual ~Criatura(){};
    virtual ostream &imprimir(ostream &) = 0;

    /** Ejemplo de cruze de criaturas
    a->cruzar(b)
    Criatura * * hijo = new Criatura * [5]
    hijo[0] = new Tablero(this,b,10,3,cuadrante0);
    hijo[1] = new Tablero(this,b,10,3,cuadrante1);
    hijo[2] = new Tablero(this,b,10,3,cuadrante2);
    hijo[3] = new Tablero(this,b,10,3,cuadrante3);
    hijo[4] = 0; // vector de hijos terminado en 0 null
    retorna un vector con 4 criaturas y un null en este caso
    { Criatura * , Criatura *, Criatura *, Criatura *, 0}
    **/
};
#endif
