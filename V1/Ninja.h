/* --- Ninja.h --- */

/* ------------------------------------------
Author: LeBGAnto
Date: 25/10/2025
------------------------------------------ */

#include "Heros.h"

#ifndef NINJA_H
#define NINJA_H

class Ninja : public Heros{
private:
    bool hided;
public:
    Ninja(int _pv, int _attaque, bool _hided);
    ~Ninja();

    int attaquer();
    void invisible();
    void show();
    
    bool getHided();
    void setHided(bool& value);
};

#endif // NINJA_H
