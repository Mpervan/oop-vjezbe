#include <iostream>
#include <string>

using namespace std;

void izbaci(string str, string podstr, int s)
{
    string::iterator i = str.begin();
    string::iterator j = podstr.begin();
    int br = 0;
    while(i != str.end())
    {
        if(*i != *j && br < s)
        {
            j = podstr.begin();
            ++i;
        }
        if(*i == *j && br < s)
        {
            br++;
            ++j;
            ++i;
        }
        if(br == s)
        {
            str.erase(i - s, i);
            ++i;
            br=0;
        }
    }
    cout << str;
}

int main()
{
    string str = "Return the slab or suffer my curse.";
    string podstr = "slab";
    int s = sizeof(podstr)/sizeof(char);
    izbaci(str,podstr,s);
}
