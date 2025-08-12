#pragma once
#include <list>
#include "raylib.h"

class Cell
{
private:
	int height = 20;
	int width = 20;
	int neighbors;
	bool active;
	std::list<Cell> collection;
	Vector2 position;
	Color color;
public:
	Cell();
	~Cell();
	void Update();
	void Draw();
	void Rules();
	void GetNeighbors();
	
	Vector2 GetPosition() { return position; }
	int CheckNeighbors();
	bool GetState(bool active) { return active; }
	bool SetState(bool active) { this->active = active; }
};

