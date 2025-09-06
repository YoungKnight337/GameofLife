#include "Grid.h"

Grid::Grid()
{
}

Grid::~Grid()
{

}


void Grid::Iniitialize()
{
	//In the init method of the Board class, you need to finish laying out the board. Currently, only the board is drawn.
	//We wish to make a Block to each square on the board, and store that Block in a dictionary(self.block list).
	//Note that you just want to create the Block; DO NOT SET TO LIVE

	for (size_t i = 0; i < N; i++)
	{
		for (size_t j = 0; j < N; j++)
		{
			cell; 
		}
	}
} 

void Grid::Draw()
{
	for (size_t i = 0; i < N; i++)
	{
		for (size_t j = 0; j < N ; j++)
		{
			cell[i][j].Draw(); 
		}
	}
}

void Grid::Seed()
{
	int neighbors{};
	float i = cell.GetPosition().x;
	float j = cell.GetPosition().y;

	//Plant Active Cells within the Grid
	//{ i, j; }
	if (cell.GetNeighbors(neighbors) == 3 && cell.GetState(true))
		cell.SetState(true); //cell[a][b].SetState(true);
	if (cell.GetNeighbors(neighbors) == 2 && cell.GetState(true))
		cell.SetState(true); //cell[a][b].SetState(true);
	if (cell.GetNeighbors(neighbors) < 2 && cell.GetState(true))
		cell.SetState(false); //cell[a][b].SetState(false);
	if (cell.GetNeighbors(neighbors) > 3 && cell.GetState(true))
		cell.SetState(false); //cell[a][b].SetState(false);
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

void Grid::CheckNeighbors()
{
	//Check each cell that is alive alongside it neighbors
	//If cell is active while having 2 and 3 cells it stays active
	//	cell.GetNeighbors(neighbors);[i][j]
	// if(cell.GetNeighbors(neighbors) == 3 && cell.GetState(true))
	// 		cell.SetState(true); //cell[a][b].SetState(true);
	// else
	//		cell.SetState(false);
	// if(cell.GetNeighbors(neighbors) == 2 && cell.GetState(true))
	// 		cell.SetState(true); //cell[a][b].SetState(true);
	// else
	//		cell.SetState(false);
}

void Grid::Update()
{
	for (size_t i = 0; i < N; i++)
	{
		for (size_t j = 0; j < N; j++)
		{

			cell.Update(); //cell[i][j].Update();
		}
	}
}