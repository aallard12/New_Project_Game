/* --- Boxeur.h --- */

/* ------------------------------------------
Author: LeBGAnto
Date: 26/10/2025
------------------------------------------ */

#include "Heros.h"

#ifndef BOXEUR_H
#define BOXEUR_H

class Boxeur : public Heros{
private:
    bool upper;
public:
    Boxeur(int _pv, int _attaque, int _pvMax, int _xp, int _niveau, bool _upper);
    ~Boxeur();

    int attaquer();
    void uppercut();
    
    bool getUpper();
    void setUpper(bool& value);
};

#endif // BOXEUR_H
