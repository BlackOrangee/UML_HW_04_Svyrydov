// Task 1 Abstract Factory
//


#include "Archer.h"
#include "Enemy.h"
#include "FantasyWorld.h"
#include "Goblin.h"
#include "Hero.h"
#include "Knight.h"
#include "Player.h"
#include "SiPopWorld.h"
#include "Witch.h"
#include "World.h"
#include <iostream>
using namespace std;

int main() {
    // Create a player in the Fantasy World
    Player fantasyPlayer(new FantasyWorld());

    std::cout << "Fantasy World - Demonstration:" << std::endl;
    std::cout << "--------------------------------" << std::endl;

    std::cout << "Creating an Enemy in Fantasy World:" << std::endl;
    fantasyPlayer.createEnemy();
    std::cout << "--------------------------------" << std::endl;

    std::cout << "Creating a Hero in Fantasy World:" << std::endl;
    fantasyPlayer.createHero();
    std::cout << "--------------------------------" << std::endl;

    // Create a player in the SiPop World
    Player sipopPlayer(new SiPopWorld());

    std::cout << "SiPop World - Demonstration:" << std::endl;
    std::cout << "--------------------------------" << std::endl;

    std::cout << "Creating an Enemy in SiPop World:" << std::endl;
    sipopPlayer.createEnemy();
    std::cout << "--------------------------------" << std::endl;

    std::cout << "Creating a Hero in SiPop World:" << std::endl;
    sipopPlayer.createHero();
    std::cout << "--------------------------------" << std::endl;

}
