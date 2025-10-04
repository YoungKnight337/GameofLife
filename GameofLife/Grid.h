#pragma once
#include "raylib.h"
#include "Cell.h"

//https://github.com/raysan5/raylib-games/tree/master

class Cell cell;

class Grid
{
private:
	const size_t N = 100;
	//int** grid = new int*[N];
	//int** grid = new int grid[N][N];

public:
	Grid();
	~Grid();
	void Iniitialize();
	void Seed();
	void Draw();
	void Update();
	void Rules(size_t a, size_t b);
	void Clear();
	void CheckCell(size_t a, size_t b);
};

/*
============================================================================================================
[Blackhalo117]
Yeah, the Grid class would, in my mind, be a class that stores it's data into an array, 
It also offers you the methods for stepping through the cells and creating a new array every cycle through
============================================================================================================
Oh so like, a typical array would be something like this:
var fuu = []
To make it multi-dimensional, you might try something like this:
var fuu = []
for i in range(0, 10):
	  temp = []
	  fuu.append(temp)
============================================================================================================
Now you can access "cells" inside of this by typing:
fuu[x][y] = new cell():   	grid[a][b] == new cell();
So x is your width and y is your height

And yeah, I'd make a function that checks a cell like:
func check_cell(x, y):
      if y + 1 < self.height:
             //check fuu[x][y + 1]
      if y - 1 >= 0:
            //check fuu[x][y - 1]
============================================================================================================
	Now you can access "cells" inside of this by typing:
	fuu[x][y] = new cell()
	So x is your width and y is your height, like pixels :3
============================================================================================================
*/