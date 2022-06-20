#include "CyborgCreature.h"

CyborgCreature::CyborgCreature(int attr[10])
{
    for(int counter=0; counter<QUANTITY_ATTRIBUTES; ++counter){
        attributes[counter] = attr[counter];
    }
}

CyborgCreature::~CyborgCreature()
{
}

int CyborgCreature::fitness()
{
}

void CyborgCreature::mutate()
{
}

ostream &CyborgCreature::print(ostream &)
{
}

Creature *CyborgCreature::clone()
{
}