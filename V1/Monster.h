/* --- Monster.h --- */

/* ------------------------------------------
Author: LeBGAnto
Date: 23/10/2025
------------------------------------------ */

#ifndef MONSTER_H
#define MONSTER_H

#include <string>
using namespace std;

class Monster {    
private:
    string nom;
    int pv;
    int attaque;
public:
    Monster(string _nom);
    ~Monster();

    string getNom();
    void setNom(string& newNom);
    int getPv();
    void setPv(int& newPv);
    int getAttaque();
    void setAttaque(int& newAttaque);
};

#endif // MONSTER_H
