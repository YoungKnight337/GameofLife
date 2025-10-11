#pragma once
#include <vector>
#include "raylib.h"

//Cell has two states. Alive or Dead: bool active
//Cell has eight neighbors: int neighbors?
class Cell 
{
private:
	int height = 10;
	int width = 10;
	std::vector <int> a_neighbors;
	int i;
	bool active;
	Vector2 position;
	Color color;
public:
	Cell();
	~Cell();
	void Draw();
	void ChangeState();
	int GetHeight() { return height; }
	int GetWidth()	{ return width;  }
	int GetNeighbors() const { return a_neighbors; };
	bool GetState(bool active) const { return active; }
	bool SetState(bool active) const { this->active;  }
	Vector2 GetPosition() { return position; }
};

//Input: A square tessellation, T, containing a connected component P of black cells.
//Output: A sequence B(b1, b2, ..., bk) of boundary pixels i.e.the contour.