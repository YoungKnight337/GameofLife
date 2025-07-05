#include "Grid.h"

Grid::Grid()
{

}

Grid::~Grid()
{

}

void Grid::Iniitialize()
{
	for (int i = 0; i < GRID_ROW; i++)
	{
		for (int j = 0; j < GRID_COLUMN; j++)
		{
			Cell cell(false);
		}
	}
}

void Grid::Draw()
{
	for (int i = 0; i < GRID_ROW; i++)
	{
		for (int j = 0; j < GRID_COLUMN ; j++)
		{
			Cell cell(false);
			Cell cell(true);
		}
	}
}

void Grid::Update()
{
	
}