#include <iostream>
#include <string>
#include "money.h"

using namespace std;

money money::operator+(money n)
{
	money rez;
	rez.kn = kn + n.kn;
	rez.lp = lp + n.lp;
	if(rez.lp >= 100)
	{
		rez.lp = rez.lp - 100;
		rez.kn = rez.kn + 1;
	}
	return rez;
}

money money::operator-(money n)
{
	money rez;
	rez.kn = kn - n.kn;
	rez.lp = lp - n.lp;
	if (rez.lp < 0)
	{
		rez.lp = rez.lp + 100;
		rez.kn = rez.kn - 1;
	}
	return rez;
}

void money::operator+=(money n)
{
	kn = kn + n.kn;
	lp = lp + n.lp;
	if (lp >= 100)
	{
		lp = lp - 100;
		kn = kn + 1;
	}
}

void money::operator-=(money n)
{
	kn = kn - n.kn;
	lp = lp - n.lp;
	if (lp < 0)
	{
		lp = lp + 100;
		kn = kn - 1;
	}
}

ostream& operator<<(ostream& s, const money& n)
{
	s << n.kn << " kuna, " << n.lp << " lipa";
	return s;
}

double& money::operator()(double& a)
{
	double kuna, lipa;
	kuna = (double)kn;
	lipa = (double)lp;
	lipa = lipa / 100;
	a = kuna + lipa;
	return a;
}