/* --- Invocateur.cpp --- */

/* ------------------------------------------
author: LeBGAnto
date: 25/10/2025
------------------------------------------ */

#include "Invocateur.h"

Invocateur::Invocateur(int _pv, int _attaque, int _pvMax, int _xp, int _niveau, int _nbCreatures) :
    Heros(_pv, _attaque, _pvMax, _xp, _niveau), nbCreatures(_nbCreatures)
{
    // Constructor
}

Invocateur::~Invocateur()
{
    // Destructor
}

void Invocateur::afficherActions()
{
    Heros::afficherActions();
    if (nbCreatures < 5) {
        cout << "2. Invoquer" << endl;
    } else {
        cout << "Vous avez utilisé toutes vos invocations !" << endl;
    }
}

void Invocateur::invoquer()
{
    if (nbCreatures < 5){
        nbCreatures++;
    } else {
        cout << "Vous avez déjà le maximum de créatures possibles à invoquer" << endl;
    }
}

int Invocateur::attaquer()
{
    int somme = 0;
    somme += attaque + (attaque / 4) * nbCreatures;

    return somme;
}

int Invocateur::getNbCreatures() {
    return nbCreatures;
}
void Invocateur::setNbCreatures(int& value) {
    nbCreatures = value;
}