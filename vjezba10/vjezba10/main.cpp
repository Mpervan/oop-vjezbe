#include <iostream>
#include <fstream>
#include <iterator>
#include <vector>
#include <algorithm>


using namespace std;

bool upper(int i)
{
    if (i > 500)
        return true;
    else
        return false;
}

bool lower(int i)
{
    if (i < 300)
        return true;
    else
        return false;
}




int main()
{
    vector<int> v;
    ifstream f("numbers.txt");
    istream_iterator<int> is(f), eos;
    try {
        if (is == eos)
            throw 404;
        copy(is, eos, back_inserter(v));
        int br = count_if(v.begin(), v.end(), upper);

        v.erase(remove_if(v.begin(), v.end(), lower), v.end());

        sort(v.begin(), v.end());
        reverse(v.begin(), v.end());

        vector<int>::iterator max = max_element(v.begin(), v.end());
        vector<int>::iterator min = min_element(v.begin(), v.end());

        cout << "zbroj clanova vecih od 500: " << br << " | " << "max clan: " << *max << " | " << "min clan: " << *min << endl;

        ostream_iterator<int> os(cout, ",");
        copy(v.begin(), v.end(), os);
    }

    catch (int)
    {
        cout << "Nedostaje datoteka!" << endl;
    }

}
