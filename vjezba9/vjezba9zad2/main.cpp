#include <iostream>
#include <string>
#include "Stack.h"


using namespace std;

int main()
{
    Stack<string> stek(10);
    stek.push("prvi string");
    stek.push("drugi string");
    stek.push("jos jedan string");
    stek.push("string koji ne valja");
    stek.pop();

    if (stek.isempty())
        cout << "Prazan je" << endl;
    if (!stek.isempty())
        cout << "Pun je" << endl;

}