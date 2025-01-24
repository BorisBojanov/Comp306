/*
Title: Game.cpp
Description: Game class - contains main and invokes all other classes
Date: Jan 22, 2025
Author: Boris B
Version: 1.0
Copyright: Boris B 2025

DOCUMENTATION

Program Purpose:
    Within main, necessary classes must include:
     Locations, Items, Characters, Actions, Inventory and Control. 
    You may find more classes are necessary to complete the game.

*/

#include "Game.h"
using namespace std;


Game::Game(){
}
void Game::loadFiles(string targetFile){
        // Map to store actions and their descriptions
    std::map<std::string, std::string> actions;

    // Open the file
    std::ifstream file(targetFile);
    if (!file) {
        std::cerr << "Error: Could not open file." << std::endl;
    }

    // Read file line by line
    std::string line;
    while (std::getline(file, line)) {
        size_t delimiterPos = line.find(':');
        if (delimiterPos != std::string::npos) {
            std::string actionName = line.substr(0, delimiterPos);
            std::string description = line.substr(delimiterPos + 1);

            // Trim spaces (optional, for cleaner data)
            actionName.erase(0, actionName.find_first_not_of(" "));
            actionName.erase(actionName.find_last_not_of(" ") + 1);
            description.erase(0, description.find_first_not_of(" "));
            description.erase(description.find_last_not_of(" ") + 1);

            // Add to the map
            actions[actionName] = description;
        }
    }

    // Close the file
    file.close();

    // Display all actions
    for (const auto& pair : actions) {
        std::cout << "Action: " << pair.first << "," << pair.second << std::endl;
    }
}

int main() {
    cout << "Hello, World!" << endl;
    Game game;
    game.loadFiles("Actions.txt");
    return 0;
}