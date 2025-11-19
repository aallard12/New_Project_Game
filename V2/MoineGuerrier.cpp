/* --- MoineGuerrier.cpp --- */

/* ------------------------------------------
author: LeBGAnto
date: 26/10/2025
------------------------------------------ */

#include "MoineGuerrier.h"

MoineGuerrier::MoineGuerrier(int _pv, int _attaque, int _pvMax, int _xp, int _niveau) :
    Heros(_pv, _attaque, _pvMax, _xp, _niveau)
{
    // Constructor
}

MoineGuerrier::~MoineGuerrier()
{
    // Destructor
}

void MoineGuerrier::afficherActions()
{
    Heros::afficherActions();
    if (!justOnce) {
        cout << "2. Frappe Spirituelle" << endl;
    } else {
        cout << "Vous avez déjà utilisé votre pouvoir !" << endl;
    }
}