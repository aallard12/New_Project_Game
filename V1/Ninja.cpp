/* --- Ninja.cpp --- */

/* ------------------------------------------
author: LeBGAnto
date: 25/10/2025
------------------------------------------ */

#include "Ninja.h"

Ninja::Ninja(int _pv, int _attaque, bool _hided) : 
    Heros(_pv, _attaque), hided(_hided)
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