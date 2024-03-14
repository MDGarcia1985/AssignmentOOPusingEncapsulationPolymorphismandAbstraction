//enemy.cpp file

#include "Enemy.h"
#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()

// Initialize the static names list with potential enemy names
const std::vector<std::string> Enemy::names = 
{
    "Alex", "Blake", "Casey", "Drew", "Elliot",
    "Finn", "Gray", "Hayden", "Ira", "Jordan",
    "Kai", "Lynn", "Morgan", "Nikita", "Olive",
    "Piper", "Quinn", "Riley", "Skyler", "Tatum"
};

// Constructor implementation
Enemy::Enemy(int strength, int health)
    : Character(randomName(), strength, health, "Enemy")
{
  
}

// Implementation of randomName()
std::string Enemy::randomName() 
{
    int index = rand() % names.size();
    return names[index];
}



