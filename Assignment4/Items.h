// Itemss.h
#ifndef ItemsS_H
#define ItemsS_H

#include <string>
#include <vector>
#include <fstream>
#include <iostream>

using namespace std;

class Items {
private:
    string name;
    string description;
    bool edible;
    string location;

public:
    // Constructors
    Items();
    Items(const string& name, const string& description, bool edible, const string& location);

    // Getters
    string getName() const;
    string getDescription() const;
    bool isEdible() const;
    string getLocation() const;

    // Static method to load Itemss
    static vector<Items> loadFromFile(const string& fileName);
};

#endif