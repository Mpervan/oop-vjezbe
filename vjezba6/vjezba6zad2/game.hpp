#include <iostream>
#include <vector>
#include "igrackomp.hpp"

using namespace std;

class Game
{
    vector<Player*> igraci;
    vector<int> kune;
public:
    Game(int a, int b);
    void pokreni(int br);
};
