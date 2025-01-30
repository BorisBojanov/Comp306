/**
 * Title: Inventory.cpp
 * Author: Boris B
 * Date: January 25, 2025
 * Version: 2.0
 * Description: Inventory class implementation, which represents the player's inventory in the Wonderland game.
 * 
 * DOCUMENTATION
 * 
 * Program Purpose:
 *    The Inventory class is responsible for managing the player's inventory in the Wonderland game.
 *    It allows the player to add and remove items from the inventory, view the inventory contents.
 * 
 * Classes:
 * Inventory - Manages the player's inventory in the Wonderland game.
 * 
 * Variables:
 * inventoryItems - A vector of strings representing the items in the inventory.
 * maxSize - An integer representing the maximum size of the inventory.
 * 
 * Functions:
 * Inventory() - Constructor for the Inventory class.
 * addItem() - Adds an item to the inventory.
 * removeItem() - Removes an item from the inventory.
 * showInventory() - Displays the contents of the inventory.
 * getInventoryItems() - Gets the items in the inventory.
 * 
 * 
 */
#include "Inventory.h"
#include <algorithm>

/**
 * @brief Construct a new Inventory object
 * @param maxSize The maximum size of the inventory
 */
Inventory::Inventory(int maxSize) : maxSize(maxSize) {}

/**
 * @brief Add an item to the inventory
 * @param item The item to add
 * @return true if the item was added, false if the inventory is full
 */
bool Inventory::addItem(const std::string& item) {
    if (inventoryItems.size() < maxSize) {
        inventoryItems.push_back(item);
        return true;
    } else {
        std::cout << "Your inventory is full!\n";
        return false;
    }
}

/**
 * @brief Remove an item from the inventory
 * @param item The item to remove
 * @return true if the item was removed, false if the item was not found
 */
bool Inventory::removeItem(const std::string& item) {
    auto it = std::find(inventoryItems.begin(), inventoryItems.end(), item);
    if (it != inventoryItems.end()) {
        inventoryItems.erase(it);
        std::cout << "The " << item << " has been removed.\n";
        return true;
    } else {
        std::cout << "You cannot remove an item you do not have!\n";
        return false;
    }
}

/**
 * @brief Show the contents of the inventory
 */
void Inventory::showInventory() const {
    std::cout << "Showing inventory:\n";
    for (const auto& item : inventoryItems) {
        std::cout << "- " << item << "\n";
    }
}

/**
 * @brief Get the items in the inventory
 * @return The items in the inventory
 */
const std::vector<std::string>& Inventory::getInventoryItems() const {
    return inventoryItems;
}
