#pragma once
#include <list>
#include "raylib.h"

class Cell
{
private:
	int height = 20;
	int width = 20;
	std::list<int> neighbors;
	bool active;
	Vector2 position;
	Color color;
public:
	Cell();
	~Cell();
	void Update();
	void Activate();
	void NewStatus();
	void Draw();
	void Rules();
	void GetNeighbors();
};

