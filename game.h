//game header file

#pragma once
#include <string>
#include "Character.h"
#include "Enemy.h"
#include "enemyChimera.h"
#include "enemyNinja.h"
#include "enemyPirate.h"
#include "playerCharacter.h"

void displayTitle();
std::string getUserName();
void displayWelcome(const std::string& userName);
void displayCharacter(const Character& character);
void startGameLoop(playerCharacter& player);
