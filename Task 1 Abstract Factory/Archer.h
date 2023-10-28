#pragma once
#include "Hero.h"
#include <iostream>
using namespace std;

// Archer class, derived from the Hero base class.
class Archer : public Hero
{
public:
    // Implementation of the attack() function for the Archer class.
    // This function outputs a message indicating that the Archer performs a ranged attack.
    void attack() override;

    // Implementation of the defense() function for the Archer class.
    // This function outputs a message indicating that the Archer uses agility to evade attacks for defense.
    void defense() override;
};


