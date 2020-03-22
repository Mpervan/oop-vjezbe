#include <iostream>

using namespace std;

int vrati(int niz[], int i)
{
    int& elemenat = niz[i];
    return elemenat;
}

int main()
{
    int niz[8] = {16, 2, 77, 40, 12, 45, 6, 8};
    int i = 0;
    cout << vrati(niz, i) + 1 << endl;

}
