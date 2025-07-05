#pragma once
#include "raylib.h"
#include "Cell.h"

#define GRID_ROW    100
#define GRID_COLUMN 100

class Cell;

class Grid
{
private:
	static int cellGrid[GRID_ROW][GRID_COLUMN];
public:
	Grid();
	~Grid();
	void Iniitialize();
	void Draw();
	void Update();
};

