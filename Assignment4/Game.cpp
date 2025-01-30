// Game.cpp
#include "Game.h"
#include <iostream>

using namespace std;

Game::Game() {
    running = false;
    initializeGame();
}

void Game::initializeGame() {
    // Load game data from text files
    actions = Actions::loadFromFile("Actions.txt");


    items = Items::loadFromFile("Items.txt");
    characters = Characters::loadFromFile("Characters.txt");


    // back to main.cpp
}

void Game::start() {
    running = true;
    cout << "Welcome to Wonderland! Type 'help' for commands." << endl;

    while (running) {
        cout << "> ";
        string input;
        getline(cin, input);

        if (input == "quit") {
            running = false;
            cout << "Exiting the game. Goodbye!" << endl;
            break;
        }
        // Handle user input
        control.handleUserInput(input);
    }
}

// main.cpp
#include "Game.h"

int main() {
    Game game;
    game.start();

    return 0;
}
