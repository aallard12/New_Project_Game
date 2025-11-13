/* --- Sorcier.cpp --- */

/* ------------------------------------------
author: LeBGAnto
date: 25/10/2025
------------------------------------------ */

#include "Sorcier.h"

Sorcier::Sorcier(int _pv, int _attaque, int _pvMax, int _xp, int _niveau, bool _burnt) :
    Heros(_pv, _attaque, _pvMax, _xp, _niveau), burnt(_burnt)
{
    // Constructor
}

Sorcier::~Sorcier()
{
    // Destructor
}

bool Sorcier::bruler()
{
    static std::random_device rd;  // Source d'entropie
    static std::mt19937 gen(rd()); // Générateur Mersenne Twister
    static std::uniform_int_distribution<> distrib(0, 1); // Distribution uniforme entre 0 et 1
    
    burnt = (distrib(gen) == 1);
    return burnt;
}

int Sorcier::attaquer()
{
    int somme = 0;
    if (burnt){
        somme += attaque + 0,1 * attaque;
    } else {
        somme = attaque;
    }
    
    return somme;
}

bool Sorcier::getBurnt() {
    return burnt;
}
void Sorcier::setBurnt(bool& value) {
    burnt = value;
}