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

	//1. A live cell with fewer than two live neighbors dies. 
	// if(active && neighbors < 2)
	//	active = false;
	//2. A live cell with more than three live neighbors also dies.
	// if(active && neighbors > 3)
	//	active = false;
	//3. A live cell with exactly two or three live neighbors lives.
	// if(active && (neighbors == 2 || neighbors == 3))
	//	active = true;
	//4. A dead cell with exactly three live neighbors becomes alive.
	// if(!active && neighbors == 3)
	//	acitve = true;
}