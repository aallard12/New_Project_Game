/* --- Archer.h --- */

/* ------------------------------------------
Author: LeBGAnto
Date: 25/10/2025
------------------------------------------ */

#include "Heros.h"

#ifndef ARCHER_H
#define ARCHER_H

class Archer : public Heros{
private:
    int nbFleches;
public:
    Archer(int _pv, int _attaque, int _nbFleches);
    ~Archer();

    int attaquer();
    void nouveauCarquois();
    void carquoisPrécédent();

    int getNbFleches();
    void setNbFleches(int& value);
};

#endif // ARCHER_H
