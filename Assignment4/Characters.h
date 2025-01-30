// Characters.h
#ifndef CHARACTERS_H
#define CHARACTERS_H

#include <string>
#include <vector>
#include <fstream>
#include <iostream>

using namespace std;

class Characters {
private:
    string name;
    bool isFriend;
    vector<string> inventory;
    Location* currentLocation; // Pointer to the player's current location

public:
    // Default Constructor
    Characters::Characters() : name(""), isFriend(false) {}

    // Parameterized Constructor
    Characters::Characters(const string& name, bool isFriend, const vector<string>& inventory)
        : name(name), isFriend(isFriend), inventory(inventory) {}

    // Getters
    string getName() const;
    bool getFriendStatus() const;
    vector<string> getInventory() const;

    // Static method to load characters
    static vector<Characters> loadFromFile(const string& fileName);
};

#endif
