/**
 * Title: Wonderland.h
 * Author: Boris B
 * Date: January 25, 2025
 * Version: 2.0
 * Copyright: Boris B 2025
 * Description: Header file for the Wonderland class, which represents the main game class.
 * 
*/
#ifndef WONDERLAND_H
#define WONDERLAND_H

#include <iostream>
#include <string>
#include <vector>
#include "Inventory.h"
#include "Locations.h"
#include "Control.h"
#include "Character.h"
#include "Items.h"

class Wonderland {
private:
    Inventory inventory;
    Locations locations;
    Control control;

public:
    Wonderland();
    void startGame();
    void displayHelp() const;
};

#endif
