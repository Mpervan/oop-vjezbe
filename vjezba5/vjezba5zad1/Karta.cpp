#include <iostream>
#include <string>
#include "Karta.hpp"

using namespace std;

int Karta::usporedi(Karta k)
{
    if((broj == 1 || broj == 2 || broj == 3) && broj == k.broj)
        return 5;
    if(zog == k.zog && (broj == 1 || broj == 2 || broj == 3) && (k.broj == 1 || k.broj == 2 || k.broj == 3))
        return 1;
}

int Karta::getbroj()
{
    return broj;
}

string Karta::getzog()
{
    return zog;
}

void Karta::setbroj(int x)
{
    broj = x;
}

void Karta::setzog(string c)
{
    zog = c;
}
