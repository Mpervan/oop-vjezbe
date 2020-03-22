#include <iostream>

/*Napisati funkciju koja vraæa niz int vrijednosti
velièine n u kojem je svakielement zbroj svoja dva
prethodnika. Prvi i drugi element u nizu su jedinice.
Umainfunkciji ispisati dobiveni niz i osloboditi memoriju.*/

using namespace std;

void napraviniz(int *niz, int &n)
{
    for(int i = 0; i < n; i++)
    {
        if(i<2)
            niz[i]=1;
        else
            niz[i] = niz[i-1] + niz[i-2];
    }
}

int main()
{
    int n;
    cout << "velicina niza: " << endl;
    cin >> n;
    int *niz;
    niz = new int[n];
    napraviniz(niz,n);
    for(int i = 0; i < n; i++)
    {
        cout << niz[i] << endl;
    }
}
