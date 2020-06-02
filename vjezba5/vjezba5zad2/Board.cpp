#include <iostream>
#include <vector>
#include <cmath>
#include "Board.h"

using namespace std;

Board::Board()
{
	int h = 10;
	int w = 10;
	for (int i = 0; i < h; ++i)
	{
		vector<char> v;
		for (int j = 0; j < w; ++j)
		{
			if (i == 0 || i == (h - 1) || j == 0 || j == (w - 1))
			{
				v.push_back('#');
			}
			else
			{
				v.push_back(' ');
			}
		}
	}
}

Board::Board(int w, int h)
{
	for (int i = 0; i < h; ++i)
	{
		vector<char> v;
		for (int j = 0; j < w; ++j) 
		{
			if(i == 0 || i == (h-1) || j == 0 ||  j == (w-1))
			{
				v.push_back('#');
			}
			else
			{
				v.push_back(' ');
			}
		}
		matrix.push_back(v);
	}
}

Board::Board(const Board& b)
{
	matrix = b.matrix;
}

void Board::print()
{
	vector <vector<char>>::iterator i;
	vector<char>::iterator j;
	for(i = matrix.begin(); i != matrix.end(); ++i)
	{
		for (j = (*i).begin(); j != (*i).end(); ++j)
		{
			cout << *j;
		}
		cout << endl;
	}
}

void Board::draw_char(Point t, char c)
{
	int iks = (int)t.x;
	int ipsilon = (int)t.y;
	matrix[ipsilon][iks] = c;
}

void Board::draw_up_line(Point t, char c)
{
	int iks = (int)t.x;
	int ipsilon = (int)t.y;
	for (int i = 1; i < ipsilon; i++)
	{
		matrix[i][iks] = c;
	}
}

void Board::draw_line(Point t1, Point t2, char c)
{
	double iks1, iks2, ipsilon1, ipsilon2;
	if(t1.x <= t2.x)
	{
		iks1 = t1.x;
		iks2 = t2.x;
	}
		
	if (t1.x > t2.x)
	{
		iks1 = t2.x;
		iks2 = t1.x;
	}
	if (t1.y <= t2.y)
	{
		ipsilon1 = t1.y;
		ipsilon2 = t2.y;
	}

	if (t1.y > t2.y)
	{
		ipsilon1 = t2.y;
		ipsilon2 = t1.y;
	}

	double d = sqrt(((iks2 - iks1) * (iks2 - iks1)) + ((ipsilon2 - ipsilon1) * (ipsilon2 - ipsilon1)));

	double i = iks1;
	double j = ipsilon1;
	int p = (int)i;
	int r = (int)j;

	if((ipsilon2 - ipsilon1) < (iks2 - iks1))
	{
		while(r <= (int)ipsilon2)
		{
			matrix[r][p] = c;
			i = i + (d/(ipsilon2 - ipsilon1));
			j = j + (d / (iks2 - iks1));
			p = (int)i;
			r = (int)j;
		}
	}
	if ((ipsilon2 - ipsilon1) > (iks2 - iks1))
	{
		while (p <= (int)iks2)
		{
			matrix[r][p] = c;
			i = i + (d / (ipsilon2 - ipsilon1));
			j = j + (d / (iks2 - iks1));
			p = (int)i;
			r = (int)j;
		}
	}
}

