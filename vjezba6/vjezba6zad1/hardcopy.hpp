#include <string>
#include "knjige.hpp"

using namespace std;

class HardCopyBook : public Book{
protected:
    int brojstr;
public:
    HardCopyBook(){};
    HardCopyBook(const HardCopyBook &knj)
    {
        autor.assign(knj.autor);
        naslov.assign(knj.naslov);
        godina = knj.godina;
        brojstr = knj.brojstr;
    }
    ~HardCopyBook(){}
    string getautor();
    string getnaslov();
    int getgodina();
    void setautor(string c);
    void setnaslov(string c);
    void setgodina(int br);
    int getbrstr();
    void setbrstr(int br);
    void printaj();
    string koja();
    int getmb() { return 0; }
};
