#include "Grid.h"

Grid::Grid()
{

}

Grid::~Grid()
{

}

void Grid::Iniitialize(int a, int b)
{
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			cell;
		}
	}

	//for(auto& row : cells)
	//{ 
	// for(auto& column : cells)
	//	{
	//		cell;
	//	}
	//}
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

	//for(auto& row : cells)
	//{ 
	// for(auto& column : cells)
	//	{
	//		cell.Draw();
	//	}
	//}
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

	//for(auto& row : cells)
	//{ 
	// for(auto& column : cells)
	//	{
	//		cell.Update();
	//	}
	//}
}