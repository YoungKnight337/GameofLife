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


//Input: A square tessellation, T, containing a connected component P of black cells.
//Output: A sequence B(b1, b2, ..., bk) of boundary pixels i.e.the contour.

int Cell::GetNeighbors(int neighbors)
{
	//Return a list of neighboring blocks
	//if cells position is adjacent to another and is active, add to neighbors list
	//if(position.x)
	//	neighbors++;

	//Neighbors can be horizontally, vertically, or diagonally adjacent so a block in the center of the board would have 8 neighbors,  while one in a corner would only have 3.
	//There are many ways of approaching this problem, so take a few minutes to devise a good algorithm, and then try to implement it.
}



