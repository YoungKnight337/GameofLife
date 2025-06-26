#include <iostream>
#include "raylib.h"
#include "Grid.h"


int main()
{
    constexpr int SCREEN_WIDTH = 800;
    constexpr int SCREEN_HEIGHT = 700;
    constexpr int FRAME_RATE = 60;

    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Space Shooter");
    SetTargetFPS(FRAME_RATE);

    Grid Board;

    Board.Iniitialize();

}

