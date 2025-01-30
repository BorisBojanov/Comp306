// Wonderland.cpp
#include "Wonderland.h"

Wonderland::Wonderland()
    : inventory(5), locations("Starting Location"), control(inventory, locations) {
    Items::loadItemsFromFile("Items.txt");
    locations.loadLocationsFromFile("Locations.txt");
    Character::loadCharactersFromFile("Characters.txt");

    // Add some default items and characters to locations
    locations.addItemToLocation("key", "Starting Location");
    locations.addCharacterToLocation("rabbit", "Starting Location");
}

void Wonderland::startGame() {
    std::cout << "Welcome to Wonderland!\n";
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
