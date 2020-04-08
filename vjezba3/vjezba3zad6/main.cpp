#include <iostream>
#include <list>
#include <stdlib.h>

using namespace std;

int umetni(list<int> lista)
{
    list<int>::iterator i;
    list<int>::iterator poc;
    list<int>::iterator kraj;
    int br = 0;
    for(i = lista.begin(); i != lista.end(); ++i)
    {
        if(*i % 2 == 0)
        {
            ++i;
            lista.insert(i,0);
            --i;

        }
        if(*i % 2 != 0 && *i != 1)
        {
            lista.insert(i,1);
            kraj = i;
        }
        if(*i == 1)
        {
            kraj = i;
        }
    }
    for(i = lista.begin(); *i != 0; ++i)
    {
        poc = i;
    }
    for(i = poc; i != kraj;++i)
    {
        br++;
    }
    for(i = lista.begin(); i != lista.end(); ++i)
    {
        cout << *i << " ";
    }
    return br - 2;
}

int main()
{
    list<int> lista;
    for(int i = 0; i < 20; i++)
    {
        lista.push_back(rand() % 100 + 1);
    }
    int br = umetni(lista);
    cout << endl;
    cout << "Ima " << br << " elemenata izmedju prve 0 i zadnje 1.";

}
