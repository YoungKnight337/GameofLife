#pragma once
#include "raylib.h"

class Cell
{
private:
	int height;
	int width;
	bool active;
	Vector2 position;
	Color color;
public:
	Cell();
	~Cell();
	void Update();
	void Draw();
};

