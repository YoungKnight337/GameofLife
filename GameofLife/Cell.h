#pragma once
#include <list>
#include "raylib.h"

class Cell
{
private:
	int height = 20;
	int width = 20;
	int neighbors;
	std::list<Cell> collection;
	bool active;
	Vector2 position;
	Color color;
public:
	Cell();
	~Cell();
	int CheckNeighbors();
	void Update();
	void Activate();
	void Draw();
	void Rules();
	void GetNeighbors();
};

