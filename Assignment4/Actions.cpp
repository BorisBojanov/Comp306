
// Actions.cpp
#include "Actions.h"

// Default Constructor
Actions::Actions() : name(""), description("") {}

// Parameterized Constructor
Actions::Actions(const string& name, const string& description)
    : name(name), description(description) {}

// Getters
string Actions::getName() const {
    return name;
}

string Actions::getDescription() const {
    return description;
}



// Static method to load actions from a file
vector<Actions> Actions::loadFromFile(const string& fileName) {
    vector<Actions> actions;
    ifstream file(fileName);
    if (!file.is_open()) {
        cerr << "Error: Could not open " << fileName << endl;
        return actions;
    }

    string line;
    while (getline(file, line)) {
        size_t namePos = line.find(":");
        size_t descPos = line.find(":", namePos + 1);

        if (namePos != string::npos && descPos != string::npos) {
            string name = line.substr(0, namePos);
            string description = line.substr(namePos + 1, descPos - namePos - 1);

            actions.push_back(Actions(name, description));
        }
    }
    file.close();
    return actions;
}
