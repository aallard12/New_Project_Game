/* --- Monster.cpp --- */

/* ------------------------------------------
author: LeBGAnto
date: 23/10/2025
------------------------------------------ */

#include "Monster.h"

Monster::Monster(string _nom):
    nom(_nom)
{
    // Constructeur à param
    attaque = 20;
    pv = 100;
}

Monster::~Monster()
{
    // Destructor
}

string Monster::getNom() 
{
    return nom;
}
void Monster::setNom(string& newNom) 
{
    nom = newNom;
}

int Monster::getPv() 
{
    return pv;
}

void Monster::setPv(int& newPv) 
{
    pv = newPv;
}

int Monster::getAttaque() 
{
    return attaque;
}

void Monster::setAttaque(int& newAttaque) 
{
    attaque = newAttaque;
}
