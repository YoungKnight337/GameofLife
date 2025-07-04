#pragma once
#include "raylib.h"

class Cell
{
private:
	int height = 20;
	int width = 20;
	bool active;
	Vector2 position;
	Color color;
public:
	Cell(bool active);
	~Cell();
	void Update();
	void Draw();
};

