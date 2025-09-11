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



/*void Cell::Rules()
{
	if (active)
	{
		if (neighbors < 2 || neighbors > 3)
			active = false;
		if (neighbors == 2 || neighbors == 3)
			active = true;
	}
	else
	{
		if (neighbors == 3)
			active = true;
	}
}*/

//Input: A square tessellation, T, containing a connected component P of black cells.
//Output: A sequence B(b1, b2, ..., bk) of boundary pixels i.e.the contour.

//int Cell::CheckNeighbors()
//{

	//Conway's Game of Life uses the 8-cell Moore neighborhood, which includes the diagonal neighbors. 
	//Neighbourhood (graph theory)
	//Adjacent Vertex
	//The neighbourhood of a vertex v in a graph G is the subgraph of G induced by all vertices adjacent to v, i.e.
	//The graph composed of the vertices adjacent to v and all edges connecting vertices adjacent to v.
	/*
		Define M(a) to be the Moore neighborhood of pixel a: pixel a;
		Let p denote the current boundary pixel: pixel p;
		Let c denote the current pixel under consideration i.e. c is in M(p). pixel c;
		Let b denote the backtrack of c (i.e. neighbor pixel of p that was previously tested) pixel b;

		Begin
			Set B to be empty.
			From bottom to top and left to right scan the cells of T until a black pixel, s, of P is found.
			Insert s in B.
			Set the current boundary point p to s i.e. p = s
			Let b = the pixel from which s was entered during the image scan. //Image Scan??
			Set c to be the next clockwise pixel (from b) in M(p). 
			while(c != s)
			{
				if (c == black)
				{
					insert c in B
					Let b = p
					Let p = c
					(backtrack: move the current pixel c to the pixel from which p was entered) //Loop?
					Let c = next clockwise pixel (from b) in M(p).  
				}
				else
				{
					(advance the current pixel c to the next clockwise pixel in M(p) and update backtrack)
					Let b = c
					Let c = next clockwise pixel (from b) in M(p).
				}
			}
	*/
//}

int Cell::GetNeighbors(int neighbors)
{
	//Return a list of neighboring blocks
	//if cells position is adjacent to another, add to neighbors list
	//if(position.x)
	//neighbors; 
	//neighbors++;

	//Neighbors can be horizontally, vertically, or diagonally adjacent so a block in the center of the board would have 8 neighbors,  while one in a corner would only have 3.
	//There are many ways of approaching this problem, so take a few minutes to devise a good algorithm, and then try to implement it.
}




