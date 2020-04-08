#include <iostream>
#include <list>

using namespace std;

void stuffing_bit(list<int> lista)
{
    int br = 0;
    list<int>::iterator i;
    for(i = lista.begin(); i != lista.end(); ++i)
    {
        if(br == 5)
        {
            lista.insert(i,0);
            br=0;
        }
        if(*i == 1)
        {
            br++;
        }
        if(*i == 0)
        {
            br=0;
        }
    }
    for(i = lista.begin(); i != lista.end(); ++i)
    {
        cout << *i;
    }
}

int main()
{
    list<int> lista;
    int v;
    cin >> v;
    while(v == 0 || v == 1)
    {
        lista.push_back(v);
        cin >> v;
    }
    stuffing_bit(lista);
}
