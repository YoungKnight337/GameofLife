#pragma once
#include "raylib.h"
#include "Cell.h"


class Cell;

class Grid
{
private:
	int row;
	int column;
	Cell cells[row][column];

public:
	Grid(int row,int column);
	~Grid();
	void Iniitialize();
	void Update();
};

