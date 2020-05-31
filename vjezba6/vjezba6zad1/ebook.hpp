#include <string>
#include "hardcopy.hpp"

using namespace std;

class EBook : public Book{
protected:
    string datoteka;
    int megabajti;
public:
    EBook(){};
    EBook(const EBook& knj)
    {
        autor.assign(knj.autor);
        naslov.assign(knj.naslov);
        godina = knj.godina;
        datoteka.assign(knj.datoteka);
        megabajti = knj.megabajti;
    }
    ~EBook(){};
    string getautor();
    string getnaslov();
    int getgodina();
    void setautor(string c);
    void setnaslov(string c);
    void setgodina(int br);
    string getdat();
    void setdat(string c);
    int getmb();
    void setmb(int br);
    void printaj();
    string koja();
};
