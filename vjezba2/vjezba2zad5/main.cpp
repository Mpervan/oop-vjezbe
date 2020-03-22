#include <iostream>

using namespace std;

int *pozitivni(int &j)
{
    int* niz;
    int br,n = 10;
    niz = new int[n];
    while(br!=0)
    {
        cout << "unesi broj:" << endl;
        cin >> br;
        if(j == n)
        {
            n=n*2;
            int *temp;
            temp = new int[n];
            temp = niz;
            delete[]niz;
            int *niz;
            niz = new int[n];
            niz = temp;
            delete[]temp;
        }
        if(br > 0)
        {
            niz[j] = br;
            j++;
        }
    }
    return niz;
}

int main()
{
    int j=0;
    int *rez = pozitivni(j);
    for(int i = 0; i < j; i++)
    {
        cout << rez[i] << " ";
    }
}
