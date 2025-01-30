// Control.h
#ifndef CONTROL_H
#define CONTROL_H

#include <string>     // For std::string
#include <algorithm>  // For std::transform
#include <cctype>     // For std::tolower
#include <sstream>    // For std::stringstream
#include <iostream>   // For std::cout, std::cerr

#include "Actions.h"
#include "Locations.h"
#include "Characters.h"
#include "Items.h"

using namespace std;

class Control {
private:
    vector<string> words;
    string word;
public:
    Control(){

    locations.loadFromFile("Locations.txt");

    };
    // Processes and executes user input
    void handleUserInput(string input);
    bool executeActions(string action, string object, string object2, string object3);
};

#endif