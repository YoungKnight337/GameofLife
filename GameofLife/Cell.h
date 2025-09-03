#pragma once
#include <list>
#include "raylib.h"

//https://github.com/raysan5/raylib-games/tree/master
//Cell has two states. Alive or Dead: bool active
//Cell has eight neighbors: int neighbors?
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
	//int GetNeighbors(int neighbors);
	
	Vector2 GetPosition() { return position; }
	int CheckNeighbors();
	bool GetState(bool active) { return active; }
	bool SetState(bool active) { this->active = active; }
};

