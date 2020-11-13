// memoryInCpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "Boite.h"
#include "memoryInCpp.h"


using namespace std;

Boite globalVar("rouge", 1);

int main()
{
    std::cout << "DEBUT DE MON PROGRAMME SUR LA MEMOIRE!\n";

    globalVar.ranger();
    
    changerBoiteGlobal();

    globalVar.ranger();


    // allocation dans la pile.
    Boite maBoite("magenta", 1);
    
    maBoite.ranger();

    montrerMaBoite();

    maBoite.ranger();


    // Les tableaux sont des pointeurs
    Boite* tab = new Boite[3];
    

    tab[0].couleur = "jaune";
    tab[1].couleur = "bleu";
    tab[2].couleur = "vert";
    tab->couleur = "rouge";

    tab[0].ranger();
    tab[1].ranger();
    tab[2].ranger();

    (*(tab + 4)).ranger();

}

void montrerMaBoite() 
{
    Boite maBoite;
    maBoite.ranger();
}

void changerBoiteGlobal()
{
    globalVar = Boite("bleue", 3);
}
