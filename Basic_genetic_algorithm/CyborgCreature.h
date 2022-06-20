#ifndef CYBORG_CREATURE
#define CYBORG_CREATURE
#include "Creature.h"

struct CyborgCreature : private Creature
{
public:
    CyborgCreature();
    ~CyborgCreature();
    int fitness(); // return an int from 0 to 100 depending on how adapted to the ambient the creature is
    void mutate();
    ostream &print(ostream &);
    Creature *clone();
};
#endif