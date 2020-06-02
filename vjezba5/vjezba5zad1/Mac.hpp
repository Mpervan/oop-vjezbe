#include <iostream>
#include <list>
#include <string>
#include "Karta.hpp"

using namespace std;

class Mac{
    list<Karta> plik;
public:
    void generiraj();
    list<Karta> izvuci();
    void pomjesaj();
};
