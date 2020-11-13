#include "Garage.h"

Garage::Garage(int taille) {
    places = new Vehicule*[taille];
    position = 0;
    this->taille = taille;
};

void Garage::ranger(Vehicule* vehicule) {
    places[position] = vehicule;
    position++;
}

void Garage::ranger(Vehicule* vehicule, int position) {
    places[position] = vehicule;
}

void Garage::allerTousA(std::string destination)
{
    for (int i = 0; i < taille; i++)
    {
        places[i]->allerA(destination);
    }
}
