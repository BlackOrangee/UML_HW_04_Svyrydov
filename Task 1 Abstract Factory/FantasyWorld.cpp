#include "FantasyWorld.h"

// The CreateHero function is an overridden method from the World class.
// It creates and returns a Hero object customized for the fantasy world. In this implementation,
// it creates a Knight, which is a type of Hero with specific characteristics related to a fantasy setting.
Hero* FantasyWorld::CreateHero()
{
    Hero* hero = new Knight();
    return hero;
}

// The CreateEnemy function is an overridden method from the World class.
// It creates and returns an Enemy object customized for the fantasy world. In this implementation,
// it creates a Goblin, which is a type of Enemy with specific characteristics related to a fantasy setting.
Enemy* FantasyWorld::CreateEnemy()
{
    Enemy* enemy = new Goblin();
    return enemy;
}

