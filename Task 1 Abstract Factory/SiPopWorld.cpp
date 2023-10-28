#include "SiPopWorld.h"

// The CreateHero function is an overridden method from the World class.
// It creates and returns a Hero object customized for the Si Po world. In this implementation,
// it creates a Archer, which is a type of Hero with specific characteristics related to a fantasy setting.
Hero* SiPopWorld::CreateHero()
{
	Hero* hero = new Archer();
	return hero;
}

// The CreateEnemy function is an overridden method from the World class.
// It creates and returns an Enemy object customized for the Si Po world. In this implementation,
// it creates a Witch, which is a type of Enemy with specific characteristics related to a fantasy setting.
Enemy* SiPopWorld::CreateEnemy()
{
	Enemy* enemy = new Witch();
	return enemy;
}