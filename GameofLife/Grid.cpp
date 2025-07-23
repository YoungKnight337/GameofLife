#include "Grid.h"

Grid::Grid()
{

}

Grid::~Grid()
{

}


void Grid::Iniitialize(int a, int b)
{
	Seed();
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
	//Plant Active Cells within the Grid


	//hich takes in a Python list of block coordinate tuples 
	//something like[(x1, y1), (x2, y2)] and sets the Blocks in those positions to be live.If you get
	//stuck, review the implementation of random seed to see how we can get the blocks to be visible on
	//the board; however, you should not use the same for loop that random seed uses hint : your loop
	//should involve the parameter block coords..
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