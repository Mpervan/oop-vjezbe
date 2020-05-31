#include <iostream>
#include <vector>

using namespace std;

class Player{
protected:
    int num;
    int bod;
    vector<int> desna;
    vector<int> lijeva;
public:
    virtual ~Player() {};
    virtual void setnum(int br) = 0;
    virtual int getnum() = 0;
    virtual void setdesna(int kuna) = 0;
    virtual int zbrojdesna() = 0;
    virtual void setlijeva(int kuna) = 0;
    virtual int zbrojlijeva() = 0;
    virtual int pogodizbr() = 0;
    virtual int getbod() = 0;
    virtual void plusbod() = 0;
};
