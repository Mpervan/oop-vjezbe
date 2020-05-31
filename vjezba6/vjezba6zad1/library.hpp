#include <string>
#include <vector>
#include "ebook.hpp"

class Library{
    vector<Book*> knjiznica;
public:
    Library(ifstream& input);
    void printaj();
    vector<string> svinaslovi(string c);
    int ukupni_mb(string c);
    vector<Book*> dionaslova(string c);
};
