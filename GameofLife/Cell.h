#pragma once
#include "raylib.h"

//Cell has two states. Alive or Dead: bool active
//Cell has eight neighbors: int neighbors?
class Cell
{
private:
	int height = 10;
	int width = 10;
	int neighbors;
	int i;
	int j;
	bool active;
	Vector2 position;
	Color color;
public:
	Cell();
	~Cell();
	void Draw();
	int GetHeight() { return height; }
	int GetWidth() { return width; }
	int GetNeighbors(int neighbors);
	bool GetState(bool active) { return active; }
	bool SetState(bool active) { this->active; }
	Vector2 GetPosition() { return position; }
};

