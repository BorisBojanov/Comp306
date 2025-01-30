
/**
 * Title: Character.h
 * Author: Boris B
 * Date: January 25, 2025
 * Version: 2.0
 * Copyright: Boris B 2025
 * Description: Header file for the Character class, which represents characters in the game.
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
#ifndef CHARACTER_H
#define CHARACTER_H

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include <algorithm>


#include <iostream>
#include <string>
#include <vector>
#include "Inventory.h"

/**
 * @brief The Character class represents characters in the Wonderland game.
 */
class Character {
private:
    std::string name;
    std::string description;
    bool isFriendly;
    int size;
    static std::vector<Character> listOfCharacters;

public:
    /**
     * @brief Construct a new Character object
     * @param name The name of the character
    */
    Character(const std::string& name, const std::string& description, int size, bool isFriendly);

    // Getters and Setters
    /**
     * @brief Get the name of the character
     * @return The name of the character
     */
    const std::string& getName() const;

    /**
     * @brief Get the description of the character
     * @return The description of the character
     */
    const std::string& getDescription() const;

    /**
     * @brief Check if the character is friendly
     * @return True if the character is friendly, false otherwise
     */
    bool getIsFriendly() const;

    /**
     * @brief Get the size of the character
     * @return The size of the character
     */
    int getSize() const;

    /**
     * @brief Set the size of the character
     * @param newSize The new size of the character
     */
    void setSize(int newSize);

    // Static methods
    /**
     * @brief Load characters from a file
     * @param filename The name of the file to load characters from
     */
    static void loadCharactersFromFile(const std::string& filename);

    /**
     * @brief Get a character by name
     * @param characterName The name of the character
     * @return A pointer to the character if found, nullptr otherwise
     */
    static Character* getCharacterByName(const std::string& characterName);

    /**
     * @brief Get the list of characters
     * @return A vector of characters
     */
    static const std::vector<Character>& getListOfCharacters();

};

#endif // CHARACTER_H
