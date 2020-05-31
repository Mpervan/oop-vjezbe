#include <iostream>
#include <string>

using namespace std;

class Book{
protected:
    string autor;
    string naslov;
    int godina;
public:
    virtual ~Book(){};
    virtual string getautor() = 0;
    virtual string getnaslov() = 0;
    virtual int getgodina() = 0;
    virtual void setautor(string c) = 0;
    virtual void setnaslov(string c) = 0;
    virtual void setgodina(int br) = 0;
    virtual int getmb() = 0;
    virtual void printaj() = 0;
    virtual string koja() = 0;
};
