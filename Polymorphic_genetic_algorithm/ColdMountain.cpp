#include "ColdMountain.h"
#include "Bigfoot.h"

ColdMountain::ColdMountain()
{
}

Criatura *ColdMountain::getCriatura()
{
    Bigfoot *bigfoot = new Bigfoot();
    return bigfoot;
}

double ColdMountain::fitness(Criatura *criatura)
{
    // permite saber que tan adaptado criatura es
}