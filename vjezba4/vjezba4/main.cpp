#include <iostream>
#include <string>
#include "treseta.h"

using namespace std;

int main()
{
    Mac resetka;
    resetka.generiraj();
    resetka.pomjesaj();
    int br;
    list<Igrac> igraci;
    cout << "Broj igraca(2 ili 4):" << endl;
    cin >> br;
    if(br != 2 && br != 4)
    {
        cout << "Broj igraca treba biti 2 ili 4." << endl;
        return 0;
    }
    for(int i = 0; i < br; i++)
    {
        Igrac jedan;
        cout << "Ime " << i + 1 << ". igraca:" << endl;
        cin >> jedan.ime;
        jedan.podjeli(resetka.izvuci());
        jedan.izracunaj();
        igraci.push_back(jedan);
        jedan.prikazi();
        jedan.izbrisi();
    }

}
