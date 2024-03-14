//Pirate .cpp file


#include "enemyPirate.h"


// Override the displayCharacter method from the Character class
void enemyPirate::displayCharacter() const
{
    std::cout << "Character: " << getName()
        << " Type: Ninja"
        << " Strength: " << getStrength()
        << " Health: " << getHealth() << std::endl;
}

// Implement the receiveDamage method
void enemyPirate::receiveDamage(int damage)
{
    // Reduce health by the damage amount
    setHealth(getHealth() - damage);

    // Ensure health does not go below 0
    if (getHealth() < 0)
    {
        setHealth(0);
    }

    std::cout << getName() << " received " << damage << " damage and now has " << getHealth() << " health." << std::endl;
}

// Implement the attack method
void enemyPirate::attack(Character& target)
{
    std::cout << getName() << " attacks " << target.getName() << " with a power of " << getStrength() << "." << std::endl;
    // Assuming damage is equal to this character's strength
    target.receiveDamage(getStrength());
}