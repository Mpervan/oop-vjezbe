#include <iostream>
#include <vector>
#include "Point.h"

using namespace std;

class Board{
	vector<vector<char>> matrix;
public:
	Board();
	Board(int w, int h);
	Board(const Board& b);
	~Board() {};
	void print();
	void draw_char(Point t, char c);
	void draw_up_line(Point t, char c);
	void draw_line(Point t1, Point t2, char c);
};
