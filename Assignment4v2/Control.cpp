/**
 * Title: Control.cpp
 * Author: Boris B
 * Date: January 25, 2025
 * Version: 2.0
 * Description: Control class implementation, which processes the player's input.
 * 
 * 
 * DOCUMENTATION
 * 
 * Program Purpose:
 *     The Control class is responsible for processing the player's input in the Wonderland game. 
 *     It handles commands such as moving between locations, taking items, dropping items, viewing the inventory, and interacting with characters.
 *     For this reason, the Control class is an essential part of the game's functionality.
 *     It also means that the processInput method is very complex and contains a lot of logic for handling different commands.
 * 
 * Class:
 * Control - Processes the player's input in the Wonderland game.
 * 
 * Variables:
 * inventory - A pointer to the player's inventory.
 * locations - A pointer to the game's locations.
 * 
 * Functions:
 * Control() - Constructor for the Control class.
 * processInput() - Processes the player's input and performs the appropriate actions.
 * 
*/      
#include "Control.h"

/**
 * @brief Construct a new Control object
 * @param inventory The player's inventory instance
 * @param locations The game's locations instance
*/
Control::Control(Inventory& inventory, Locations& locations)
    : inventory(inventory), locations(locations) {}

/**
 * @brief Process the player's input
 * @param input The player's input
 * @details This function processes the player's input and performs the appropriate actions. Admittedly, this function is quite long.
*/
void Control::processInput(const std::string& input) {
    if (input == "look") {
        std::cout << "You are at " << locations.getCurrentLocation() << "\n";
        std::cout << locations.getLocationDescription(locations.getCurrentLocation()) << "\n";
        const auto& items = locations.getItemsAtLocation(locations.getCurrentLocation()); // get vector items at current location
        if (!items.empty()) {
            std::cout << "You see the following items here:\n";
            for (const auto& item : items) {
                std::cout << "  " << item << "\n";
            }
        }
        const auto& characters = locations.getCharactersAtLocation(locations.getCurrentLocation()); // get vector characters at current location
        if (!characters.empty()) {
            std::cout << "You see the following characters here:\n";
            for (const auto& character : characters) {
                std::cout << "  " << character << "\n";
            }
        }
    } else if (input.rfind("take ", 0) == 0) {
        std::string item = input.substr(5);
        const auto& items = locations.getItemsAtLocation(locations.getCurrentLocation());
        if (std::find(items.begin(), items.end(), item) != items.end()) {
            inventory.addItem(item);
            std::cout << "You took " << item << ".\n";
        } else {
            std::cout << "No such item here!\n";
        }
    } else if (input.rfind("drop ", 0) == 0) {
        std::string item = input.substr(5);
        if (inventory.removeItem(item)) {
            locations.addItemToLocation(item, locations.getCurrentLocation());
            std::cout << "You dropped " << item << ".\n";
        }
    } else if (input == "inventory") {
        inventory.showInventory();
    } else if (input.rfind("move ", 0) == 0) {
        std::string direction = input.substr(5); // get the direction, "move " = 5 characters
        // Need to implement some logic for some locations to be locked from the current location
        const auto& allowedConnections = locations.getAllowedConnections(locations.getCurrentLocation());
        if (std::find(allowedConnections.begin(), allowedConnections.end(), direction) == allowedConnections.end()) {
            std::cout << "You can't move in that direction! You must find another way.\n";
            return;
        } else {
        // std::cout << "Moving to " << direction << " : " << direction.length() << "\n"; // print out the direction
        locations.moveToLocation(direction);
        }
    } else if (input.rfind("interact ", 0) == 0) {
        std::string characterName = input.substr(9);
        Character* character = Character::getCharacterByName(characterName);
        if (character) {
            // If the character is not the door, then the player can interact with the character
            if (character->getName() != "door" && character->getName() != "thief") {
                std::cout << "Interacting with " << character->getName() << ": " << character->getDescription() << "\n";
            }
            
            // If the character is the door and current location is the room 16 and the player had item goldenkey in the inventory, then the game ends
            if (character->getName() == "door" && locations.getCurrentLocation() == "Room 16" && inventory.removeItem("goldenkey")) {
                std::cout << "Congratulations! You have escaped Wonderland!\n";
                std::cout << "Thanks for playing!\n";
                exit(0);
            } else if(!inventory.removeItem("goldenkey")){
            std::cout << "You need the goldenkey in your inventory to unlock the door!\n";
            } else if(locations.getCurrentLocation() != "Room 16") {
            std::cout << "You need to be in Room 16 to interact with the door!\n";
            }
            // If the character is the thief, the player loses the game
            if (character->getName() == "thief"&& locations.getCurrentLocation() == "Room 5" ) {
                std::cout << "The thief stole your goldenkey! You lose!\n";
                std::cout << "Thanks for playing!\n";
                exit(0);
            }
        } else {
            std::cout << "No such character here!\n";
        }
        
    } else {
        std::cout << "Unknown command.\n";
    }
}
