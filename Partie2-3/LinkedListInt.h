#pragma once
#include <iostream>

class ListItemInt {

private:
    ListItemInt* precedent;
    int valeur;
    ListItemInt* suivant;

public:
    ListItemInt(int valeur);
    ListItemInt* getSuivant();
    ListItemInt* getPrecedent();
    int getValeur();
    ListItemInt* insererAvant(int nouveau);
    ListItemInt* insererApres(int nouveau);

};

class LinkedListInt
{
    private:
        ListItemInt* premier;
        ListItemInt* dernier;

    public:
        ListItemInt* getDebut();
        ListItemInt* getFin();
        ListItemInt* ajouter(int nouveau);
        void afficherTout();

};