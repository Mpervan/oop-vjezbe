
#include <iostream>
#include <list>
#include <string>
#include <algorithm>
#include <ctime>
#include <cstdlib>
#include <vector>
#include "treseta.h"

using namespace std;

void Karta::definiraj(int b, string z)
{
    broj = b;
    zog = z;
}

void Karta::printaj()
{
    cout << broj << " ";
    cout << zog << endl;
}

void Mac::generiraj()
{
    int i;
    Karta k;
    for(i = 1; i < 14; i++)
    {
        if(i != 8 && i != 9 && i != 10)
        {
            k.definiraj(i, "kupe");
            plik.push_back(k);
            k.definiraj(i, "bastoni");
            plik.push_back(k);
            k.definiraj(i, "spade");
            plik.push_back(k);
            k.definiraj(i, "dinari");
            plik.push_back(k);
        }
    }
}

void Mac::pomjesaj()
{
    Karta k;
    srand (unsigned(time(0)));
    list<Karta>::iterator it;
    vector<Karta> vectplik;
    for(it = plik.begin(); it != plik.end(); ++it)
    {
        vectplik.push_back(*it);
    }
    plik.erase(plik.begin(),plik.end());
    random_shuffle(vectplik.begin(),vectplik.end());
    vector<Karta>::iterator j;
    for(j = vectplik.begin(); j != vectplik.end(); ++j)
    {
        plik.push_back(*j);
    }
}

list<Karta> Mac::izvuci()
{
    list<Karta> tmplista;
    int i = 0;
    while(i < 10)
    {
        tmplista.push_back(*(plik.begin()));
        plik.pop_front();
        i++;
    }
    return tmplista;
}

void Igrac::podjeli(list<Karta> a)
{
    list<Karta>::iterator i;
    for(i = a.begin(); i != a.end(); ++i)
    {
        karte.push_back(*i);
    }
}

void Igrac::prikazi()
{
    cout << ime << ": " << endl;
    cout << "Bodovi iz akuze:" << bodovi << " " << endl;
    Karta k;
    list<Karta>::iterator it;
    for(it = karte.begin(); it != karte.end(); ++it)
    {
        k = *it;
        k.printaj();
    }

}

void Igrac::izbrisi()
{
    ime.clear();
    karte.clear();
}

int Karta::usporedi(Karta k)
{
    if((broj == 1 || broj == 2 || broj == 3) && broj == k.broj)
        return 5;
    if(zog == k.zog && (broj == 1 || broj == 2 || broj == 3) && (k.broj == 1 || k.broj == 2 || k.broj == 3))
        return 1;
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
    Karta k;
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

