//playerCharacter header file

#pragma once

#include "Character.h"
#include <iostream>
#include <string>

class playerCharacter : public Character 
{
private:
    std::string characterType; // New attribute to store the player character type choice

public:
    // Constructor
    playerCharacter(const std::string& name, int strength, int health, const std::string& characterType)
        : Character(name, strength, health, characterType) {}

    // Setter for character type
    void setCharacterType(const std::string& type) 
    {
        characterType = type;
    }

    // Getter for character type
    std::string getCharacterType() const 
    {
        return characterType;
    }

    // Override the displayCharacter method from the Character class
    virtual void displayCharacter() const override 
    {
        std::cout << "Character: " << getName() // Use getter for name
            << " Type: " << getCharacterType() // Use getter for characterType
            << " Strength: " << getStrength() // Use getter for strength
            << " Health: " << getHealth() << std::endl; // Use getter for health
    }
    virtual void receiveDamage(int damage) override;

    virtual void attack(Character& target) override;
};
