#include <iostream>
#include <vector>
#include "igracljud.hpp"

using namespace std;

class ComputerPlayer : public Player{
public:
    ComputerPlayer() {};
    ComputerPlayer(const ComputerPlayer& komp)
    {
        bod = 0;
        num = komp.num;
        lijeva = komp.lijeva;
        desna = komp.desna;
    };
    ~ComputerPlayer() {};
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
