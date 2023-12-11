#include "Testscene.h"
#include "Player.h"
#include "Transform2D.h"
void Testscene::start()
{
	Scene::start();
	
	MathLibrary::Vector2 scale = MathLibrary::Vector2(50, 50);
	Player* player = new Player();
	player->getTransform()->setScale(scale);
	addActor(player);
}
