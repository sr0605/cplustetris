#include <raylib.h>
#include "grid.h"
#include <iostream>


int main() 
{
    InitWindow(300, 600, "TetrisClone");
    SetTargetFPS(60);

    Color darkBlue = {44, 44, 127, 255};

    Grid grid = Grid();
    grid.Print();



    while(WindowShouldClose() == false){
        BeginDrawing();
        ClearBackground(darkBlue);
        grid.Draw();



        EndDrawing();
    }





    CloseWindow();

    return 0;
}