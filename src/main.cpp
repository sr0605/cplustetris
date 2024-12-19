#include <raylib.h>
#include "grid.h"
#include "blocks.cpp"


int main() 
{
    InitWindow(300, 600, "TetrisClone");
    SetTargetFPS(60);

    Color darkBlue = {44, 44, 127, 255};
    Grid grid = Grid();
    grid.Print();

    LBlock block = LBlock();


    while(WindowShouldClose() == false){
        BeginDrawing();
        ClearBackground(darkBlue);
        grid.Draw();
        block.Draw();
        EndDrawing();
    }



    CloseWindow();

    return 0;
}