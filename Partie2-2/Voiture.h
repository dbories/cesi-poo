#pragma once
#include "Vehicule.h"
#include <string>

class Voiture : public Vehicule
{
   public:
       Voiture(std::string nom) : Vehicule(nom) {}

       void allerA(std::string destination) {
           std::cout << this->getNom() << " - Je suis arrivé à " << destination << " en roulant" << std::endl;
        }
};

