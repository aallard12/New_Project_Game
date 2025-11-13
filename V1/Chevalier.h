/* --- Chevalier.h --- */

/* ------------------------------------------
Author: LeBGAnto
Date: 25/10/2025
------------------------------------------ */

#include "Heros.h"

#ifndef CHEVALIER_H
#define CHEVALIER_H

class Chevalier : public Heros{
private:
    bool defense;
public:
    Chevalier(int _pv, int _attaque, bool _defense);
    ~Chevalier();

    bool parer();
    int attaquer();

    bool getDefense();
    void setDefense(bool& value);
};

#endif // CHEVALIER_H
