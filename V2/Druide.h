/* --- Druide.h --- */

/* ------------------------------------------
Author: LeBGAnto
Date: 26/10/2025
------------------------------------------ */

#include "Heros.h"

#ifndef DRUIDE_H
#define DRUIDE_H

class Druide : public Heros{
public:
    Druide(int _pv, int _attaque, int _pvMax, int _xp, int _niveau);
    ~Druide();

private:

};

#endif // DRUIDE_H
