#include <iostream>
#include <list>
#include <string>
#include "Mac.hpp"

using namespace std;

class Igrac{
    string ime;
    list<Karta> karte;
    int bodovi;
public:
    Igrac(string nm)
    {
        ime = nm;
        cout << "Igrac konstruktor" << endl;
    }
    ~Igrac()
    {
        ime.clear();
        karte.clear();
        cout << "Igrac destruktor" << endl;
    }
    void podjeli(list<Karta> a);
    void izracunaj();
    string getname();
    int getbodovi();
    void setname(string c);
    void ispisi();
    void izbrisi();
};
