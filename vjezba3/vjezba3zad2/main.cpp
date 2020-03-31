#include <iostream>
#include <string>

using namespace std;

void izmisaj(string recenica, string kopija)
{
    string::iterator it = kopija.begin();
    string::reverse_iterator r = recenica.rbegin();
    int i = 0, br = 0;
    while(it != kopija.end())
    {
        while(*it != ' ' && *it != '.')
        {
            ++it;
            br++;
        }
        while(i < br)
        {
            *r = tolower(*(it - i -1));
            ++r;
            i++;
        }
        *r = ' ';
        ++it;
        ++r;
        br=0;
        i=0;
    }
    recenica.erase(recenica.begin());
    *(recenica.begin()) = toupper(*(recenica.begin()));
    recenica.push_back('.');

    cout << recenica;
}

int main()
{
    string recenica = "Return the slab.";
    izmisaj(recenica, recenica);
}
