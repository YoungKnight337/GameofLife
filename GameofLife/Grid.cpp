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