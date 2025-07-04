#pragma once
#include "raylib.h"
#include "Cell.h"

#define GRID_ROW    100
#define GRID_COLUMN 100

class Cell;

class Grid
{
private:
	int row;
	int column;
	static int cellGrid[GRID_ROW][GRID_COLUMN];
public:
	Grid(int a,int b);
	~Grid();
	void Iniitialize();
	void Draw();
	void Update();
};

