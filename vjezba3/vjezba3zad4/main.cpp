#include <iostream>
#include <string>

using namespace std;

string nadji(string str1, string str2)
{
    string::iterator i;
    string::iterator j;
    string::iterator p;
    string podstr;
    int br = 0, brnajveci = 0;
    for(i = str1.begin();i != str1.end(); ++i)
    {
        for(j = str2.begin(); j != str2.end(); ++j)
        {
            while(*(j+br) == *(i+br))
            {
                br++;
            }
            if(br >= brnajveci)
            {
                brnajveci = br;
                p = i;
            }
            br=0;
        }
    }
    for(i = p;i != p + (brnajveci + 1); ++i)
    {
        podstr.push_back(*i);
    }
    cout << podstr;
    return podstr;
}

int main()
{
    string str1 = "Ova recenica ima rijec string";
    string str2 = "Obje imaju string u sebi";
    nadji(str1,str2);
}
