/* --- Cowboy.h --- */

/* ------------------------------------------
Author: LeBGAnto
Date: 25/10/2025
------------------------------------------ */

#include "Heros.h"

#ifndef COWBOY_H
#define COWBOY_H

class Cowboy : public Heros{
private:
    bool coupDeux;
public:
    Cowboy(int _pv, int _attaque, int _pvMax, int _xp, int _niveau, bool _coupDeux);
    ~Cowboy();

    int attaquer();
    void deuxiemeCoup();
    
    bool getCoupDeux();
    void setCoupDeux(bool& value);
};

#endif // COWBOY_H
