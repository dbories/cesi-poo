#pragma once
class CLcalcul
{
private:
    int n;
    void ini(int valeur);
    static int cpteObj;
public:
    CLcalcul(void);
    CLcalcul(int value);
    void carre();
    void setN(int value);
    int getN(void);

};

