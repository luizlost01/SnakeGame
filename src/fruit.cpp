#include "fruit.hpp"


Fruit::Fruit(float currentXPose, float currentYPose) {
    body.push_back({currentXPose,currentYPose});
};

void Fruit::Draw(float currentXPose, float currentYPose) {
    DrawCircle(currentXPose, currentYPose, 5, RED);
};