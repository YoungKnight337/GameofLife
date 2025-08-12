#pragma once
#include "raylib.h"
#include "Cell.h"

class Cell cell;

class Grid
{
private:
	static int cellGrid;
	int rows;
	int columns;
	int cells[];
public:
	Grid();
	~Grid();
	void Iniitialize(int a, int b);
	void Seed();
	void Draw(int a, int b);
	void Update(int a, int b);
};

