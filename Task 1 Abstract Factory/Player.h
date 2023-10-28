#pragma once
#include "World.h"
#include "Hero.h"
#include "Enemy.h"
#include <iostream>
using namespace std;

// The Player class represents a player in the game. It interacts with a specific world
// to create heroes and enemies in that world.
class Player
{
private:
    World* gameWorld; // A pointer to the game world where the player interacts.

public:
    // Constructor for the Player class. It takes a pointer to a World object
    // to specify the game world in which the player participates.
    Player(World*);

    // createHero function is responsible for creating a hero character within the current game world.
    void createHero();

    // createEnemy function is responsible for creating an enemy character within the current game world.
    void createEnemy();
};


