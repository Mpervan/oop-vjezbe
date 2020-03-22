#include <iostream>

using namespace std;

//bitni su 1,4 i 3

void vrati(int niz[], int& veci, int& manji)
{
    int n = sizeof(niz);
    int i = 0;
    while(i < n)
    {
        if(niz[i]>veci)
        {
            veci = niz[i];
        }
        if(niz[i] < manji)
        {
            manji = niz[i];
        }
        i++;
    }

}

int main()
{
    int niz[8] = {16, 2, 77, 40, 12, 45, 6, 8};
    int veci = niz[0];
    int manji = niz[0];
    vrati(niz, veci, manji);
    cout << "veci: " << veci << " manji: " << manji << endl;
}
