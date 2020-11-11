#include "CLCalcul.h"
#include <iostream>

using namespace std;

int CLcalcul::cpteObj = 0;

void CLcalcul::ini(int n)
{
    this->setN(n);
    CLcalcul::cpteObj++;
    cout << "Nombre d'objet(s) : " << CLcalcul::cpteObj << endl;
}

CLcalcul::CLcalcul(void)
{
    this->ini(0);
}

CLcalcul::CLcalcul(int value)
{
    this->ini(value);
}

void CLcalcul::carre()
{
    n = n*n;
}

void CLcalcul::setN(int value)
{
    n = value;
}

int CLcalcul::getN(void)
{
    return n;
}
