#include <raylib.h>
#include "snake.hpp"
#include "fruit.hpp"

static const int screenWidth = 800;
static const int screenHeight = 800;

int main() {

    InitWindow(screenWidth,screenHeight, "Snake");
    SetTargetFPS(60);

    Snake Player(screenWidth / 2, screenHeight / 2);
    Fruit Apple(400, 210);
    
    Player.Increase();
    Player.Increase();
    Player.Increase();
    Player.Increase();
    
    while (!WindowShouldClose())
    {
        
        BeginDrawing();
        ClearBackground(WHITE);
        Player.Draw();
        Apple.Draw(400, 500);
    
        
        if(CheckCollisionCircles(Player.body[0], 5, Apple.body[0].x, 5)) {
            DrawText("COLLISION", 300, 30, 15, BLACK);
        }
        
        Player.Update();

        EndDrawing();
    }

    CloseWindow();
    

    return 0;
}