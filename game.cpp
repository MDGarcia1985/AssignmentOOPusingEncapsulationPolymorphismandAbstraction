//game.cpp file

#include <memory>
#include "game.h"
#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Enemy.h"
#include "enemyNinja.h"
#include "enemyChimera.h"
#include "enemyPirate.h"
#include "playerCharacter.h"

//Function to display the games title
void displayTitle()
{
    std::cout << "\n\n\t *** Epic Battles: Pirates Vs Ninjas ***" << std::endl;
}



//funtion to get the players user name
std::string getUserName()
{
    std::string userName;
    std::cout << "\n\n What is your name? ";
    std::getline(std::cin, userName);
    return userName;
}



//function to welcome the player to the game. The semicolon goes after the user name once it's entered.
void displayWelcome(const std::string& userName)
{
    std::cout << "\nWelcome, " << userName << ";" << std::endl;
}

void displayCharacter(const Character& character)
{
    character.displayCharacter();
}

// Function to start the game loop and storyline
void startGameLoop(playerCharacter& player)
{
    std::cout << "\nYou are walking through the woods. Suddenly you are attacked!" << std::endl;

    
    // Randomly select enemy type (pirate or ninja)
    std::unique_ptr<Enemy> enemy;
    
    if (rand() % 2 == 0)
    {
        enemy = std::make_unique<enemyPirate>(15);
    }
    else
    {
        enemy = std::make_unique<enemyNinja>(15);
    }

    // Start combat loop
    bool isPlayerTurn = rand() % 2 == 0; // Coin flip for who attacks first
    while (player.getHealth() > 0 && enemy->getHealth() > 0)
    {
        if (isPlayerTurn)
        {
            player.attack(*enemy);
        }
        else
        {
            enemy->attack(player);
        }
        isPlayerTurn = !isPlayerTurn; // Switch turns
    }

    if (player.getHealth() <= 0)
    {
        std::cout << "You have been defeated. Game over." << std::endl;
    }
    else 
    {
        std::cout << "You defeated the enemy!" << std::endl;
        std::cout << "After the battle, you limp to a run-down inn at the heart of the forest. You open the door and are shocked by what lay before you..." << std::endl;
    }
};