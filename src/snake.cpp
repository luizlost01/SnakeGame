#include "snake.hpp"

Snake::Snake(float currentXPose, float currentYPose) {

    body.push_back({currentXPose, currentYPose});

    speed.x = 1.0f;
    speed.y = 1.0f;
}

void Snake::Update() {
    float velocity = 1.0f;

    if(IsKeyPressed(KEY_W)) {
        speed.x = 0;
        speed.y = - velocity;
    }

    if(IsKeyPressed(KEY_D)) {
        speed.x = + velocity;
        speed.y = 0;
    }
    
    if(IsKeyPressed(KEY_A)) {
        speed.x = - velocity;
        speed.y = 0;
    }

    if(IsKeyPressed(KEY_S)) {
        speed.x = 0;
        speed.y = + velocity;
    }

    body[0].x += speed.x;
    body[0].y += speed.y;

    for (int i = body.size() - 1; i > 0; i--) {
        body[i] = body[i - 1];
    }

    if (body[0].x < 0) body[0].x = 0;
    if (body[0].y < 0) body[0].y = 0;
    if (body[0].x > 800) body[0].x = 800;
    if (body[0].y > 800) body[0].y = 800;
}

void Snake::Draw() {

    for(std::size_t i = 0; i < body.size(); i ++) { 
        DrawCircle(body[i].x, body[i].y, 10.0, BLACK);
    }
}

void Snake::Increase() {
    body.push_back(body.back());
}