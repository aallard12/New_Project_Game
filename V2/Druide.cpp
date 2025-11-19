/* --- Druide.cpp --- */

/* ------------------------------------------
author: LeBGAnto
date: 26/10/2025
------------------------------------------ */

#include "Druide.h"

Druide::Druide(int _pv, int _attaque, int _pvMax, int _xp, int _niveau) : 
    Heros(_pv, _attaque, _pvMax, _xp, _niveau)
{
    // Constructor
}

Druide::~Druide()
{
    // Destructor
}

void Druide::afficherActions()
{
    Heros::afficherActions();
    if (!justOnce) {
        cout << "2. Soin" << endl;
    } else {
        cout << "Vous avez déjà utilisé votre pouvoir !" << endl;
    }
}
