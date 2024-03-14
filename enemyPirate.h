//pirate header file

#pragma once
#include "Enemy.h"
#include <iostream>
#include <string>

class enemyPirate : public Enemy 
{
public:
    enemyPirate(int strength)
        : Enemy(strength, 150) {}

    //methods
    void displayCharacter() const override;
    void attack(Character& target) override;
    void receiveDamage(int damage) override;
};
