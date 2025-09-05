#include <iostream>
#include "raylib.h"
#include "Grid.h"

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

    board.Iniitialize();
    while (WindowShouldClose() == false)
    {
        board.Update();
        
        BeginDrawing();
        ClearBackground(WHITE);

        board.Draw();
        EndDrawing();
    }
    
    CloseWindow();
}


