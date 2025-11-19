#include <iostream>
#include <iomanip>
#include <thread>
#include <chrono>

#include "Player.h"
#include "Monster.h"
#include "Invocateur.h"
#include "Sorcier.h"
#include "Chevalier.h" 
#include "Archer.h"
#include "Cowboy.h"
#include "Ninja.h"
#include "Boxeur.h"
#include "Cavalier.h"
#include "MoineGuerrier.h"
#include "Druide.h"

using namespace std;

void jouerPartie(Heros* herosChoisi) {
    system("cls");
    cout << "La partie va commencer !!" << endl;
    this_thread::sleep_for(chrono::seconds(4));
}

int main() {

    // Codes ANSI
    const string bold = "\033[1m";
    const string reset = "\033[0m";

    Player joueur1("Antoine");
    Monster monstre1("Alicia");
    Heros* herosChoisi = nullptr;

    /*Invocateur invocateur1(100,20,0);
    Chevalier chevalier1(100,20,false);
    Sorcier sorcier1(100,20,false);
    Cavalier cavalier1(100,20,false);*/

    /*cout << joueur1.getNom() << endl;
    cout << monstre1.getAttaque() << " " << monstre1.getNom() << " " << monstre1.getPv() <<  endl;

    bool retour = chevalier1.parer();
    if (retour){
        cout << "il va parer l'attaque" << endl;
    } else {
        cout << "il ne va pas parer l'attaque" << endl;
    }

    bool retour2 = sorcier1.bruler();
    if (retour2){
        cout << "il est brulé" << endl;
    } else {
        cout << "il n'est pas brulé" << endl;
    }

    int attaque = cavalier1.attaquer();
    cout << attaque << endl;

    if (!cavalier1.justOnce){
        cavalier1.ruer();
    } else {
        cout << "Vous avez déjà rué" << endl;
    }
    attaque = cavalier1.attaquer();
    cout << attaque << endl;
    if (!cavalier1.justOnce){
        cavalier1.ruer();
    } else {
        cout << "Vous avez déjà rué" << endl;
    }
    */

    int touche = -1;

    do {
        system("cls"); // Nettoie le terminal à chaque affichage du menu principal

        cout << "+" << setfill('-') << setw(50) << "+" << endl;
        cout << "|" << "          Liste des Héros sélectionnables" << setfill(' ') << setw(9) << "|" << endl;
        cout << "|" << setfill('-') << setw(50) << "|" << endl;
        cout << "|" << "      1.  Archer" << setfill(' ') << setw(34) << "|" << endl;
        cout << "|" << "      2.  Boxeur" << setfill(' ') << setw(34) << "|" << endl;
        cout << "|" << "      3.  Cavalier" << setfill(' ') << setw(32) << "|" << endl;
        cout << "|" << "      4.  Chevalier" << setfill(' ') << setw(31) << "|" << endl;
        cout << "|" << "      5.  Cowboy" << setfill(' ') << setw(34) << "|" << endl;
        cout << "|" << "      6.  Druide" << setfill(' ') << setw(34) << "|" << endl;
        cout << "|" << "      7.  Invocateur" << setfill(' ') << setw(30) << "|" << endl;
        cout << "|" << "      8.  Moine Guerrier" << setfill(' ') << setw(26) << "|" << endl;
        cout << "|" << "      9.  Ninja" << setfill(' ') << setw(35) << "|" << endl;
        cout << "|" << "      10. Sorcier" << setfill(' ') << setw(33) << "|" << endl;
        cout << "|" << "      0.  Plus d'informations sur les héros" << setfill(' ') << setw(7) << "|" << endl;
        cout << "|" << setfill(' ') << setw(50) << "|" << endl;
        cout << "|" << "      99. Quitter" << setfill(' ') << setw(33) << "|" << endl;
        cout << "+" << setfill('-') << setw(50) << "+" << endl;

        cout << "👉 Choisis ton héros : ";
        cin >> touche;

        switch(touche){
            case 1:{
                herosChoisi = new Archer(100,20,20,0,1,1);
                cout << "Tu as choisi l'Archer 🏹 !" << endl;
                this_thread::sleep_for(chrono::seconds(4));
                jouerPartie(herosChoisi);
                break;
            }
            case 2:{
                herosChoisi = new Boxeur(100,20,20,0,1,false);
                cout << "Tu as choisi le Boxeur 🥊 !" << endl;
                this_thread::sleep_for(chrono::seconds(4));
                jouerPartie(herosChoisi);
                break;
            }
            case 3:{
                herosChoisi = new Cavalier(100,20,20,0,1,false);
                cout << "Tu as choisi le Cavalier 🐴 !" << endl;
                this_thread::sleep_for(chrono::seconds(4));
                jouerPartie(herosChoisi);
                break;
            }
            case 4:{
                herosChoisi = new Chevalier(100,20,20,0,1,false);
                cout << "Tu as choisi le Chevalier ⚔️ !" << endl;
                this_thread::sleep_for(chrono::seconds(4));
                jouerPartie(herosChoisi);
                break;
            }
            case 5:{
                herosChoisi = new Cowboy(100,20,20,0,1,false);
                cout << "Tu as choisi le Cowboy 🤠 !" << endl;
                this_thread::sleep_for(chrono::seconds(4));
                jouerPartie(herosChoisi);
                break;
            }
            case 6:{
                herosChoisi = new Druide(100,20,20,0,1);
                cout << "Tu as choisi le Druide 🌿 !" << endl;
                this_thread::sleep_for(chrono::seconds(4));
                jouerPartie(herosChoisi);
                break;
            }
            case 7:{
                herosChoisi = new Invocateur(100,20,20,0,1,0);
                cout << "Tu as choisi l'Invocateur 🔮 !" << endl;
                this_thread::sleep_for(chrono::seconds(4));
                jouerPartie(herosChoisi);
                break;
            }
            case 8:{
                herosChoisi = new MoineGuerrier(100,20,20,0,1);
                cout << "Tu as choisi le Moine Guerrier 🧘 !" << endl;
                this_thread::sleep_for(chrono::seconds(4));
                jouerPartie(herosChoisi);
                break;
            }
            case 9:{
                herosChoisi = new Ninja(100,20,20,0,1,false);
                cout << "Tu as choisi le Ninja 🥷 !" << endl;
                this_thread::sleep_for(chrono::seconds(4));
                jouerPartie(herosChoisi);
                break;
            }
            case 10:{
                herosChoisi = new Sorcier(100,20,20,0,1,false);
                cout << "Tu as choisi le Sorcier 🧙 !" << endl;
                this_thread::sleep_for(chrono::seconds(4));
                jouerPartie(herosChoisi);
                break;
            }

            case 0:{
                int retour = -1;
                do {
                    system("cls"); // Efface l’écran à chaque fois qu’on revient dans le sous-menu
                    cout << "+" << setfill('-') << setw(64) << "+" << endl;
                    cout << "| " << "                 Informations sur les héros                  " << " |" << endl;
                    cout << "+" << setfill('-') << setw(64) << "+" << endl;
                    cout << "| " << "-  Archer : Tire une ou plusieurs flèches" << setfill(' ') << setw(22) << " |" << endl;
                    cout << "| " << "-  Boxeur : Fais un uppercut mais s'inflige des dégâts" << setfill(' ') << setw(9) << " |" << endl;
                    cout << "| " << "-  Cavalier : Inflige beaucoup de dégâts mais perd son cheval" << " |"<< endl;
                    cout << "| " << "-  Chevalier : Pare une attaque" << setfill(' ') << setw(32) << " |" << endl;
                    cout << "| " << "-  Cowboy : Peut tirer un deuxième coup" << setfill(' ') << setw(24) << " |" << endl;
                    cout << "| " << "-  Druide : Peut se soigner" << setfill(' ') << setw(36) << " |" << endl;
                    cout << "| " << "-  Invocateur : Invoque une/des créature(s)" << setfill(' ') << setw(20) << " |" << endl;
                    cout << "| " << "-  Moine Guerrier : Peut renvoyer les dégâts subis" << setfill(' ') << setw(13) << " |" << endl;
                    cout << "| " << "-  Ninja : Peut devenir invisible" << setfill(' ') << setw(30) << " |" << endl;
                    cout << "| " << "-  Sorcier : Peut brûler l'adversaire" << setfill(' ') << setw(26) << " |" << endl;
                    cout << "|" << setfill(' ') << setw(64) << "|" << endl;
                    cout << "| " << "0. 🔙 Revenir à la sélection des héros" << setfill(' ') << setw(25) << " |" << endl;
                    cout << "+" << setfill('-') << setw(64) << "+" << endl;
                    cout << endl << "Retour : ";
                    cin >> retour;
                } while (retour != 0);
                break;
            }

            case 99:
                cout << "👋 Fin du Jeu !" << endl;
                break;

            default:
                cout << "❌ Choix invalide, réessaie !" << endl;
                this_thread::sleep_for(chrono::seconds(4));
                break;
        }

    } while (touche != 99);

    delete herosChoisi;

    return 0;
}