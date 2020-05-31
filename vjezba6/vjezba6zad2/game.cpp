#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h> 
#include "game.hpp"

using namespace std;

Game::Game(int a, int b)
{
    kune.push_back(1);
    kune.push_back(2);
    kune.push_back(5);
    vector<Player*>::iterator it = igraci.begin();
    vector<int>::iterator j = kune.begin();
    for(int i = 0; i < a; i++)
    {
        ComputerPlayer komp;
        komp.setnum(i + 1);
        for(int k = 0; k < 3; k++)
        {
            srand(time(NULL));
            int br = rand() % 2 + 1;
            if(br == 1)
            {
                komp.setdesna(*j);
            }
            if (br == 2)
            {
                komp.setlijeva(*j);
            }
            ++j;
        }
        j = kune.begin();
        Player* rezerni = new ComputerPlayer(komp);
        igraci.push_back(rezerni);
    }
    for (int i = 0; i < b; i++)
    {
        HumanPlayer ljud;
        ljud.setnum(i + a + 1);
        for (int k = 0; k < 3; k++)
        {
            srand(time(NULL));
            int br = rand() % 2 + 1;
            if (br == 1)
            {
                ljud.setdesna(*j);
            }
            if (br == 2)
            {
                ljud.setlijeva(*j);
            }
            ++j;
        }
        j = kune.begin();
        Player* rezerni = new HumanPlayer(ljud);
        igraci.push_back(rezerni);
    }
}

void Game::pokreni(int br)
{
    vector<Player*>::iterator i;
    vector<Player*>::iterator j;
    int bodovi = 0;
    while(bodovi < br)
    {
        for(i = igraci.begin(); i != igraci.end(); ++i)
        {
            Player* pogadjatelj = *i;
            for (j = igraci.begin(); j != igraci.end(); ++j)
            {
                Player* kandidat = *j;
                if(*i != *j)
                {
                    cout << "Igrac broj " << pogadjatelj->getnum() << " pogadja zbroj kuna u desnoj ruci igraca broj " << kandidat->getnum() << "..." << endl;
                    if (pogadjatelj->pogodizbr() == kandidat->zbrojdesna())
                    {
                        cout << "  Igrac broj " << pogadjatelj->getnum() << " JE POGODIO zbroj kuna u desnoj ruci igraca broj " << kandidat->getnum() << "!" << endl;
                        pogadjatelj->plusbod();
                        cout << "     Broj bodova igraca broj " << pogadjatelj->getnum() << " je: " << pogadjatelj->getbod() << endl;
                        bodovi = pogadjatelj->getbod();
                    }
                    if (bodovi == br)
                        return;
                }
            }
        }
    }
}