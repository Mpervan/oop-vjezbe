#include <iostream>
#include <vector>
#include "igrac.hpp"

using namespace std;

class HumanPlayer : public Player{
public:
    HumanPlayer() {}
    HumanPlayer(const HumanPlayer& ljud)
    {
        bod = 0;
        num = ljud.num;
        lijeva = ljud.lijeva;
        desna = ljud.desna;
    }
    ~HumanPlayer() {};
    void setnum(int br);
    int getnum();
    void setdesna(int kuna);
    int zbrojdesna();
    void setlijeva(int kuna);
    int zbrojlijeva();
    int pogodizbr();
    int getbod();
    void plusbod();
};

