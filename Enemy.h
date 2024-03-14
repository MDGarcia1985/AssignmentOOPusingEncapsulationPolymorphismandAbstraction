#pragma once
#include "Character.h"
#include <string>
#include <vector>

class Enemy : public Character {
public:
    Enemy(int strength, int health);

    // Overriding the virtual function from Character class to display enemy-specific details
    virtual void displayCharacter() const =0;

    // Virtual attack functions that can be overridden by derived classes
    
    virtual void attack(Character& target) =0; // Attack with a target

    // Static function to generate and return a random name
    static std::string randomName();

private:
    // Static list of names for random generation: list was generated using AI.
    static const std::vector<std::string> names;
};
