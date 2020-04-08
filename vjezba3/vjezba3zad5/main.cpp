#include <iostream>
#include <vector>
#include <string>
#include <ctype.h>
#include <stdlib.h>

using namespace std;

void pig_latin(vector<string> ts)
{
    int r = rand() % 10;
    bool n = true;
    int i = 0;
    char c;
    string rec;
    while(ts[r][i-1] != '.' && ts[r][i-1] != '!' && ts[r][i-1] != '?')
    {
        if(n == true)
        {
            c = ts[r][i];
            n = false;
            if(c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u')
            {
                i++;
            }
        }
        if(ts[r][i] != ' ' && ts[r][i] != '.')
        {
            rec.push_back(ts[r][i]);
        }
        if(ts[r][i] == ' ' || ts[r][i] == '.')
        {
            if(c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u')
            {
                rec.push_back(tolower(c));
                rec.push_back('a');
                rec.push_back('y');
                rec.push_back(ts[r][i]);
            }
            if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            {
                rec.push_back('h');
                rec.push_back('a');
                rec.push_back('y');
                rec.push_back(ts[r][i]);
            }
            n=true;
        }
        i++;
    }
    cout << rec;
}


int main()
{
    vector<string>  ts = {"Choose a life.", "Choose a job.", "Choose a career.", "Choose a family.", "Choose a f***ing big television.", "Choose washing machines, cars, compact disc players and electrical tin openers...", "Choose DSY and wondering who the f**k you are on a Sunday morning.", "Choose sitting on that couch watching mind-numbing, spirit crushing game shows, stucking junk food into your mouth.", "Choose rotting away in the end of it all, pishing your last in a miserable home, nothing more than an embarrassment to the selfish, f***ed up brats you spawned to replace yourself, choose your future.", "Choose life...", "But why would I want to do a thing like that?"};
    pig_latin(ts);
}
