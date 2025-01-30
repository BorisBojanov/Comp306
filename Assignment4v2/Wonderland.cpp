/**
 * Title: Wonderland.cpp
 * Author: Boris B
 * Date: January 25, 2025
 * Version: 2.0
 * Copyright: Boris B 2025
 * Description: A text-based adventure game set in Wonderland.
 * 
 * 
 * DOCUMENTATION
 * 
 * Program Purpose:
 *     This program is a text-based adventure game set in Wonderland. The player can move between locations, interact with characters, and collect items.
 *     
 *     This file contains the main game loop and the game initialization.
 * 
 * Compilation (assuming all files are in the same directory):
 * Compilation: g++ -std=c++11 Wonderland.cpp Control.cpp Inventory.cpp Locations.cpp Character.cpp Items.cpp -o Wonderland
 * Execution: ./Wonderland
 * 
 * Classes:
 *    Wonderland - The main game class that initializes the game and starts the game loop.
 * 
 * Variables:
 *    inventory - An Inventory object that represents the player's inventory.
 *    locations - A Locations object that represents the game's locations.
 *    control - A Control object that processes the player's input.
 *    game - A Wonderland object that represents the game.
 * 
 * Functions:
 *   Wonderland() - Constructor for the Wonderland class. Initializes the game.
 *   startGame() - Starts the game loop.
 *   displayHelp() - Displays the list of available commands.
 *   main() - The main function that creates a Wonderland object and starts the game.
 * 
 * Test Plan:
 *  The program was tested by running it and interacting with the game using various commands. The following test cases were performed:
 *  1. Started the game and moved to different locations.
 *  2. Interacted with characters and collected items.
 *  3. Used items to unlock the door in Room 16.
 *  4. Quit the game.
 * 
 * More about testing in the documentation journal.
 * 
 * Note: 
*/

#include "Wonderland.h"

/**
 * @brief Construct a new Wonderland object
 */
Wonderland::Wonderland()
    : inventory(5), locations("Near the Rabbit Hole."), control(inventory, locations) {
    Items::loadItemsFromFile("Items.txt");
    locations.loadLocationsFromFile("Locations.txt");
    Character::loadCharactersFromFile("Characters.txt");

    // Add some items and characters to locations
    locations.addItemToLocation("key", "Near the Rabbit Hole.");
    locations.addItemToLocation("potion", "Room 13");
    locations.addItemToLocation("sword", "Room 2");
    locations.addItemToLocation("flower","Room 6");
    locations.addItemToLocation("goldenkey", "Room 3");
    locations.addItemToLocation("goldenkey", "Room 4");
    locations.addItemToLocation("goldenkey", "Room 12");
    locations.addItemToLocation("goldenkey", "Room 16");
    locations.addItemToLocation("hat", "Room 14");
    locations.addItemToLocation("catplush", "Room 11");
    locations.addItemToLocation("bottle", "Room 7");
    locations.addItemToLocation("cake", "Room 8");
    locations.addItemToLocation("fan", "Room 9");
    locations.addItemToLocation("pocket-watch", "Room 5");
    locations.addItemToLocation("card-soldier", "Room 10");
    locations.addItemToLocation("playing-cards", "Room 15");

    // Add some characters to locations
    locations.addCharacterToLocation("cheshire-cat", "Room 6");
    locations.addCharacterToLocation("white-rabbit", "Near the Rabbit Hole.");
    locations.addCharacterToLocation("mad-hatter", "Room 10");
    locations.addCharacterToLocation("thief", "Room 5");
    locations.addCharacterToLocation("door", "Room 16");
    locations.addCharacterToLocation("boris", "Room 11");
}

/**
 * @brief Start the game loop
 */
void Wonderland::startGame() {
    std::cout << "Welcome to Wonderland!\n In this game you can move between locations, interact with characters, and collect items.\n Your goal is to find the goldenkey and use it to unlock the door in Room 16.\n";
    std::cout << "Type 'help' for a list of commands.\n";

    std::string input;
    while (true) {
        std::cout << "> ";
        std::getline(std::cin, input);
        if (input == "quit") {
            std::cout << "Thanks for playing!\n";
            break;
        } else if (input == "help") {
            displayHelp();
        } else {
            control.processInput(input);
        }
    }
}

/**
 * @brief Display the list of available commands
 */
void Wonderland::displayHelp() const {
    std::cout << "Available commands:\n";
    std::cout << "  look - View your current location and description\n";
    std::cout << "  take [item] - Take an item\n";
    std::cout << "  drop [item] - Drop an item\n";
    std::cout << "  inventory - View your inventory\n";
    std::cout << "  move [location] - Move to a new location\n";
    std::cout << "  interact [character] - Interact with a character\n";
    std::cout << "  quit - Exit the game\n";
}

int main() {
    Wonderland game;
    game.startGame();
    return 0;
}
