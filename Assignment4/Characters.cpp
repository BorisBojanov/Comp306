
// Characters.cpp
#include "Characters.h"

// Default Constructor
Characters::Characters() : name(""), isFriend(false) {}

// Parameterized Constructor
Characters::Characters(const string& name, bool isFriend, const vector<string>& inventory)
    : name(name), isFriend(isFriend), inventory(inventory) {}

// Getters
string Characters::getName() const {
    return name;
}

bool Characters::getFriendStatus() const {
    return isFriend;
}

vector<string> Characters::getInventory() const {
    return inventory;
}

// Static method to load characters from a file
vector<Characters> Characters::loadFromFile(const string& fileName) {
    vector<Characters> characters;
    ifstream file(fileName);
    if (!file.is_open()) {
        cerr << "Error: Could not open " << fileName << endl;
        return characters;
    }

    string line;
    while (getline(file, line)) {
        size_t namePos = line.find(":");
        size_t friendPos = line.find(":", namePos + 1);
        size_t invPos = line.find(":", friendPos + 1);

        if (namePos != string::npos && friendPos != string::npos && invPos != string::npos) {
            string name = line.substr(0, namePos);
            bool isFriend = line.substr(namePos + 1, friendPos - namePos - 1) == "True";
            string inventoryStr = line.substr(invPos + 1);
            vector<string> inventory;

            size_t start = 0, end;
            while ((end = inventoryStr.find(":", start)) != string::npos) {
                inventory.push_back(inventoryStr.substr(start, end - start));
                start = end + 1;
            }
            inventory.push_back(inventoryStr.substr(start));

            characters.push_back(Characters(name, isFriend, inventory));
        }
    }
    file.close();
    return characters;
}