// Partie2-2.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include "Vehicule.h"
#include "Voiture.h"
#include "Garage.h"

int main()
{
    // Pour avoir des caractères spéciaux dans la console
    std::locale::global(std::locale(""));

    Vehicule* v1 = new Vehicule("v1");
    Vehicule* v2 = new Voiture("v2");
    Voiture* v3 = new Voiture("v3");

    Garage* monGarage = new Garage(3);

    // Dans la place 0
    monGarage->ranger(v1);
    // Dans la place 1
    monGarage->ranger(v1);
    // Dans la place 2
    monGarage->ranger(v3);

    monGarage->allerTousA("Paris");


    // Je me suis trompé de véhicule dans la place 1, je corrige.
    monGarage->ranger(v2, 1);
    
    monGarage->allerTousA("Pékin");

}
