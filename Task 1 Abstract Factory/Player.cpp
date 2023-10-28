#include "Player.h"

// Constructor for the Player class. 
//It initializes the player's interaction with a specific game world.
Player::Player(World* gameWorld)
{
    this->gameWorld = gameWorld;
}

// createHero function is responsible for creating a hero character within the current game world.
// It delegates the hero creation to the game world associated with the player and demonstrates
// the hero's attack and defense actions.
void Player::createHero()
{
    Hero* hero = gameWorld->CreateHero();
    hero->attack();
    hero->defense();
}

// createEnemy function is responsible for creating an enemy character within the current game world.
// It delegates the enemy creation to the game world associated with the player and demonstrates
// the enemy's search for the hero and trigger action towards the hero.
void Player::createEnemy()
{
    Enemy* enemy = gameWorld->CreateEnemy();
    enemy->searchHero();
    enemy->triggerToHero();
}
