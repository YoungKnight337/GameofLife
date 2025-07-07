#include <iostream>
#include "raylib.h"
#include "Grid.h"


int main()
{
    constexpr int SCREEN_WIDTH = 800;
    constexpr int SCREEN_HEIGHT = 700;
    constexpr int FRAME_RATE = 60;

    constexpr int GRID_ROW = 100;
    constexpr int GRID_COLUMN = 100;

    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Space Shooter");
    SetTargetFPS(FRAME_RATE);

    Grid board;

    board.Iniitialize(GRID_ROW, GRID_COLUMN);
    while (WindowShouldClose() == false)
    {
        board.Update(GRID_ROW, GRID_COLUMN);
        
        BeginDrawing();
        ClearBackground(WHITE);

        board.Draw(GRID_ROW,GRID_COLUMN);
        EndDrawing();
    }
    
    CloseWindow();
}


