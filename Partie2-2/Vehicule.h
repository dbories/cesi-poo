#pragma once
#include <string>
#include <iostream>

class Vehicule
{
    private:
        std::string nom;
    public:
        Vehicule() {
            this->nom = "sans nom";
        }
        Vehicule(std::string nom) {
            this->nom = nom;
        }

        std::string getNom() {
            return this->nom;
        }

         virtual void allerA(std::string destination) {
            std::cout << this->nom << " - Je suis arrivé à " << destination << std::endl;
        }

};
