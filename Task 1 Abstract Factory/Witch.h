#pragma once
#include "Enemy.h"
#include <iostream>
using namespace std;

// The Witch class is a specific type of enemy that derives from the Enemy base class.
// It implements the searchHero and triggerToHero functions.
class Witch :
    public Enemy
{
public:
	// Override of the searchHero function to determine how a Witch searches for the hero.
	void searchHero() override;

	// Override of the triggerToHero function to define the actions a Witch takes when encountering the hero.
	void triggerToHero() override;
};

