//character header file

#pragma once
#include <string>
#include <iostream>


class Character
{
private:
	std::string mName;
	int mStrength;
	int mHealth;
	std::string mCharacterType;

public:

    //Destructor to clean up enemies after they've been defeated.
    virtual ~Character() {}


    // Updated constructor to include characterType
    Character(const std::string& name, int strength, int health, const std::string& characterType)
        : mName(name), mStrength(strength), mHealth(health), mCharacterType(characterType) {}

    // Default constructor
    Character() : mName(""), mStrength(0), mHealth(0), mCharacterType("Unknown") {}

    // Attack mechanic for combat loop
    virtual void attack(Character& target) =0;

    // Getters
    std::string getName() const { return mName; }
    int getStrength() const { return mStrength; }
    int getHealth() const { return mHealth; }
    std::string getCharacterType() const { return mCharacterType; } // Getter for character type

    // Setters
    void setName(const std::string& name) { mName = name; }
    void setStrength(int strength) { mStrength = strength; }
    void setHealth(int health) { mHealth = health; }
    void setCharacterType(const std::string& characterType) { mCharacterType = characterType; } // Setter for character type

    // Pure virtual function to ensure derived classes implement their own display method
    virtual void displayCharacter() const = 0;

    virtual void receiveDamage(int damage) = 0;


};