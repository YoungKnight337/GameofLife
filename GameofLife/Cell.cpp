#include "Cell.h"

Cell::Cell()
{
	active = false;

	if (active)
		color = BLACK;
	else
		color = WHITE;
}

Cell::~Cell()
{

}

void Cell::Draw()
{
	DrawRectangle(position.x, position.y, width, height, color);
}

int Cell::GetNeighbors()
{
	//Return an array of neighboring blocks
	//return neighbors;

	//if cells position is adjacent to another and is active, add to neighbors array
	//A cell has eight neighbors, of those eight which of them are active?
	if(position.x)
		neighbors;

	//Neighbors can be horizontally, vertically, or diagonally adjacent so a block in the center of the board would have 8 neighbors
	//Meanwhile one in a corner would only have 3.
	//There are many ways of approaching this problem, so take a few minutes to devise a good algorithm, and then try to implement it.
}



