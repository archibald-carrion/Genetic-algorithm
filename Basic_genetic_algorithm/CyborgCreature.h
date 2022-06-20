#ifndef CYBORG_CREATURE
#define CYBORG_CREATURE
#include "Creature.h"

#define QUANTITY_ATTRIBUTES 10

struct CyborgCreature : private Creature
{
private:
    int attributes[QUANTITY_ATTRIBUTES];     //all the characteristics of the cyborg
public:
    CyborgCreature(int[10]);
    ~CyborgCreature();
    int fitness();         
    void mutate();
    ostream &print(ostream &);
    Creature *clone();
};
#endif