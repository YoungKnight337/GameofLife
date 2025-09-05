#pragma once
#include "raylib.h"
#include "Cell.h"

//https://github.com/raysan5/raylib-games/tree/master

class Cell cell;

class Grid
{
private:
	const size_t N = 100;
	int** grid = new int*[N];

public:
	Grid();
	~Grid();
	void Iniitialize();
	void Seed();
	void Draw();
	void Update();
	void CheckNeighbors();
};

