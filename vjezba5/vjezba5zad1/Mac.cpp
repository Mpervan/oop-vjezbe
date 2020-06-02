#include <iostream>
#include <list>
#include <string>
#include <algorithm>
#include <ctime>
#include <cstdlib>
#include <vector>
#include "Mac.hpp"

void Mac::generiraj()
{
    int i;
    Karta k(0, " ");
    for(i = 1; i < 14; i++)
    {
        if(i != 8 && i != 9 && i != 10)
        {
            k.setbroj(i);
            k.setzog("kupe");
            plik.push_back(k);
            k.setbroj(i);
            k.setzog("bastoni");
            plik.push_back(k);
            k.setbroj(i);
            k.setzog("spade");
            plik.push_back(k);
            k.setbroj(i);
            k.setzog("dinari");
            plik.push_back(k);
        }
    }
}

void Mac::pomjesaj()
{
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
