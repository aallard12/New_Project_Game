/* --- Sorcier.h --- */

/* ------------------------------------------
Author: LeBGAnto
Date: 25/10/2025
------------------------------------------ */

#include "Heros.h"

#ifndef SORCIER_H
#define SORCIER_H

class Sorcier : public Heros{
private:
    bool burnt;
public:
    Sorcier(int _pv, int _attaque, int _pvMax, int _xp, int _niveau, bool _burnt);
    ~Sorcier();

    bool bruler();
    int attaquer();

    bool getBurnt();
    void setBurnt(bool& value);
};

#endif // SORCIER_H
