/**
 * Title: Character.cpp
 * Author: Boris B
 * Date: January 25, 2025
 * Version: 2.0
 * Copyright: Boris B 2025
 * Description: Implementation file for the Character class, which represents characters in the game.
 * 
 * DOCUMENTATION
 * 
 * Program Purpose:
 *    The Character class represents characters in the Wonderland game. Each character has a name, description, size, and whether they are friendly or not.
 *    The class provides functionality to load characters from a file, get a character by name, and interact with characters in the game.
 * 
 * Class:
 *   Character - Represents characters in the Wonderland game.
 *   Inventory - Represents the player's inventory.
 * 
 * Variables:
 *  name - A string representing the character's name.
 * description - A string representing the character's description.
 * size - An integer representing the character's size.
 * isFriendly - A boolean indicating whether the character is friendly or not.
 * listOfCharacters - A static vector of Character objects representing all characters in the game.
 * 
 * Functions:
 *  Character() - Constructor for the Character class.
 * getName() - Getter for the character's name.
 * getDescription() - Getter for the character's description.
 * getIsFriendly() - Getter for whether the character is friendly.
 * getSize() - Getter for the character's size.
 * setSize() - Setter for the character's size.
 * loadCharactersFromFile() - Loads characters from a file.
 * getCharacterByName() - Gets a character by name.
 * getListOfCharacters() - Gets the list of characters.
 * interactWithThief() - Interacts with the thief character.
 * interactWithGoldenDoor() - Interacts with the golden door character.
 * 
 * Test Plan:
 * The Character class was tested by loading characters from a file, getting characters by name, and interacting with characters in the game.
 * 
 * More about testing in the documentation journal.
*/

#include "Character.h"

/**
 * @brief Construct a new Character object
 * @param name The name of the character
*/
Character::Character(const std::string &name, const std::string &description, int size, bool isFriendly) 
    : name(name), description(description), size(size), isFriendly(isFriendly){}


// Getters and Setters
const std::string& Character::getName() const { return name; }
const std::string& Character::getDescription() const { return description; }
bool Character::getIsFriendly() const { return isFriendly; }
int Character::getSize() const { return size; }
void Character::setSize(int newSize) { size = newSize; }

void Character::loadCharactersFromFile(const std::string& filename) {
    std::ifstream file(filename);
    if (!file.is_open()) {
        std::cerr << "Failed to open character file: " << filename << std::endl;
        return;
    }

    std::string line;
    while (std::getline(file, line)) {
        std::istringstream ss(line);
        std::string name, description, sizeStr, isFriendlyStr;

        if (std::getline(ss, name, ',') &&
            std::getline(ss, description, ',') &&
            std::getline(ss, sizeStr, ',') &&
            std::getline(ss, isFriendlyStr, ',')) {

            int size = std::stoi(sizeStr);
            bool isFriendly = (isFriendlyStr == "true");
            listOfCharacters.emplace_back(name, description, size, isFriendly);
        } else {
            std::cerr << "Invalid line format: " << line << std::endl;
        }
    }
    file.close();
}

Character* Character::getCharacterByName(const std::string& characterName) {
    auto it = std::find_if(listOfCharacters.begin(), listOfCharacters.end(),
        [&characterName](const Character& character) {
            return character.getName() == characterName;
        });
    return (it != listOfCharacters.end()) ? &(*it) : nullptr;
}

const std::vector<Character>& Character::getListOfCharacters() { return listOfCharacters; }

// Define the static member
std::vector<Character> Character::listOfCharacters;


