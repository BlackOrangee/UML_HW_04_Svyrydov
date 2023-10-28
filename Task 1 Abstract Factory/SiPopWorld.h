#pragma once
#include "World.h"
#include "Archer.h"
#include "Witch.h"
#include <iostream>
using namespace std;

// The SiPopWorld class is a concrete implementation of the World class.
class SiPopWorld :
    public World
{
public:
	// The CreateHero function is an overridden method from the World class.
	// It creates and returns a Hero object customized for the Si Pop world.
	Hero* CreateHero() override;

	// The CreateEnemy function is an overridden method from the World class.
	// It creates and returns an Enemy object customized for the Si Pop world.
	Enemy* CreateEnemy() override;
};

