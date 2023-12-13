#include "MoveComponent.h"

MoveComponent::MoveComponent(float maxspeed, Actor* owner) : Component(owner, "MoveComponent")
{
	m_maxSpeed = maxspeed;
}

void MoveComponent::update(float deltaTime)
{
	MathLibrary::Vector2 position = getOwner()->getTransform()->getLocalPosition();
	if (getVelocity().getMagnitude() > getMaxSpeed())
	{
		MathLibrary::Vector2 newVelocity = getVelocity().getNormalized() * getMaxSpeed();
		setVelocity(newVelocity);
	}
	position = position + getVelocity() * deltaTime;
	getOwner()->getTransform()->setLocalPosition(position);
}
