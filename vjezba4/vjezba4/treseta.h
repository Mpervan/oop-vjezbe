#include <iostream>
#include <list>
#include <string>

using namespace std;

class Karta{
    int broj;
    string zog;
public:
    void definiraj(int b, string z);
    void printaj();
    int usporedi(Karta k);
};

class Mac{
    list<Karta> plik;
public:
    list<Karta> izvuci();
    void generiraj();
    void pomjesaj();
};

class Igrac{

    list<Karta> karte;
    int bodovi;
public:
    string ime;
    void podjeli(list<Karta> a);
    void izracunaj();
    void prikazi();
    void izbrisi();
};
