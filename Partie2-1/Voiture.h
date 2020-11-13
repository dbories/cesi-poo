#pragma once
#include "Vehicule.h"
#include <string>

class Voiture : public Vehicule
{
   public:
       void allerA(std::string destination) {
           std::cout << "Je suis arrivé à " << destination << " en roulant" << std::endl;
    }
};

