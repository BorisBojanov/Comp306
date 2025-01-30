
/**
 * Title: Locations.cpp
 * Author: Boris B
 * Date: January 25, 2025
 * Version: 2.0
 * Description: Locations class implementation, which manages the game's locations and connections.
 * 
 * DOCUMENTATION
 * 
 *  Program Purpose:
 *     The Locations class is responsible for managing the locations, descriptions, items, and characters.
 *     It loads locations from a file, allows items and characters to be added to locations, and provides information about the current location.  
 * 
 * Classes:
 *  Locations - Manages the game's locations, descriptions, items, and characters.
 * 
 * Variables:
 * locationDescriptions - A map of location names to descriptions.
 * allowedConnections - A map of location names to allowed connections.
 * itemsInLocations - A map of location names to items.
 * charactersInLocations - A map of location names to characters.
 * currentLocation - The string holding the current location of the player.
 * 
 * Functions:
 * Locations() - Constructor for the Locations class.
 * loadLocationsFromFile() - Loads locations and descriptions from a file.
 * addItemToLocation() - Adds an item to a location.
 * addCharacterToLocation() - Adds a character to a location.
 * getItemsAtLocation() - Gets the items at a location.
 * getCharactersAtLocation() - Gets the characters at a location.
 * getLocationDescription() - Gets the description of a location.
 * getAllowedConnections() - Gets the allowed connections from a location.
 * moveToLocation() - Moves the player to a new location.
 * getCurrentLocation() - Gets the current location of the player.
 * 
 * */ 
#include "Locations.h"
#include <fstream>
#include <sstream>

Locations::Locations(const std::string& startingLocation) : currentLocation(startingLocation) {}

void Locations::loadLocationsFromFile(const std::string& filename) {
    std::ifstream file(filename);
    if (!file.is_open()) {
        std::cerr << "Failed to open locations file: " << filename << std::endl;
        return;
    }

    std::string line;
    while (std::getline(file, line)) {
        std::istringstream ss(line);
        std::string locationName, description, connection1, connection2, connection3; 

        if (std::getline(ss, locationName, ',') &&
            std::getline(ss, description, ',') &&
            std::getline(ss, connection1, ',') &&
            std::getline(ss, connection2, ',') &&
            std::getline(ss, connection3, ',')) {

            locationDescriptions[locationName] = description;
            allowedConnections[locationName].push_back(connection1);
            allowedConnections[locationName].push_back(connection2);
            allowedConnections[locationName].push_back(connection3);
            // print the loaded location and description
            // std::cout << "Loaded location: " << locationName << " with description: " << description << "\n";

        } else {
            std::cerr << "Invalid line format: " << line << std::endl;
        }
    }
    // std::cout << "Locations loaded successfully\n" << std::endl;
    file.close();
}

void Locations::addItemToLocation(const std::string& item, const std::string& location) {
    itemsInLocations[location].push_back(item);
    // print out the item added to the location
    // std::cout << "You added " << item << " to " << location << "\n";
}

void Locations::addCharacterToLocation(const std::string& character, const std::string& location) {
    charactersInLocations[location].push_back(character);
}

const std::vector<std::string>& Locations::getItemsAtLocation(const std::string& location) const {
    return itemsInLocations.at(location);
}

const std::vector<std::string>& Locations::getCharactersAtLocation(const std::string& location) const {
    return charactersInLocations.at(location);
}

const std::string& Locations::getLocationDescription(const std::string& location) const {
    return locationDescriptions.at(location);
}

const std::vector<std::string>& Locations::getAllowedConnections(const std::string& location) const {
    return allowedConnections.at(location);
}

void Locations::moveToLocation(const std::string& newLocation) {
    // Check if the new location exists in the map
    if (locationDescriptions.find(newLocation) != locationDescriptions.end()) {
        currentLocation = newLocation;
        std::cout << "You moved to " << currentLocation << ": " << locationDescriptions.at(currentLocation) << "\n";
    } else {
        std::cout << "Invalid location!\n";
    }
}

const std::string& Locations::getCurrentLocation() const {
    return currentLocation;
}
