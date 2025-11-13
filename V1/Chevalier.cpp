/* --- Chevalier.cpp --- */

/* ------------------------------------------
author: LeBGAnto
date: 25/10/2025
------------------------------------------ */

#include "Chevalier.h"

Chevalier::Chevalier(int _pv, int _attaque, bool _defense) : 
    Heros(_pv, _attaque), defense(_defense)
{
    // Constructor
}

Chevalier::~Chevalier()
{
    // Destructor
}

int Chevalier::attaquer()
{
    return attaque;
}

bool Chevalier::parer()
{
    /*int bouclier = rand() % 2;
    defense = (bouclier == 1);
    return defense;
    defense = false;*/

    static random_device rd;  // Source d'entropie
    static mt19937 gen(rd()); // Générateur Mersenne Twister
    static uniform_int_distribution <> distrib(0, 1); // Distribution uniforme entre 0 et 1
    
    defense = (distrib(gen) == 1);
    return defense;
}


bool Chevalier::getDefense() {
    return defense;
}
void Chevalier::setDefense(bool& value) {
    defense = value;
}
