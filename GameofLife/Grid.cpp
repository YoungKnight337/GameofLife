#include "Grid.h"

Grid::Grid()
{
}

Grid::~Grid()
{

}

void Grid::Iniitialize()
{
	//In the init method of the Board class, you need to finish laying out the board. 
	//Currently, only the board is drawn.
	
	//We wish to make a Block to each square on the board: Board is composed of cells that are either active or dead.
	
	//Store that Block in a dictionary(self.block list): Store Cell in Array?
	
	//Note that you just want to create the Block; DO NOT SET TO LIVE: Simply set Cell to False once instantiated.

	for (size_t i = 0; i < N; i++)
	{
		for (size_t j = 0; j < N; j++)
		{
			cell; 
			cell.SetState(false);
		}
	}
} 

void Grid::Draw()
{
	for (size_t i = 0; i < N; i++)
	{
		for (size_t j = 0; j < N ; j++)
		{
			cell.Draw(); //cell[i][j].Draw();
		}
	}
}

void Grid::Seed()
{
	float i = cell.GetPosition().x;
	float j = cell.GetPosition().y;

	//Plant Active Cells within the Grid
	
	{ i, j; }
	
	//Which takes in a list of block coordinate tuples something like[(x1, y1), (x2, y2)] and sets the Blocks in those positions to be live.
	
	//If you get stuck, review the implementation of random seed to see how we can get the blocks to be visible on the board.
	
	//However, you should not use the same for loop that random seed uses hint : your loop should involve the parameter block coords..

	for(size_t i = 0; i < N ; i++)
	{
		for (size_t j = 0; j < N; j++)
		{
			cell.SetState(true); //cell[i][j].SetState(true);
		}
	}
}

void Grid::Rules()
{
	int neighbors;

	//Check each cell that is alive alongside it neighbors
	if (cell.GetState(true))
	{
		if (cell.GetNeighbors() == 3 || cell.GetNeighbors() == 2)
			cell.SetState(true); //cell[a][b].SetState(true);
		if (cell.GetNeighbors() < 2 || cell.GetNeighbors() > 3)
			cell.SetState(false); //cell[a][b].SetState(false);
	}
	else
	{
		if (cell.GetNeighbors() == 3)
			cell.SetState(true); //cell[a][b].SetState(true);
	}

}

void Grid::CheckCell(size_t a, size_t b)
{
	//grid[a][b];
	//[Blackhalo117]
	//I'd make a method to checking the nearby cells via that +/- X and Y.
	//You can then use the outcome to write into a new array storing the next "state"

	if (cell.GetHeight() + 1 < N)
	{
		grid[cell.GetWidth()][cell.GetHeight() + 1];
	}
	if (cell.GetHeight() - 1 >= 0)
	{
		grid[cell.GetWidth()][cell.GetHeight() - 1];
	}
	if (cell.GetWidth() + 1 < N)
	{
		grid[cell.GetWidth() + 1][cell.GetHeight()];
	}
	if (cell.GetWidth() - 1 >= 0)
	{
		grid[cell.GetWidth() - 1][cell.GetHeight()];
	}
	Rules();
}

void Grid::Update()
{
	for (size_t i = 0; i < N; i++)
	{
		for (size_t j = 0; j < N; j++)
		{
			Seed();
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

/*
	Then you can just iterate over all the cells with something like
	for i in range(0, self.width):
	   for j in range(0, self.height):
				 check_cell(x, y)
	self.height and self.width just being how big you've made the area for the game or whatever
*/

/*for (int i = 0; i < N; i++)
{
	for (int j; j < N; j++)
	{
		CheckCell();
	}
}
*/
