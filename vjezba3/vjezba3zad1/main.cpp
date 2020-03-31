#include <iostream>
#include <stdlib.h>
#include <vector>
#include <iterator>

using namespace std;

vector<int> zbroji(vector<int> v1)
{
    vector<int> v2;
    vector<int>::iterator it = v1.begin();
    vector<int>::reverse_iterator r = v1.rbegin();
	while(it != v1.end())
    {
        v2.push_back(*it + *r);
        it++;
        r++;
    }
    return v2;
}

int main()
{
    vector<int> v1(10);
    vector<int>::iterator it;
	for (it = v1.begin(); it != v1.end(); ++it)
    {
        *it = rand() % 30;
        cout << *it << " ";
    }
    cout << endl;
    vector<int> v2 = zbroji(v1);
    for (it = v2.begin(); it != v2.end(); ++it)
        cout << *it << " ";




}
