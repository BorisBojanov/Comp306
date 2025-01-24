#ifndef LOCATIONS_H
#define LOCATIONS_H

#include <fstream>
#include <map>
#include <iostream>
#include <string>
#include <iostream>
#include "Game.h" 
using namespace std;

class Locations : public Game {

public:
    Locations();
    void setPlayerLocation();
    void setCharacterLocation();
    void setItemLocation();
    string getPlayerLocation();
    
};

#endif // LOCATIONS_H