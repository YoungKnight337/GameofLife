#pragma once
#include "raylib.h"
#include "Cell.h"

class Cell cell;

class Grid
{
private:
	static int cellGrid;
public:
	Grid();
	~Grid();
	void Iniitialize(int a, int b);
	void Draw(int a, int b);
	void Update(int a, int b);
};

