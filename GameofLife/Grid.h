#pragma once
#include "raylib.h"
#include "Cell.h"


class Cell;

class Grid
{
private:
	int row;
	int column;
	int cellGrid[100][100];
public:
	Grid(int a,int b);
	~Grid();
	void Iniitialize();
	void Draw();
	void Update();
};

