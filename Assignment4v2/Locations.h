/**
 * Title: Locations.h
 * Author: Boris B
 * Date: January 25, 2025
 * Version: 2.0
 * Description: Header file for the Locations class, which manages the game's locations and connections.
 * 
 * DOCUMENTATION
 * 
 * Program Purpose:
 *    The Locations class is responsible for managing the locations, descriptions, items, and characters.
 *    It loads locations from a file, allows items and characters to be added to locations, and provides information about the current location.
 * 
 * Classes:
 *   Locations - Manages the game's locations, descriptions, items, and characters.
 * 
 * Variables:
 *  locationDescriptions - A map of location names to descriptions.
 * allowedConnections - A map of location names to allowed connections.
 * itemsInLocations - A map of location names to items.
 * charactersInLocations - A map of location names to characters.
 * currentLocation - The string holding the current location of the player.
 * 
 * Functions:
 *  Locations() - Constructor for the Locations class.
 *  loadLocationsFromFile() - Loads locations and descriptions from a file.
 *  addItemToLocation() - Adds an item to a location.
 *  addCharacterToLocation() - Adds a character to a location.
 *  getItemsAtLocation() - Gets the items at a location.
 *  getCharactersAtLocation() - Gets the characters at a location.
 *  getLocationDescription() - Gets the description of a location.
 *  getAllowedConnections() - Gets the allowed connections from a location.
 *  moveToLocation() - Moves the player to a new location.
 *  getCurrentLocation() - Gets the current location of the player.
 * 
 * Test Plan:
 * The program was tested by running it and interacting with the game using various commands. The following test cases were performed:
 * 1. Loaded locations and descriptions from a file.
 * 2. Added items and characters to locations.
 * 3. Moved the player to different locations.
 * 4. Retrieved the description of the current location.
 * 5. Retrieved the items and characters at a location.
 * 
 * More about testing in the documentation journal.
*/
#ifndef LOCATIONS_H
#define LOCATIONS_H

#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

class Locations {
private:
    std::unordered_map<std::string, std::string> locationDescriptions;
    std::unordered_map<std::string, std::vector<std::string> > allowedConnections;
    std::unordered_map<std::string, std::vector<std::string> > itemsInLocations;
    std::unordered_map<std::string, std::vector<std::string> > charactersInLocations;
    std::string currentLocation;

public:
    /**
     * @brief Construct a new Locations object
     * @param startingLocation The starting location of the player
    */
    Locations(const std::string& startingLocation);

    /**
     * @brief Load locations and descriptions from a file
     * @param filename The name of the file to load locations from
    */
    void loadLocationsFromFile(const std::string& filename);

    /**
     * @brief Add an item to a location
     * @param item The item to add
     * @param location The location to add the item to
    */
    void addItemToLocation(const std::string& item, const std::string& location);

    /**
     * @brief Add a character to a location
     * @param character The character to add
     * @param location The location to add the character to
    */
    void addCharacterToLocation(const std::string& character, const std::string& location);

    /**
     * @brief Get the items at a location
     * @param location The location to get the items from
     * @return The items at the location
    */
    const std::vector<std::string>& getItemsAtLocation(const std::string& location) const;

    /**
     * @brief Get the characters at a location
     * @param location The location to get the characters from
     * @return The characters at the location
    */
    const std::vector<std::string>& getCharactersAtLocation(const std::string& location) const;

    /**
     * @brief Get the description of a location
     * @param location The location to get the description of
     * @return The description of the location
    */
    const std::string& getLocationDescription(const std::string& location) const;

    /**
     * @brief Get the allowed connections from a location
     * @param location The location to get the allowed connections from
     * @return The allowed connections from the location
    */
    const std::vector<std::string> &getAllowedConnections(const std::string &location) const;

    /**
     * @brief Move the player to a new location
     * @param newLocation The new location to move to
    */
    void moveToLocation(const std::string& newLocation);

    /**
     * @brief Get the current location of the player
     * @return The current location of the player
    */
    const std::string& getCurrentLocation() const;
};

#endif // LOCATIONS_H