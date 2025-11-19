/* --- Cowboy.cpp --- */

/* ------------------------------------------
author: LeBGAnto
date: 25/10/2025
------------------------------------------ */

#include "Cowboy.h"

Cowboy::Cowboy(int _pv, int _attaque, int _pvMax, int _xp, int _niveau, bool _coupDeux) : 
    Heros(_pv, _attaque, _pvMax, _xp, _niveau), coupDeux(_coupDeux)
{
    // Constructor
}

Cowboy::~Cowboy()
{
    // Destructor
}

void Cowboy::afficherActions()
{
    Heros::afficherActions();
    if (!justOnce) {
        cout << "2. Deuxième Coup" << endl;
    } else {
        cout << "Vous avez déjà utilisé votre pouvoir !" << endl;
    }
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