//playerCharacter .cpp file

#include "playerCharacter.h"
#include <iostream>



// Implement the receiveDamage method
void playerCharacter::receiveDamage(int damage) 
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
void playerCharacter::attack(Character& target) 
{
    std::cout << getName() << " attacks " << target.getName() << " with a power of " << getStrength() << "." << std::endl;
    // Assuming damage is equal to this character's strength
    target.receiveDamage(getStrength());
}
