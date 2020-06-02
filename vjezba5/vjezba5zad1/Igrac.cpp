#include <iostream>
#include <list>
#include <string>
#include <algorithm>
#include <ctime>
#include <cstdlib>
#include <vector>
#include "Igrac.hpp"

using namespace std;

void Igrac::podjeli(list<Karta> a)
{
    list<Karta>::iterator i;
    for(i = a.begin(); i != a.end(); ++i)
    {
        karte.push_back(*i);
    }
}

string Igrac::getname()
{
    return ime;
}

void Igrac::setname(string c)
{
    ime = c;
}

void Igrac::izracunaj()
{
    int br=1;
    int nap=1;
    bodovi = 0;
    list<Karta>::iterator i = karte.begin();
    list<Karta>::iterator j = karte.begin();
    list<list<Karta>::iterator> brit;
    list<list<Karta>::iterator> napit;
    Karta k(0, " ");
    while(i != karte.end())
    {
        k = *i;
        while(j != karte.end())
        {

            if(i != j && k.usporedi(*j) == 5 && find(brit.begin(), brit.end(), j) == brit.end() && find(brit.begin(), brit.end(), i) == brit.end())
            {
                br++;
                brit.push_back(j);

            }
            if(i != j && k.usporedi(*j) == 1 && find(napit.begin(), napit.end(), j) == napit.end() && find(napit.begin(), napit.end(), i) == napit.end())
            {
                nap++;
                napit.push_back(j);
            }
            ++j;
        }
        if(br >= 3)
        {
            bodovi = bodovi + br;
        }
        if(nap == 3)
        {
            bodovi = bodovi + nap;
        }
        br=1;
        nap=1;
        j = karte.begin();
        ++i;
    }

}

int Igrac::getbodovi()
{
    return bodovi;
}

void Igrac::ispisi()
{
    Karta k(0, "");
    list<Karta>::iterator it = karte.begin();
    while(it != karte.end())
    {
        k = *it;
        cout << k.getbroj() << " ";
        cout << k.getzog() << endl;
        ++it;
    }
}
