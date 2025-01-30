// Actions.h
#ifndef ACTIONS_H
#define ACTIONS_H

#include <string>
#include <map>
#include <vector>
#include <fstream>
#include <iostream>

using namespace std;

class Actions {
private:
    string name;
    string description;

public:
    // Constructors
    Actions();
    Actions(const string& name, const string& description);

    // Getters
    string getName() const;
    string getDescription() const;

    // Static method to load Actionss
    static vector<Actions> loadFromFile(const string& fileName);
};

#endif