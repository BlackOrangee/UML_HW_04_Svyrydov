#pragma once
#include "Hero.h"
#include <iostream>
using namespace std;

// The Knight class is a concrete subclass of the Hero class, representing a hero character with specific attack and defense behaviors.

class Knight : public Hero
{
public:
    // Override of the attack() function inherited from the Hero class.
    // Implements the Knight's unique attack action.
    void attack() override;

    // Override of the defense() function inherited from the Hero class.
    // Implements the Knight's specific defense behavior.
    void defense() override;
};


