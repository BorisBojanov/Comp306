// Locations.cpp

/**
 * 
 * 
 * Notes:
 * Connection Parsing:
 *
 *  The connectionsStr parsing logic assumes each connection ends with :, but this may not always be true depending on the file format.
 *  Edge Case Handling:
 *
 *  If any field is missing or improperly delimited, the parsing logic will fail silently, potentially skipping the line without warning.
 *  Extra spaces or inconsistent delimiters might cause unexpected behavior.
 */
#include "Locations.h"

// Default Constructor
Location::Location(){}


// Getters
string Location::getName() const {
    return name;
}

string Location::getShortDescription() const {
    return shortDescription;
}

string Location::getLongDescription() const {
    return longDescription;
}

map<string, bool> Location::getConnections() const {
    return connections;
}

// Static method to load locations from a file
vector<Location> Location::loadFromFile(const string& fileName) {
    vector<Location> locations;
    ifstream file(fileName);
    if (!file.is_open()) {
        cerr << "Error: Could not open " << fileName << endl;
        return locations;
    }

    string line;
    while (getline(file, line)) {
        size_t namePos = line.find(":");
        size_t shortDescPos = line.find(":", namePos + 1);
        size_t longDescPos = line.find(":", shortDescPos + 1);
        size_t connPos = line.find(":", longDescPos + 1);

        if (namePos != string::npos && shortDescPos != string::npos && longDescPos != string::npos && connPos != string::npos) {
            string name = line.substr(0, namePos);
            string shortDesc = line.substr(namePos + 1, shortDescPos - namePos - 1);
            string longDesc = line.substr(shortDescPos + 1, longDescPos - shortDescPos - 1);
            string connectionsStr = line.substr(longDescPos + 1);

            map<string, bool> connections; 
            size_t start = 0, end;

            //The connectionsStr contains connection data (e.g., North: false : South: true :East: true : West: false).
            while ((end = connectionsStr.find(":", start)) != string::npos) {
                size_t separator = connectionsStr.find(" ", start);

                //Then further splits this string into individual direction-value pairs (e.g., "North: false") using : as the delimiter.
                if (separator != string::npos && separator < end) {
                    string direction = connectionsStr.substr(start, separator - start);
                    string value = connectionsStr.substr(separator + 1, end - separator - 1);

                    //Each pair is split into direction and value. connections[direction] is set to true if value == "true", otherwise false.
                    connections[direction] = (value == "true");
                }
                start = end + 1;
            }

            locations.push_back(Location(name, shortDesc, longDesc, connections));
        }
    }
    file.close();
    return locations;
}

// set locations from a file
void Location::setLocationsValues(vector<Location> locations){
    // Process each location
    for (const Location& loc : locations) {
        // Assign individual fields
        string name = loc.getName();
        string shortDescription = loc.getShortDescription();
        string longDescription = loc.getLongDescription();
        map<string, bool> connections = loc.getConnections();

        // Example: Output the values
        cout << "Location Name: " << name << "\n";
        cout << "Short Description: " << shortDescription << "\n";
        cout << "Long Description: " << longDescription << "\n";
        cout << "Connections:\n";
        for (const auto& conn : connections) {
            cout << "  " << conn.first << ": " << (conn.second ? "true" : "false") << "\n";
        }
        cout << "---------------------\n";
    }
}

