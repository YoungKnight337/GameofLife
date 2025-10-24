#include "Cell.h"

Cell::Cell()
{
	active = false;

	if (active)
		color = BLACK;
}

Cell::~Cell()
{
}

void Cell::Draw()
{
	DrawRectangle(position.x, position.y, width, height, color);
}

int Cell::AddNeighbor()
{
	for (int i = 0; i < 8; i++)
	{
		if (neighbors)
			if (active == true)
				a_neighbors++;
	}

	//Return an array of neighboring blocks
	//return neighbors[i];
	//GetNeighbors();
	//if cells position is adjacent to another and is active, add to neighbors array
	//A cell has eight neighbors, of those eight which of them are active?
	//if(position.x)
	//	neighbors;

	//Neighbors can be horizontally, vertically, or diagonally adjacent so a block in the center of the board would have 8 neighbors
	//Meanwhile one in a corner would only have 3.
	//There are many ways of approaching this problem, so take a few minutes to devise a good algorithm, and then try to implement it.
}

void Cell::Rules()
{
	if (active)
	{
		if (a_neighbors == 3 || a_neighbors == 2)
			active = true;
		if (a_neighbors < 2 || a_neighbors > 3)
			active = false;
	}
	else
	{
		if (a_neighbors == 3)
			active = true;
	}
}




