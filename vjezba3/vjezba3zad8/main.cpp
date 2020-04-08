#include <iostream>
#include <list>

using namespace std;

list<list<int>::iterator> stuffing_bit(list<int> lista)
{
    int br = 0;
    list<int>::iterator i;
    list<list<int>::iterator> itlist;
    for(i = lista.begin(); i != lista.end(); ++i)
    {
        if(br == 5)
        {
            lista.insert(i,0);
            itlist.push_back(i);
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
    cout << endl;
    return itlist;
}

void reverse_stuffing_bit(list<int> lista)
{
    list<list<int>::iterator> itlist = stuffing_bit(lista);
    list<int>::iterator i;
    list<list<int>::iterator>::iterator j = itlist.begin();

    for(i = lista.begin(); i != lista.end(); ++i)
    {
        if(i == *j)
        {
            lista.erase(i);
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
    reverse_stuffing_bit(lista);
}
