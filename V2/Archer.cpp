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

void Archer::afficherActions()
{
    if (!justOnce) {
        cout << "2. Nouveau Carquois" << endl;
    } else {
        cout << "Vous avez déjà utilisé votre pouvoir !" << endl;
    }
}

int Archer::attaquer()
{
    return attaque + 5 * nbFleches;
}

void Archer::nouveauCarquois()
{
    nbFleches = rand() % 4 + 2;
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