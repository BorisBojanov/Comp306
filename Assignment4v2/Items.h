/**
 * Title: Items.h
 * Author: Boris B
 * Date: January 25, 2025
 * Version: 2.0
 * Copyright: Boris B 2025
 * Description: Header file for the Items class, which represents the items in the Wonderland game.
 * 
 * DOCUMENTATION
 * Program Purpose:
 *    The Items class is responsible for managing the items in the Wonderland game. It allows the player to collect and use items in the game.
 *    It loads items from a file, stores them in a vector, and provides access to the list of items.
 * 
 * Classes:
 *      Items - Manages the items in the Wonderland game.
 * 
 * Variables:
 *     name - A string representing the name of the item.
 *     description - A string representing the description of the item.
 *     isCollectible - A boolean indicating whether the item is collectible.
 *     listOfItems - A vector of Items objects representing the list of items in the game.
 * 
 * Functions:
 *    Items() - Constructor for the Items class.
 *    getName() - Gets the name of the item.
 *    getDescription() - Gets the description of the item.
 *    getIsCollectible() - Gets whether the item is collectible.
 *    loadItemsFromFile() - Loads items from a file into the list of items.
 *    getListOfItems() - Gets the list of items.
 * 
 * TEST PLAN
 * This class was tested by loading items from a file and verifying that the list of items was correctly populated.
 * This class is called by the Wonderland class to load items at the start of the game.
 * 
 * More about testing in the documentation journal.
*/
#ifndef ITEMS_H
#define ITEMS_H

#include <iostream>
#include <string>
#include <vector>

class Items {
private:
    std::string name;
    std::string description;
    bool isCollectible;
    static std::vector<Items> listOfItems;

public:
    Items(const std::string& name, const std::string& description, bool isCollectible);

    const std::string& getName() const;
    const std::string& getDescription() const;
    bool getIsCollectible() const;

    static void loadItemsFromFile(const std::string& filename);
    static const std::vector<Items>& getListOfItems();
};

#endif // ITEMS_H