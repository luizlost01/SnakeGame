#include <raylib.h>
#include "snake.hpp"
#include "fruit.hpp"

static const int screenWidth = 800;
static const int screenHeight = 800;

int main() {

    InitWindow(screenWidth,screenHeight, "Snake");
    SetTargetFPS(60);

    Snake Player(screenWidth / 2, screenHeight / 2);
    Fruit apple(400, 210);

    Player.Increase();
    Player.Increase();
    Player.Increase();
    Player.Increase();

    while (!WindowShouldClose())
    {
        
        BeginDrawing();
        ClearBackground(WHITE);
        Player.Draw();
        Player.Update();
        apple.Draw();
        EndDrawing();
    }

    CloseWindow();
    

    return 0;
}