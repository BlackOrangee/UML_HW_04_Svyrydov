#pragma once
#include "Enemy.h"
#include <iostream>
using namespace std;

// The Goblin class is a specific type of enemy that derives from the Enemy base class.
// It implements the searchHero and triggerToHero functions.
class Goblin : public Enemy
{
public:
    // Override of the searchHero function to determine how a Goblin searches for the hero.
    void searchHero() override;

    // Override of the triggerToHero function to define the actions a Goblin takes when encountering the hero.
    void triggerToHero() override;
};


