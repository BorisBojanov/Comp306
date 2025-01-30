/**
 * Title: Inventory.h
 * Author: Boris B
 * Date: January 25, 2025
 * Version: 2.0
 * Description: Header file for the Inventory class, which represents the player's inventory in the Wonderland game.
 * 
 * DOCUMENTATION
 * 
 * Program Purpose:
 *   The Inventory class is responsible for managing the player's inventory in the Wonderland game.
 *    It allows the player to add and remove items from the inventory, view the inventory contents.
 * 
 * Classes:
 *  Inventory - Manages the player's inventory in the Wonderland game.
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

#ifndef INVENTORY_H
#define INVENTORY_H

#include <iostream>
#include <string>
#include <vector>

class Inventory {
private:
    std::vector<std::string> inventoryItems;
    int maxSize;

public:
    /**
     * @brief Construct a new Inventory object
     * @param maxSize The maximum size of the inventory
     */
    Inventory(int maxSize);

    /**
     * @brief Add an item to the inventory
     * @param item The item to add
     * @return true if the item was added, false if the inventory is full
     */
    bool addItem(const std::string& item);

    /**
     * @brief Remove an item from the inventory
     * @param item The item to remove
     * @return true if the item was removed, false if the item was not found
     */
    bool removeItem(const std::string& item);

    /**
     * @brief Show the contents of the inventory
     */
    void showInventory() const;

    /**
     * @brief Get the items in the inventory
     * @return The items in the inventory
     */
    const std::vector<std::string>& getInventoryItems() const;
};

#endif // INVENTORY_H