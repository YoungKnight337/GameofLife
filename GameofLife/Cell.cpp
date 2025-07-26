#include "Cell.h"

Cell::Cell()
{
	if (active)
		color = BLACK;
	else
		color = WHITE;
}

Cell::~Cell()
{

}

int Cell::CheckNeighbors()
{

}
void Cell::Draw()
{
	if(active)
		DrawRectangle(position.x, position.y, width, height, color);
}

void Cell::Update()
{
	GetNeighbors();
	Rules();
}

void Cell::Activate()
{
	active = true;
}
void Cell::Rules()
{
	//if active
	if (active)
	{
		//if neighbors are less than two or more than three
		if (neighbors < 2 || neighbors > 3)
			active = false;
		// if neighbors are exactly two or three
		if (neighbors == 2 || neighbors == 3)
			active = true;
	}
	//if (!active)
	else
	{
		//A dead cell with exactly three live neighbors becomes alive.
		if (neighbors == 3)
			active = true;
	}
}

void Cell::GetNeighbors()
{
	return; // Function not implemented 
	//Return a list of neighboring blocks.
	//Neighbors can be horizontally, vertically, or diagonally adjacent so a block in the center of the board would have 8 neighbors,  while one in a corner would only have 3.
	//There are many ways of approaching this problem, so take a few minutes to devise a good algorithm, and then try to implement it.
}

void Cell::NewStatus()
{

}