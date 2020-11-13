// Partie1-3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "CLa.h"

int main(void)
    {
        int pause;
        CLa oa;
        CLb ob;
        CLb* pb;
        pb = &ob;
        oa.ma1();
        oa.ma2();
        oa.ma3(ob);
        oa.ma4(*pb);
        oa.ma5(pb);
        cin >> pause;
    }

