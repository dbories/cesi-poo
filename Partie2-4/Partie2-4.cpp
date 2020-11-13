// Partie2-4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "Emetteur.h"
#include "Repeteur.h"

int main(void)
{
    Emetteur emetteur;
    Repeteur RepeteurA("RepeteurA recoit : ");
    Repeteur RepeteurB("RepeteurB recoit : ");

    emetteur.envoyer(RepeteurA, &Repeteur::doublerMessage, "message 1");
    emetteur.envoyer(RepeteurA, &Repeteur::triplerMessage, "message 2");
    emetteur.envoyer(RepeteurB, &Repeteur::inverserMessage, "message 3");
}

