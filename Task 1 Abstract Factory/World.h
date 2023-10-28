#pragma once
#include "Hero.h"
#include "Enemy.h"
#include <iostream>
using namespace std;

// The World class represents an abstract world where heroes and enemies can be created.
class World
{
public:
    // The CreateHero function is a pure virtual function that should be implemented by derived classes.
    // It creates and returns a Hero object.
    virtual Hero* CreateHero() = 0;

    // The CreateEnemy function is a pure virtual function that should be implemented by derived classes.
    // It creates and returns an Enemy object.
    virtual Enemy* CreateEnemy() = 0;
};
