/* --- Boxeur.cpp --- */

/* ------------------------------------------
author: LeBGAnto
date: 26/10/2025
------------------------------------------ */

#include "Boxeur.h"

Boxeur::Boxeur(int _pv, int _attaque, int _pvMax, int _xp, int _niveau, bool _upper) :
    Heros(_pv, _attaque, _pvMax, _xp, _niveau), upper(_upper)
{
    // Constructor
}

Boxeur::~Boxeur()
{
    // Destructor
}

int Boxeur::attaquer()
{
    int somme = 0;
    if (upper){
        somme += attaque * 3;
        pv -= pv * 0,2;
        upper = false;
    } else {
        somme = attaque;
    }
    
    return somme;
}

void Boxeur::uppercut()
{
    upper = true;
}

bool Boxeur::getUpper() {
    return upper;
}
void Boxeur::setUpper(bool& value) {
    upper = value;
}