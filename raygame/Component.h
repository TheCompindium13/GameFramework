#pragma once
class Actor;


class Component
{
public:
	Component();
	Component(Actor* owner, const char* name);
	virtual ~Component();

	/// <summary>
	/// start is called before the first update
	/// </summary>
	virtual void start() {};
	/// <summary>
	/// is called every time the game loops
	/// </summary>
	/// <param name="deltaTime">The amount of timw that has passed since the game has started</param>
	virtual void update(float deltaTime) {};
	/// <summary>
	/// called after update in order to update visuals
	/// </summary>
	virtual void draw() {};
	/// <summary>
	/// end is called when the scene ends
	/// or when the actor is removed from the sceme
	/// </summary>
	virtual void end() {};
	/// <summary>
	/// Called when the owner overlays with another actor.
	/// </summary>
	/// <param name="other">the actor the owner was overlayed on</param>
	virtual void onCollision(Actor* other) {};
	/// <summary>
	/// called right before the actor is going to be destroyed
	/// </summary>
	virtual void onDestroy() {};
	/// <returns>gets the name of this component.
	/// is usually the type name</returns>
	const char* getName() { return m_name; }
	/// <returns>gets the actor this compnent is attached to</returns>
	Actor* getOwner() { return m_owner; }
private:
	const char* m_name;
	Actor* m_owner;
};

