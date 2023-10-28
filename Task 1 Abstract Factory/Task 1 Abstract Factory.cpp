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

    cout << "Fantasy World - Demonstration:" << endl;
    cout << "--------------------------------" << endl;

    cout << "Creating an Enemy in Fantasy World:" << endl;
    fantasyPlayer.createEnemy();
    cout << "--------------------------------" << endl;

    cout << "Creating a Hero in Fantasy World:" << endl;
    fantasyPlayer.createHero();
    cout << "--------------------------------" << endl;

    // Create a player in the SiPop World
    Player sipopPlayer(new SiPopWorld());

    cout << "SiPop World - Demonstration:" << endl;
    cout << "--------------------------------" << endl;

    cout << "Creating an Enemy in SiPop World:" << endl;
    sipopPlayer.createEnemy();
    cout << "--------------------------------" << endl;

    cout << "Creating a Hero in SiPop World:" << endl;
    sipopPlayer.createHero();
    cout << "--------------------------------" << endl;

}
