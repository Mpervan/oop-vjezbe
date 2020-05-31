#include <iostream>
#include "game.hpp"

using namespace std;

int main()
{
	int a, b;
	cout << "Unesi broj botova:";
	cin >> a;
	cout << "Unesi broj igraca ljudi:";
	cin >> b;
	Game igra(a, b);
	int br;
	cout << "Maksimalni broj bodova:";
	cin >> br;
	igra.pokreni(br);
}
