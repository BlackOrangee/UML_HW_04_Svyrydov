#pragma once
#include <iostream>
using namespace std;

// The Enemy class is an abstract base class representing various types of enemies in the game.
// It defines two pure virtual functions that must be implemented by derived enemy classes.
class Enemy
{
public:
    // A pure virtual function for an enemy to search for the hero character.
    // Subclasses must provide their own implementation to locate the hero.
    virtual void searchHero() = 0;

    // A pure virtual function for an enemy to trigger an action towards the hero character.
    // Subclasses must provide their own implementation for engaging with the hero.
    virtual void triggerToHero() = 0;
};
