/* --- Heros.h --- */

/* ------------------------------------------
Author: LeBGAnto
Date: 04/11/2025
------------------------------------------ */

#include <string>
#include <random>
#include <iostream>

#ifndef HEROS_H
#define HEROS_H

using namespace std;

class Heros {
protected:
    int pv;
    int attaque;
    int pvMax;
    int xp;
    int niveau;
public:
    Heros(int _pv, int _attaque, int _pvMax, int _xp, int _niveau);
    ~Heros();

    int getPv();
    void setPv(int& value);
    int getAttaque();
    void setAttaque(int& value);
};

#endif // HEROS_H
