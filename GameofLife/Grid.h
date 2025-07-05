#pragma once
#include "raylib.h"
#include "Cell.h"

constexpr int GRID_ROW    = 100;
constexpr int GRID_COLUMN = 100;

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

