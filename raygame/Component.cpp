#include "Component.h"
Component::Component()
{
	m_name = nullptr;
	m_owner = nullptr;
}
Component::~Component()
{
	//delete[] = m_name;

}
Component::Component(Actor* owner, const char* name)
{
	m_name = name;
	m_owner = owner;
}
