#include <iostream>
#include "raylib.h"
#include "Grid.h"

#define GRID_HORIZONTAL 100
#define GRID_VERTICAL   100
#define SCREEN_WIDTH    800
#define SCREEN_HEIGHT   450
#define FRAME_RATE       60

int main()
{
    //constexpr int SCREEN_WIDTH = 800;
    //constexpr int SCREEN_HEIGHT = 450;
    //constexpr int FRAME_RATE = 60;

    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Space Shooter");
    SetTargetFPS(FRAME_RATE);

    Grid board;

    board.Iniitialize(GRID_HORIZONTAL, GRID_VERTICAL);
    while (WindowShouldClose() == false)
    {
        board.Update(GRID_HORIZONTAL, GRID_VERTICAL);
        
        BeginDrawing();
        ClearBackground(WHITE);

        board.Draw(GRID_HORIZONTAL, GRID_VERTICAL);
        EndDrawing();
    }
    
    CloseWindow();
}


