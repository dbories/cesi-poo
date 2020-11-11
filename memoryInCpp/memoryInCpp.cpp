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

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
