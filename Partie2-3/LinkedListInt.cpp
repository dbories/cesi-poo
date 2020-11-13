#include "LinkedListInt.h"

ListItemInt* LinkedListInt::getDebut()
{
    return premier;
}

ListItemInt* LinkedListInt::getFin()
{
    return dernier;
}

ListItemInt* LinkedListInt::ajouter(int nouveau)
{
    if (this->dernier == nullptr) {
        this->dernier = new ListItemInt(nouveau);
        this->premier = this->dernier;
    }
    else {
        this->dernier = this->dernier->insererApres(nouveau);
    }

    return this->dernier;
}

void LinkedListInt::afficherTout()
{
    ListItemInt* elementCourant = this->premier;
    while (elementCourant != nullptr)
    {
        std::cout << elementCourant->getValeur() << std::endl;
        elementCourant = elementCourant ->getSuivant();
    }
}

ListItemInt::ListItemInt(int valeur)
{
    this->precedent = nullptr;
    this->valeur = valeur;
    this->suivant = nullptr;
}

ListItemInt* ListItemInt::getSuivant()
{
    return suivant;
}

ListItemInt* ListItemInt::getPrecedent()
{
    return precedent;
}

int ListItemInt::getValeur()
{
    return valeur;
}

ListItemInt* ListItemInt::insererAvant(int nouveau)
{
    // Nouvel élément à insérer    
    ListItemInt* nouvelElement = new ListItemInt(nouveau);
    
    // On met à jour tous les liens.
    if (this->precedent != nullptr) {
        this->precedent->suivant = nouvelElement;
        nouvelElement->precedent = this->precedent;
    }
    nouvelElement->suivant = this;
    this->precedent = nouvelElement;
    
    // On retourne le nouvel élément.
    return nouvelElement;
}

ListItemInt* ListItemInt::insererApres(int nouveau)
{
    // Nouvel élément à insérer
    ListItemInt* nouvelElement = new ListItemInt(nouveau);

    // On met à jour tous les liens.
    if (this->suivant != nullptr) {
        this->suivant->precedent = nouvelElement;
        nouvelElement->suivant = this->suivant;
    }
    nouvelElement->precedent = this;
    this->suivant = nouvelElement;

    // On retourne le nouvel élément.
    return nouvelElement;
}
