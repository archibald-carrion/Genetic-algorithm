#ifndef AMBIENTE_COLDMOUNTAIN
#define AMBIENTE_COLDMOUNTAIN
#include "Ambiante.h"
//#include "Criatura.h"

class ColdMountain : public Ambiente
{
public:
    ColdMountain();
    Criatura *getCriatura();
    double fitness(Criatura *);
};
#endif
