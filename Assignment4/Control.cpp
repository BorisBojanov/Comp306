// Control.cpp
#include "Control.h"

using namespace std;

// Processes user input and executes actions
void Control::handleUserInput(string input) {
    words.clear(); // Clear the words vector
    stringstream ss(input); // Create a stringstream from the input
    
    //check if the input is empty
    if (input.empty()) {
        return;
    }
    // Split the input into words
    while (ss >> word) {
        words.push_back(word);
    }

    // Ensure there are enough words to assign
    std::string action = words.size() > 0 ? words[0] : ""; // First word as "action"
    std::string object1 = words.size() > 1 ? words[1] : ""; // Second word as "object1"
    std::string object2 = words.size() > 2 ? words[2] : ""; // Third word as "object2"
    std::string object3 = words.size() > 3 ? words[3] : ""; // Fourth word as "object3"

    if (!executeActions(action, object1, object2, object3)) {
        cout << "Failed to perform action: " << action << endl;
    }
}

// Executes the action with the given object
bool Control::executeActions(string action, string object1, string object2, string object3) {
    
    // Perform the action
    if (action == "look") {
        cout << "You look around and see: "<< object1 << endl;
        return true;
    } else if (action == "go") {
        if (object1 == "north") {

            cout << "You go north." << endl;
        } else if (object1 == "south") {
            cout << "You go south." << endl;
        } else if (object1 == "east") {
            cout << "You go east." << endl;
        } else if (object1 == "west") {
            cout << "You go west." << endl;
        } else {
            cout << "Invalid direction: " << object1 << endl;
        }
        return true;
    } else if (action == "take") {
        cout << "You take: " << object1 << endl;
        return true;
    } else if (action == "drop") {
        cout << "You drop: " << object1 << endl;
        return true;
    } else if (action == "talk") {
        cout << "You talk to: " << object1 << endl;
        return true;
    } else if (action == "use") {
        cout << "You use: " << object1 << endl;
        return true;
    } else if (action == "help") {
        cout << "Available actions: look, go, take, drop, talk, use, quit" << endl;
        return true;
    } else if (action == "quit") {
        cout << "Quitting the game..." << endl;
        return true;
    } else {
        cout << "Unknown action: " << action << endl;
        return false;
    }
}