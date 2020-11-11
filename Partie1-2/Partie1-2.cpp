// Partie2.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
