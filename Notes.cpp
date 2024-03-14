/*
 * Game Development Notes: Object-Oriented Programming Structure
 * -------------------------------------------------------------
 *
 * Main Components:
 * 1. main.cpp: Controls the primary game loop.
 * 2. Game.cpp: Contains game logic, progression, and top-level loops.
 *    - Game.h: Header file for Game class.
 *    - Guild Class: Base class for different guilds.
 *      - GuildA, GuildB, GuildC, etc.: Specific guild implementations.
 *    - Chapter/Level Class: Manages game chapters or levels.
 *
 * Character System:
 * 1. Character Class: Base class for all characters in the game.
 *    - Character.h: Header file for Character class.
 *    - Player Character Class: Derived class for player characters.
 *      - Player Character.h: Header for player character.
 *    - Enemy Class: Base class for enemies.
 *      - Enemy.h: Header file for Enemy class.
 *      - EnemyA, EnemyB, EnemyC, etc.: Specific enemy implementations.
 *
 * Object-Oriented Programming Concepts:
 * - Inheritance: Utilized for character and guild system. Allows for shared attributes and methods.
 * - Polymorphism: Facilitates flexible function overrides for subclasses based on their superclass. Essential for implementing varying behaviors among different game entities (e.g., 
 different guild story arcs, enemy behaviors, character interactions).
 *
 * Implementation Details:
 * - main.cpp maintains the game running loop, ensuring the game continues to run.
 * - Game.cpp orchestrates the game's progression, including guild selection and story arc initiation.
 *   Example: Choosing GuildA starts the GuildA story arc, utilizing data from various classes.
 * - Creating modular classes for chapters, levels, and characters aids in scalability and debugging.
 * - Separating player and enemy classes allows for independent progression and simplifies the introduction of new enemy types.
 * - Polymorphism example: A single function can trigger the start of any guild's story arc, demonstrating shared functionality across classes.
 * - Another polymorphism use case is in handling damage calculation and application across different character types, showcasing the flexibility in character behavior management.
 *
 * This structure promotes modularity, ease of maintenance, and scalability in game development.
 */
