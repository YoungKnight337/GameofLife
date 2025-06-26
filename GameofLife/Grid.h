#pragma once
#include "raylib.h"


class Cell;

class Grid
{
private:
	int row;
	int colum;

public:
	Grid();
	~Grid();
	void Iniitialize();
	void Update();
};

