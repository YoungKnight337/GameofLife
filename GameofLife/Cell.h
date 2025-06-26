#pragma once
#include "raylib.h"

class Cell
{
private:
Vector2 position;
	bool alive;
	Color color;
public:
	Cell();
	~Cell();
	void Initialize();
	void Update();
	void Draw();
};

