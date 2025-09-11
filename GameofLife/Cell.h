#pragma once
#include "raylib.h"

//https://github.com/raysan5/raylib-games/tree/master
//Cell has two states. Alive or Dead: bool active
//Cell has eight neighbors: int neighbors?
class Cell
{
private:
	int height = 10;
	int width = 10;
	int i;
	int j;
	int neighbors;
	bool active;
	Vector2 position;
	Color color;
public:
	Cell();
	~Cell();
	void Draw();
	int GetNeighbors(int neighbors);
	bool GetState(bool active) { return active; }
	bool SetState(bool active) { this->active; }
	//Vector2 GetPosition() { return position; }
};

