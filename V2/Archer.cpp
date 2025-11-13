/* --- Archer.cpp --- */

/* ------------------------------------------
author: LeBGAnto
date: 25/10/2025
------------------------------------------ */

#include "Archer.h"

Archer::Archer(int _pv, int _attaque, int _pvMax, int _xp, int _niveau, int _nbFleches) :
    Heros(_pv, _attaque, _pvMax, _xp, _niveau), nbFleches(_nbFleches)
{
    // Constructor
}

Archer::~Archer()
{
    // Destructor
}

int Archer::attaquer()
{
    int somme = 0;
    somme += attaque + 5 * nbFleches;
    return somme;
}

void Archer::nouveauCarquois()
{
    int nombre = rand() % 4 + 2;
    nbFleches = nombre;
}

void Archer::carquoisPrécédent()
{
    nbFleches = 1;
}

int Archer::getNbFleches() {
    return nbFleches;
}
void Archer::setNbFleches(int& value) {
    nbFleches = value;
}