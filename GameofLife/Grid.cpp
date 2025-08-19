#include "Grid.h"

Grid::Grid()
{

}

Grid::~Grid()
{

}


void Grid::Iniitialize(int a, int b)
{
	//In the init method of the Board class, you need to finish laying out the board. Currently, only the board is drawn.
	//We wish to make a Block to each square on the board, and store that Block in a dictionary(self.block list).
	//Remember from Exercise 4.3 that Blocks can be any color listed in rgb.txt!
	//Read the comments in the code and think about the best way to do this.
	//Note that you just want to create the Block; DO NOT SET TO LIVE
	//Also, be sure to delete the raise Exception line.

	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			cell;
		}
	}
} 

void Grid::Draw(int a, int b)
{
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b ; j++)
		{
			cell.Draw();
		}
	}
}

void Grid::Seed()
{
	int neighbors;
	float i;
	float j;
	//Plant Active Cells within the Grid
	cell.GetPosition() = {i , j};
	if(cell.GetNeighbors(neighbors) == 3 && cell.GetState(true))
		cell.SetState(true);
	//Which takes in a list of block coordinate tuples something like[(x1, y1), (x2, y2)] and sets the Blocks in those positions to be live.
	//If you get stuck, review the implementation of random seed to see how we can get the blocks to be visible on the board.
	//However, you should not use the same for loop that random seed uses hint : your loop should involve the parameter block coords..
	for(int i = 0; i < 0 ; i++)
	{
		for (int j = 0; j < 0; j++)
		{
			cell.SetState(true);
		}
	}
}

void Grid::Update(int a, int b)
{
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{

			cell.Update();
		}
	}
}