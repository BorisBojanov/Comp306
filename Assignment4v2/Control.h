/**
 * Title: Control.h
 * Author: Boris B
 * Date: January 25, 2025
 * Version: 2.0
 * Description: Header file for the Control class, which processes the player's input in the Wonderland game.
 * 
 * DOCUMENTATION
 * 
 * Program Purpose:
 *    The Control class is responsible for processing the player's input in the Wonderland game.
 *    It handles commands such as moving between locations, taking items, dropping items, viewing the inventory, and interacting with characters.
 * 
 * Classes:
 *  Control - Processes the player's input in the Wonderland game.
 *  
 * Variables:
 * inventory - A pointer to the player's inventory.
 * locations - A pointer to the game's locations.
 * 
 * Functions:
 * Control() - Constructor for the Control class.
 * processInput() - Processes the player's input and performs the appropriate actions.
 * 
 * TEST PLAN
 * This class was tested by running the game and interacting with the game using various commands. 
 * More about testing in the documentation journal.
 * */ 
#ifndef CONTROL_H
#define CONTROL_H

#include <iostream>
#include <string>
#include "Inventory.h"
#include "Locations.h"
#include "Character.h"
#include "Items.h"

class Control {
private:
    Inventory& inventory;
    Locations& locations;

public:
    Control(Inventory& inventory, Locations& locations);
    void processInput(const std::string& input);
};

#endif