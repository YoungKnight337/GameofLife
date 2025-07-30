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

	//Conway's Game of Life uses the 8-cell Moore neighborhood, which includes the diagonal neighbors. Not all CAs use this.
	//Others use the 4-cell Von Neumann neighborhood, which excludes diagonal neighbors.

	/*
		Input: A square tessellation, T, containing a connected component P of black cells.
		Output: A sequence B (b1, b2, ..., bk) of boundary pixels i.e. the contour.
		Define M(a) to be the Moore neighborhood of pixel a.
		Let p denote the current boundary pixel.
		Let c denote the current pixel under consideration i.e. c is in M(p).
		Let b denote the backtrack of c (i.e. neighbor pixel of p that was previously tested)
 
		Begin
			Set B to be empty.
			From bottom to top and left to right scan the cells of T until a black pixel, s, of P is found.
			Insert s in B.
			Set the current boundary point p to s i.e. p=s
			Let b = the pixel from which s was entered during the image scan.
			Set c to be the next clockwise pixel (from b) in M(p).
			While c not equal to s do
			{
				if (c is black)
				{
					insert c in B
					Let b = p
					Let p = c
					(backtrack: move the current pixel c to the pixel from which p was entered)
					Let c = next clockwise pixel (from b) in M(p).
				}
				else
				{
					(advance the current pixel c to the next clockwise pixel in M(p) and update backtrack)
					Let b = c
					Let c = next clockwise pixel (from b) in M(p).
					end If
				}
			}
	*/
}
void Cell::Draw()
{
	if(active)
		DrawRectangle(position.x, position.y, width, height, color);
}

void Cell::Update()
{
	GetNeighbors();
	CheckNeighbors();
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
	// Function not implemented 
	//Return a list of neighboring blocks
	 neighbors; 
	//Neighbors can be horizontally, vertically, or diagonally adjacent so a block in the center of the board would have 8 neighbors,  while one in a corner would only have 3.
	//There are many ways of approaching this problem, so take a few minutes to devise a good algorithm, and then try to implement it.
}

void Cell::NewStatus()
{

}