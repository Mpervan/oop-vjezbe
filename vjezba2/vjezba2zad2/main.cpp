#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

typedef struct{
    float x, y, r;
}Kruznica;

int kruznice_koje_se_sjeku(const Kruznica &glavna, Kruznica *niz)
{
    int br = 0;
    for(int i = 0; i < 10; i++)
    {
        if(sqrt(pow(niz[i].x + glavna.x, 2)) <= (niz[i].r + glavna.r) && sqrt(pow(niz[i].y + glavna.y, 2)) <= (niz[i].r + glavna.r))
        {
            br++;
        }
    }
    return br;
}

int main()
{
    Kruznica glavna;
    glavna.x = 5.2;
    glavna.y = 17.4;
    glavna.r = 8;
    Kruznica *niz;
    niz = new Kruznica[10];
    for(int i = 0; i < 10; i++)
    {
        niz[i].x = rand() %50;
        niz[i].y = rand() %50;
        niz[i].r = rand() %20 + 1;
        cout << "kruznica " << i << ": x:" << niz[i].x << " y:" << niz[i].y << " radius:" << niz[i].r << endl;
    }
    cout << "sjece se ukupno " << kruznice_koje_se_sjeku(glavna,niz) << " kruznica." << endl;
}
