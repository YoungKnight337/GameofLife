#include "Grid.h"

Grid::Grid()
{
}

Grid::~Grid()
{
}

void Grid::Iniitialize()
{	
	for (size_t i = 0; i < N; i++) //for(int i = 0; i < 100; i++)
	{
		for (size_t j = 0; j < N; j++) //for(int j = 0; j < 100; j++)
		{
			cell;
			//Seed();
		}
	}
} 

void Grid::Draw()
{
	for (size_t i = 0; i < N; i++) //N = 100
	{
		for (size_t j = 0; j < N ; j++) //N = 100
		{
			cell.Draw(); 
		}
	}
}

void Grid::Seed()
{
	float i_x = cell.GetPosition().x;
	float j_y = cell.GetPosition().y;

	//cell[GetHeight][GetWidth]
	//cell[GetHeight][GetWidth].SetState(true);

	//Plant Active Cells within the Grid
	
	//Which takes in a list of block coordinates something like[(x1, y1), (x2, y2)] and sets the Blocks in those positions to be live.
	
	//If you get stuck, review the implementation of random seed to see how we can get the blocks to be visible on the board.
	
	//However, you should not use the same for loop that random seed uses 
	//Hint : your loop should involve the parameter block coords..
	//for (size_t i = 0; i < size ; i++)
	for(size_t i = 0; i < N ; i++)
	{
		for (size_t j = 0; j < N; j++)
		{
			{i_x, j_y;}
			int r_value = GetRandomValue(0, 100);
			cell.SetState(true); //cell[i][j].SetState(true);
			cell.SetState(false);
		}
	}
}

//IS CELL NEIGHBOR 
//IS CELL ACTIVE
//IF SO ADD TO A_NEIGHBORS LIST

//Maybe shift some responsability to cell class they track the neighbors the Grid tracks the state of the neighbors?
void Grid::Rules(size_t a, size_t b)
{
	for (size_t a = 0; a < N; a++)
	{
		for (size_t b = 0; b < N; b++)
		{
			//Check each cell that is alive alongside it neighbors
			if (cell.GetState(true))
			{
				if (cell.GetNeighbor() == 3) //3 active neighbors -> alive; cell[a][b].SetState(true);
					cell.SetState(true); 
				if (cell.GetNeighbor() == 2) //2 active neighbors -> alive; cell[a][b].SetState(true);
					cell.SetState(true); 
				if (cell.GetNeighbor() <  2) //Less than 2 active cells -> dead; cell[a][b].SetState(false);
					cell.SetState(false); 
				if (cell.GetNeighbor() >  3) //More than 3 active cells -> dead; cell[a][b].SetState(false);
					cell.SetState(false); 
			}
			else
			{
				if (cell.GetNeighbor() == 3) //3 active neighbors -> alive; cell[a][b].SetState(true); 
					cell.SetState(true); 
			}
		}
	}

}


void Grid::CheckCell(size_t a, size_t b)
{
	//[Blackhalo117]
	//I'd make a method to checking the nearby cells via that +/- X and Y.
	//You can then use the outcome to write into a new array storing the next "state"

	if (cell.GetHeight() + 1 < N)
	{
		grid[cell.GetWidth()][cell.GetHeight() + 1]; //grid[a][b]; grid[width][height+1]
	}
	if (cell.GetHeight() - 1 >= 0)
	{
		grid[cell.GetWidth()][cell.GetHeight() - 1]; //grid[a][b]; grid[width][height-1]
	}
	if (cell.GetWidth() + 1 < N)
	{
		grid[cell.GetWidth() + 1][cell.GetHeight()]; //grid[a][b]; grid[width+1][height]
	}
	if (cell.GetWidth() - 1 >= 0)
	{
		grid[cell.GetWidth() - 1][cell.GetHeight()]; //grid[a][b]; grid[width-1][height]
	}
	
	Rules(a,b);
}

void Grid::Update()
{
	for (size_t i = 0; i < N; i++)
	{
		for (size_t j = 0; j < N; j++)
		{
			CheckCell(i,j); 
		}
	}
}

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


