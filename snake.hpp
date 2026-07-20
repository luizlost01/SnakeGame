#pragma once
#include <raylib.h>
#include <vector> 
#include <iostream>

class Snake {
    public:
        std::vector<Vector2> body; 
        Vector2 speed;

        Snake(float currentXPose, float currentYPose);
        void Update();
        void Draw();
        void Increase();
};