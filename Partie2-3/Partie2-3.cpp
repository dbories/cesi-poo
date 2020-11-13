// Partie2-3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "LinkedListInt.h"

int main()
{

    std::string tableauLocal[3];
    tableauLocal[0] = "pomme";
    tableauLocal[1] = "banane";
    tableauLocal[2] = "noix";

    std::cout << "pointeur vers premier element : " << tableauLocal << std::endl;
    std::cout << "premier element avec syntaxe classique : " << tableauLocal[0] << std::endl;
    std::cout << "premier element avec syntaxe arithmetique : " << *tableauLocal << std::endl;

    std::cout << "pointeur vers deuxieme element : " << tableauLocal + 1 << std::endl;
    std::cout << "deuxieme element avec syntaxe classique : " << tableauLocal[1] << std::endl;
    std::cout << "deuxieme element avec syntaxe arithmetique : " << *(tableauLocal + 1) << std::endl;

    std::cout << "pointeur vers troisieme element : " << tableauLocal + 2 << std::endl;
    std::cout << "troisieme element avec syntaxe classique : " << tableauLocal[2] << std::endl;
    std::cout << "troisieme element avec syntaxe arithmetique : " << *(tableauLocal + 2) << std::endl;
    
    // Pas besoin de libérer la mémoire prise par le tableau. 
    // Il est dans la pile (stack) et la mémoire sera libérée automatiquement quand le programme sortira de la fonction.

    // ----------------------------------------------------------------------------

    std::string* tableauDynamique;
    tableauDynamique = new std::string[5];
    delete[] tableauDynamique;
    tableauDynamique = new std::string[3];
    tableauDynamique[0] = "peche";
    tableauDynamique[1] = "poire";
    tableauDynamique[2] = "prune";

    std::cout << "pointeur vers premier element : " << tableauDynamique << std::endl;
    std::cout << "premier element avec syntaxe classique : " << tableauDynamique[0] << std::endl;
    std::cout << "premier element avec syntaxe arithmetique : " << *tableauDynamique << std::endl;

    std::cout << "pointeur vers deuxieme element : " << tableauDynamique + 1 << std::endl;
    std::cout << "deuxieme element avec syntaxe classique : " << tableauDynamique[1] << std::endl;
    std::cout << "deuxieme element avec syntaxe arithmetique : " << *(tableauDynamique + 1) << std::endl;

    std::cout << "pointeur vers troisieme element : " << tableauDynamique + 2 << std::endl;
    std::cout << "troisieme element avec syntaxe classique : " << tableauDynamique[2] << std::endl;
    std::cout << "troisieme element avec syntaxe arithmetique : " << *(tableauDynamique + 2) << std::endl;

    // Quand je n'ai plus besoin de mon tableau, je libère l'espace réservé dans le tas (heap).
    delete[] tableauDynamique;

    // ----------------------------------------------------------------------------

    LinkedListInt* listeChainee = new LinkedListInt();
    ListItemInt* nombre1 = listeChainee->ajouter(1);
    ListItemInt* nombre3 = listeChainee->ajouter(3);
    ListItemInt* nombre5 = listeChainee->ajouter(5);
    ListItemInt* nombre8 = listeChainee->ajouter(8);

    listeChainee->afficherTout();

    std::cout << "Je corrige ma suite de Fibonnacci." << std::endl;

    nombre3->insererAvant(2);

    listeChainee->afficherTout();

}
