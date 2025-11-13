/* --- Invocateur.h --- */

/* ------------------------------------------
Author: LeBGAnto
Date: 25/10/2025
------------------------------------------ */

#include "Heros.h"

#ifndef INVOCATEUR_H
#define INVOCATEUR_H

class Invocateur : public Heros{
private:
    int nbCreatures;
public:
    Invocateur(int _pv, int _attaque, int _pvMax, int _xp, int _niveau, int _nbCreatures);
    ~Invocateur();

    void invoquer();
    int attaquer();

    void setNbCreatures(int& value);
    int getNbCreatures();
};

#endif // INVOCATEUR_H
