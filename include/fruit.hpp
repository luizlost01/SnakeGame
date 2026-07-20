#pragma once
#include <raylib.h>
#include <vector> 
#include <iostream>

class Fruit {
    public:
        std::vector<Vector2> body; 

        Fruit(float currentXPose, float currentYPose);
        void Draw(float currentXPose, float currentYPose);
        void Catch();
        void Position();
    
    };