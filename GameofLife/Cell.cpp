#include "Cell.h"

Cell::Cell()
{

}

Cell::~Cell()
{

}

void Cell::Initialize()
{

}

void Cell::Draw()
{

}

void Cell::Update()
{
	//if active
	if(active)
	{
		//if neighbors are less than two or more than three
		if(neighbors < 2||neighbors > 3)
			active = false;
		// if neighbors are exactly two or three
		if((neighbors == 2 || neighbors == 3))
			active = true;
	}
	//if (!active)
	else 
	{
		//A dead cell with exactly three live neighbors becomes alive.
		if (neighbors == 3)
			active = true;
	}
	
}