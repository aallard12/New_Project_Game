/* --- Cavalier.cpp --- */

/* ------------------------------------------
author: LeBGAnto
date: 26/10/2025
------------------------------------------ */

#include "Cavalier.h"

Cavalier::Cavalier(int _pv, int _attaque, int _pvMax, int _xp, int _niveau, bool _fonctionCall) : 
    Heros(_pv, _attaque, _pvMax, _xp, _niveau), fonctionCall(_fonctionCall)
{
    // Constructor
}

Cavalier::~Cavalier()
{
    // Destructor
}

void Cavalier::afficherActions()
{
    Heros::afficherActions();
    if (!justOnce) {
        cout << "2. Ruer" << endl;
    } else {
        cout << "Vous avez déjà utilisé votre pouvoir !" << endl;
    }
}

int Cavalier::attaquer()
{
    int somme = 0;
    if (fonctionCall){
        somme = attaque * 4;
        fonctionCall = false;
    } else {
        somme = attaque;
    }
    return somme;
}

void Cavalier::ruer()
{
    fonctionCall = true;
    justOnce = true;
}

bool Cavalier::getFonctionCall() {
    return fonctionCall;
}
void Cavalier::setFonctionCall(bool& value) {
    fonctionCall = value;
}
