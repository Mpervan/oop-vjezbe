#include <iostream>
#include <vector>
#include "Board.h"

using namespace std;

int main()
{ 
	Board tabla(30, 30);
	Point t;
	Point tt;
	tt.x = 20.6783;
	tt.y = 27.5371;
	t.x = 7.999999999999943157;
	t.y = 7.999999999999943157;
	tabla.draw_char(t, 'x');
	tabla.draw_up_line(tt, '*');
	tabla.draw_line(t, tt, '.');
	tabla.print();

}