#pragma once
#include "raylib.h"
#include "Cell.h"

//https://github.com/raysan5/raylib-games/tree/master
class Cell cell;

class Grid
{
private:
	static int cellGrid;
	int rows;
	int columns;
	int cell[100][100];

public:
	Grid();
	~Grid();
	void Iniitialize(int a, int b);
	void Seed();
	void Draw(int a, int b);
	void Update(int a, int b);
};

