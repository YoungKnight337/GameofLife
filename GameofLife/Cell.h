#pragma once
#include "raylib.h"

class Cell
{
private:
	int height;
	int width;
	bool alive;
	Vector2 position;
	Color color;
public:
	Cell();
	~Cell();
	void Initialize();
	void Update();
	void Draw();
};

