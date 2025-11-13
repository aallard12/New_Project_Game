/* --- Player.h --- */

/* ------------------------------------------
Author: LeBGAnto
Date: 18/10/2025
------------------------------------------ */

#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <random>
using namespace std;

class Player {
protected:
    string nom;
public:
    Player();
    Player(string _nom);

    string getNom();
    void setNom(string& newNom);
};

#endif // TEST_H
