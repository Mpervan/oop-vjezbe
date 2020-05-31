#include <fstream>
#include <iostream>
#include <iterator>
#include <vector>
#include <sstream>
#include "library.hpp"

using namespace std;

int main()
{
    ifstream fin("knjige2.txt");
    Library lib(fin);
    lib.printaj();
    string str;
    cout << "Unesi ime autora:" << endl;
    cin >> str;
    vector<string> naslovi = lib.svinaslovi(str);
    int br = lib.ukupni_mb(str);
    vector<Book*> vektr = lib.dionaslova("to");
}
