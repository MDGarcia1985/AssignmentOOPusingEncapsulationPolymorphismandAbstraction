// main game loop
#include "game.h"
#include <string>
#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime> // For time

int main() 
{
    //Random Number Generator
    srand(static_cast<unsigned int>(time(nullptr)));

    displayTitle();

    // Get the user's name
    std::string userName = getUserName();

    // Ask the player to choose their character type
    std::cout << "\nAre you a Ninja or Pirate?\n";
    std::cout << "A) Ninja\n";
    std::cout << "B) Pirate\n";
    std::cout << "Choose (A/B): ";

    char choice;
    std::cin >> choice;

    // Convert choice to uppercase to handle lowercase input
    choice = toupper(choice);

    std::string characterType;
    int strength;
    int health;

    // Assign the character type based on player's choice
    if (choice == 'A') 
    {
        characterType = "Ninja";
        strength = 10;
        health = 100;
        std::cout << "\n...Silent but deadly, you move like the shadows.\n";
    }
    else if (choice == 'B') 
    {
        characterType = "Pirate";
        strength = 12;
        health = 90;
        std::cout << "\nArrrr! The sea calls to you, me hearties.\n";
    }
    else 
    {
        characterType = "Pirate"; // Default to Pirate on invalid input
        strength = 12;
        health = 90;
        std::cout << "\nInvalid choice. Defaulting to Pirate.\n";
    }

    // Create a character instance using the user's name and chosen attributes
    playerCharacter player(userName, strength, health, characterType);

    // Welcome the player by name and character type
    displayWelcome(userName);

    // Display the created character
    player.displayCharacter();

    // Print out character creation details
    std::cout << "Character Created: " << player.getName() << " as a " << player.getCharacterType()
        << " with Strength: " << player.getStrength() << " and Health: " << player.getHealth() << std::endl;

    // Start the game loop
    startGameLoop(player);

    return 0;
}
