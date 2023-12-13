#include "Testscene.h"
#include "Player.h"
#include "Transform2D.h"
#include "MoveComponent.h"
void Testscene::start()
{
	Scene::start();
	Player* player = new Player();
	MoveComponent* playerMove = (MoveComponent*)player->addComponent(new MoveComponent(100, player));
	MathLibrary::Vector2 scale = MathLibrary::Vector2(50, 50);
	player->getTransform()->setScale(scale);
	addActor(player);
}
