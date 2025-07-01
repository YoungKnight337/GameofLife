#include "Grid.h"

Grid::Grid(int a, int b)
{
	a = row;
	b = column;
}

Grid::~Grid()
{

}

void Grid::Iniitialize()
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
		{

		}
	}
}

void Grid::Draw()
{
	
}

void Grid::Update()
{
	for (Cell : Cells)
	{
		Cell::Update();
	}
}