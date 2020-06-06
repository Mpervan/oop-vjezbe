#include <iostream>
#include <cctype> 
#include <algorithm> 

using namespace std;



template <typename T>
void sortiraj(T niz[], int s)
{
    for (int gap = s / 2; gap > 0; gap /= 2)
        for (int i = gap; i < s; ++i)
            for (int j = i - gap; j >= 0; j -= gap)
                if (niz[j + gap] < niz[j])
                    swap(niz[j], niz[j + gap]);
}

template <>
void sortiraj(char niz[], int s)
{
    //locale l;
    for (int gap = s / 2; gap > 0; gap /= 2)
        for (int i = gap; i < s; ++i)
            for (int j = i - gap; j >= 0; j -= gap)
                if (tolower(niz[j + gap]) < tolower(niz[j]))
                    swap(niz[j], niz[j + gap]);
}

int main()
{
    int niz[] = { 15, 2, 7, 28, 0 };
    char chniz[] = { 'T', 'h', 'e', 'S','l', 'a', 'b' };
    sortiraj(niz, 5);
    sortiraj(chniz, 7);

}