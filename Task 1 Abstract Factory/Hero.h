#pragma once
#include <iostream>
using namespace std;

// The Hero class is an abstract base class that defines a basic interface for hero characters in a game.
class Hero
{
public:
    // This pure virtual function represents the hero's attack action.
    // Derived classes must implement their own attack behavior.
    virtual void attack() = 0;

    // This pure virtual function represents the hero's defense action.
    // Derived classes must implement their own defense behavior.
    virtual void defense() = 0;
};
