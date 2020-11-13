#pragma once
#include "Vehicule.h"

class Garage
{
    private:
        // Souvenez-vous, quand on déclare un tableau, on alloue en réalité de la mémoire dans le tas (heap) 
        // et on renvoie un pointeur vers le premier élément
        Vehicule** places; 
        int position;
        int taille;
    public:
        Garage(int taille);

        void ranger(Vehicule* vehicule);

        void ranger(Vehicule* vehicule, int position);
    
        void allerTousA(std::string destination);

};
