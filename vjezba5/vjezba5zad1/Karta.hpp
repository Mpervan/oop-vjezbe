#include <iostream>
#include <string>

using namespace std;

class Karta{
    int broj;
    string zog;
public:
    Karta(int b, string z)
    {
        broj = b;
        zog = z;
        cout << "Karta konstruktor" << endl;
    }
    ~Karta(){
        cout << "Karta destruktor" << endl;
    }
    int getbroj();
    string getzog();
    void setbroj(int x);
    void setzog(string c);
    int usporedi(Karta k);
};
