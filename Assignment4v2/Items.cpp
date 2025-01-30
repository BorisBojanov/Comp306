/**
 * Title: Items.cpp
 * Author: Boris B
 * Date: January 25, 2025
 * Version: 2.0
 * Copyright: Boris B 2025
 * Description: Implementation file for the Items class, which represents the items in the Wonderland game.
 * 
 * DOCUMENTATION
 * 
 * Program Purpose:
 *   The Items class is responsible for managing the items in the Wonderland game. It allows the player to collect and use items in the game.
 * 
 * Classes:
 *      Items - Manages the items in the Wonderland game.
 * 
 * Variables:
 *    name - A string representing the name of the item.
 *    description - A string representing the description of the item.
 *    isCollectible - A boolean indicating whether the item is collectible.
 *    listOfItems - A vector of Items objects representing the list of items in the game.
 * 
 * Functions:
 *   Items() - Constructor for the Items class.
 *   getName() - Gets the name of the item.
 *   getDescription() - Gets the description of the item.
 *   getIsCollectible() - Gets whether the item is collectible.
 *   loadItemsFromFile() - Loads items from a file into the list of items.
 *   getListOfItems() - Gets the list of items.
 * 
 */

#include "Items.h"
#include <fstream>
#include <sstream>

std::vector<Items> Items::listOfItems;

Items::Items(const std::string& name, const std::string& description, bool isCollectible)
    : name(name), description(description), isCollectible(isCollectible) {}

const std::string& Items::getName() const { return name; }
const std::string& Items::getDescription() const { return description; }
bool Items::getIsCollectible() const { return isCollectible; }

void Items::loadItemsFromFile(const std::string& filename) {
    std::ifstream file(filename);
    if (!file.is_open()) {
        std::cerr << "Failed to open items file: " << filename << std::endl;
        return;
    }

    std::string line;
    while (std::getline(file, line)) {
        std::istringstream ss(line);
        std::string name, description, isCollectibleStr;

        if (std::getline(ss, name, ',') &&
            std::getline(ss, description, ',') &&
            std::getline(ss, isCollectibleStr, ',')) {

            bool isCollectible = (isCollectibleStr == "true");
            listOfItems.emplace_back(name, description, isCollectible);
        } else {
            std::cerr << "Invalid line format: " << line << std::endl;
        }
    }
    file.close();
}

const std::vector<Items>& Items::getListOfItems() { return listOfItems; }
