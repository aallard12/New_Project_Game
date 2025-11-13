/* --- Ninja.cpp --- */

/* ------------------------------------------
author: LeBGAnto
date: 25/10/2025
------------------------------------------ */

#include "Ninja.h"

Ninja::Ninja(int _pv, int _attaque, int _pvMax, int _xp, int _niveau, bool _hided) : 
    Heros(_pv, _attaque, _pvMax, _xp , _niveau), hided(_hided)
{
    // Constructor
}

Ninja::~Ninja()
{
    // Destructor
}

int Ninja::attaquer()
{
    return attaque;
}

void Ninja::invisible()
{
    hided = true;
}

void Ninja::show()
{
    hided = false;
}

bool Ninja::getHided() {
    return hided;
}
void Ninja::setHided(bool& value) {
    hided = value;
}