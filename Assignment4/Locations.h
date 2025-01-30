// Locations.h
#ifndef LOCATIONS_H
#define LOCATIONS_H

#include <string>
#include <vector>
#include <map>
#include <fstream>
#include <iostream>

using namespace std;

class Location {
private:
    vector<Location> locations;
    string name;
    string shortDescription;
    string longDescription;
    map<string, bool> connections;

public:
    // Constructors
    Location();
    // Constructor
    Location(const std::string& name, const std::string& shortDesc, const std::string& longDesc, const std::map<std::string, bool>& connections)
        : name(name), shortDescription(shortDesc), longDescription(longDesc), connections(connections) {}
    // Getters
    string getName() const;
    string getShortDescription() const;
    string getLongDescription() const;
    map<string, bool> getConnections() const;

    Location getCurrentLocation() const { return currentLocation; }

    // Static method to load locations
    static vector<Location> loadFromFile(const string& fileName);
    
    // Setters
    void setLocationsValues(vector<Location> locations);

    void setCurrentLocation(Location* loc) { currentLocation = loc; }

};
#endif