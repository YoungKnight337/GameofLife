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
	void Rules();
	void CheckCell();
};

//[Blackhalo117]
//Yeah, the Grid class would, in my mind, be a class that stores it's data into an array, 
//It also offers you the methods for stepping through the cells and creating a new array every cycle through


/*
	Oh so like, a typical array would be something like this:
	var fuu = []
	
	To make it multi-dimensional, you might try something like this:
	var fuu = []
	for i in range(0, 10):
      temp = []
      fuu.append(temp)

	Now you can access "cells" inside of this by typing:
	fuu[x][y] = new cell()
	So x is your width and y is your height, like pixels :3
*/