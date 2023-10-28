#pragma once
#include "World.h"
#include "Knight.h"
#include "Goblin.h"
#include <iostream>
using namespace std;
// The FantasyWorld class is a concrete implementation of the World class.
class FantasyWorld : public World
{
public:
    // The CreateHero function is an overridden method from the World class.
    // It creates and returns a Hero object customized for the fantasy world.
    Hero* CreateHero() override;

    // The CreateEnemy function is an overridden method from the World class.
    // It creates and returns an Enemy object customized for the fantasy world.
    Enemy* CreateEnemy() override;
};


