#pragma once
#include "raylib.h"
#include "Cell.h"

//https://github.com/raysan5/raylib-games/tree/master

class Cell cell;

class Grid
{
private:
	static int cellGrid;
	int GRID_HORIZONTAL = 100;
	int GRID_VERTICAL = 100;
	int cellGrid[GRID_HORIZONTAL][GRID_VERTICAL];

public:
	Grid();
	~Grid();
	void Iniitialize(int a, int b);
	void Seed();
	void Draw(int a, int b);
	void Update(int a, int b);
};

