#include <iostream>
#include "Player.h"

Player::Player()
{
    
}

Player::Player(string _nom):
    nom(_nom)
{

}

string Player::getNom()
{
    return nom;
}

void Player::setNom(string& newNom) 
{
    nom = newNom;
}