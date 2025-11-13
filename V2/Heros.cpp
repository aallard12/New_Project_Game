/* --- Heros.cpp --- */

/* ------------------------------------------
author: LeBGAnto
date: 04/11/2025
------------------------------------------ */

#include "Heros.h"

Heros::Heros(int _pv, int _attaque, int _pvMax, int _xp, int _niveau):
    pv(_pv), attaque(_attaque), pvMax(_pvMax), xp(_xp), niveau(_niveau)
{
    // Constructor
}

Heros::~Heros()
{
    // Destructor
}

int Heros::getPv() {
    return pv;
}
void Heros::setPv(int& value) {
    pv = value;
}
int Heros::getAttaque() {
    return attaque;
}
void Heros::setAttaque(int& value) {
    attaque = value;
}
