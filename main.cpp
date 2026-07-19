#include <raylib.h>

static const int screenWidth = 800;
static const int screenHeight = 800;

int main() {

    InitWindow(screenWidth,screenHeight, "Snake");
    Vector2 SnakePose = { (float)screenWidth / 2, (float)screenHeight / 2 };

    SetTargetFPS(60);

    while (!WindowShouldClose())
    {

        if(IsKeyDown(KEY_UP))    SnakePose.y -= 2.0f;
        if(IsKeyDown(KEY_DOWN))  SnakePose.y += 2.0f;
        if(IsKeyDown(KEY_LEFT))  SnakePose.x -= 2.0f;
        if(IsKeyDown(KEY_RIGHT)) SnakePose.x += 2.0f;


        if (SnakePose.x < 0) SnakePose.x = 0;
        if (SnakePose.y < 0) SnakePose.y = 0;
        if (SnakePose.x > 780) SnakePose.x = 780;
        if (SnakePose.y > 580) SnakePose.y = 580;
        

        BeginDrawing();

            ClearBackground(WHITE);
            DrawCircle(SnakePose.x, SnakePose.y, 5.0, BLACK);

            

        EndDrawing();
    }

    CloseWindow();
    

    return 0;
}