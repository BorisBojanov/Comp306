// Items.cpp
#include "Items.h"

// Default Constructor
Items::Items() : name(""), description(""), edible(false), location("") {}

// Parameterized Constructor
Items::Items(const string& name, const string& description, bool edible, const string& location)
    : name(name), description(description), edible(edible), location(location) {}

// Getters
string Items::getName() const {
    return name;
}

string Items::getDescription() const {
    return description;
}

bool Items::isEdible() const {
    return edible;
}

string Items::getLocation() const {
    return location;
}

// Static method to load items from a file
vector<Items> Items::loadFromFile(const string& fileName) {
    vector<Items> items;
    ifstream file(fileName);
    if (!file.is_open()) {
        cerr << "Error: Could not open " << fileName << endl;
        return items;
    }

    string line;
    while (getline(file, line)) {
        size_t namePos = line.find(":");
        size_t descPos = line.find(":", namePos + 1);
        size_t ediblePos = line.find(":", descPos + 1);
        size_t locPos = line.find(":", ediblePos + 1);

        if (namePos != string::npos && descPos != string::npos && ediblePos != string::npos && locPos != string::npos) {
            string name = line.substr(0, namePos);
            string desc = line.substr(namePos + 1, descPos - namePos - 1);
            bool isEdible = line.substr(ediblePos + 1, locPos - ediblePos - 1) == "True";
            string location = line.substr(locPos + 1);

            items.push_back(Items(name, desc, isEdible, location));
        }
    }
    file.close();
    return items;
}