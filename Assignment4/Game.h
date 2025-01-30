// Game.h
#ifndef GAME_H
#define GAME_H

#include <string>
#include <vector>
#include "Control.h"
#include "Actions.h"
#include "Locations.h"
#include "Characters.h"
#include "Items.h"

using namespace std;

class Game {
private:
    bool running;
    vector<Actions> actions;
    Location locations; // initialize locations
    vector<Characters> characters;
    vector<Items> items;
    Control control;

public:
    Game();
    void initializeGame();
    void start();
};

#endif // GAME_H
