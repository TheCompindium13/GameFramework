#pragma once
#include "Component.h"
#include <Vector2.h>
#include "Transform2D.h"
#include "Actor.h"
class MoveComponent :
    public Component
{
public:
    MoveComponent(float maxspeed, Actor* owner);
    MathLibrary::Vector2 getVelocity() { return m_velocity; }
    void setVelocity(MathLibrary::Vector2 velocity) { m_velocity = velocity; }
    void setMaxSpeed(float maxSpeed) { m_maxSpeed = maxSpeed; }
    float getMaxSpeed() { return m_maxSpeed; }
    void update(float deltaTime);
private:
    float m_maxSpeed;
    MathLibrary::Vector2 m_velocity;
};
