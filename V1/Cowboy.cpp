/* --- Cowboy.cpp --- */

/* ------------------------------------------
author: LeBGAnto
date: 25/10/2025
------------------------------------------ */

#include "Cowboy.h"

Cowboy::Cowboy(int _pv, int _attaque, bool _coupDeux) : 
    Heros(_pv, _attaque), coupDeux(_coupDeux)
{
    // Constructor
}

Cowboy::~Cowboy()
{
    // Destructor
}

int Cowboy::attaquer()
{
    int somme = 0;
    if (coupDeux){
        somme += attaque + attaque * 1,5;
        coupDeux = false;
    } else {
        somme += attaque;
    }

    return somme;
}

void Cowboy::deuxiemeCoup()
{
    coupDeux = true;
}

bool Cowboy::getCoupDeux() {
    return coupDeux;
}
void Cowboy::setCoupDeux(bool& value) {
    coupDeux = value;
}