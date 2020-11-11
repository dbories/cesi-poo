// Partie4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    std::cout << "Hello World!\n";
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












#pragma once

---------------------------------------- -
#pragma once
cl
----------------------------------------
#pragma once

----------------------------------------

#pragma once
#include "C1.h"
#include "C2.h"
#include "C3.h"
class gpcs1_
{
private:
    C1 o1;
    C2 o2;
    C3 o3;
public:
    void gpcs1S1(void);
    void gpcs1S2(void);
};
----------------------------------------
#pragma once
#include "C1.h"
#include "C3.h"

----------------------------------------
#ifndef PCH_H
#define PCH_H
#include <iostream>
#endif //PCH_H
using namespace std;
----------------------------------------
#include "pch.h"
#include "C1.h"
void C1::m1(void)
{
    cout << "C1" << endl;
}
----------------------------------------
#include "pch.h"
#include "C2.h"
void C2::m2(void)
{
    cout << "C2" << endl;
}
----------------------------------------
#include "pch.h"
#include "C3.h"
void C3::m3(void)
{
    cout << "C3" << endl;
}
----------------------------------------
#include "pch.h"
#include "gpcs1.h"
void gpcs1::gpcs1S1(void)
{
    this->o1.m1(); this->o2.m2();
}
void gpcs1::gpcs1S2(void)

{
    this->o3.m3();
}
---------------------------------------- -
include "pch.h"
#include "gpcs2.h"
void gpcs2::gpcs2S1(void)
{
    this->o1.m1(); this->o3.m3();
}
---------------------------------------- -
#include "pch.h"
#include "gpcs1.h"
#include "gpcs2.h"
using namespace System;
int main()
{
    int pause;
    gpcs1 p1;
    gpcs2 p2;
    p1.gpcs1S1();
    p1.gpcs1S2();
    p2.gpcs2S1();
    cin >> pause;
}