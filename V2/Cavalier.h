
/* --- Cavalier.h --- */

/* ------------------------------------------
Author: LeBGAnto
Date: 26/10/2025
------------------------------------------ */

#include "Heros.h"

#ifndef CAVALIER_H
#define CAVALIER_H

class Cavalier : public Heros{
private:
    bool fonctionCall;
public:
    Cavalier(int _pv, int _attaque, int _pvMax, int _xp, int _niveau, bool _fonctionCall);
    ~Cavalier();

    int attaquer();
    void ruer();

    bool justOnce;

    bool getFonctionCall();
    void setFonctionCall(bool& value);
    bool getJustOnce();
    void setJustOnce(bool& value);
};

#endif // CAVALIER_H
