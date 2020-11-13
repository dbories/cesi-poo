// Partie1-2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include "CLCalcul.h"

using namespace std;

int main(void)
{
    int pause;
    CLcalcul o1;
    CLcalcul o2(2);
    CLcalcul* p1;
    CLcalcul* p2;
    p1 = new CLcalcul();
    p2 = new CLcalcul(3);
    o1.carre(); o2.carre();
    cout << o1.getN() << endl;
    cout << o2.getN() << endl;
    p1->carre(); p2->carre();
    (*p1).carre(); (*p2).carre();
    cout << p1->getN() << endl;
    cout << p2->getN() << endl;
    cin >> pause;
}
