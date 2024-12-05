/*
Title: AnimalTest.cpp
Description: Reads the command line user input and creates the appropriate Animal child class based on the type of animal, and then calls the animal’s sound() method. 
Date: September 5, 2024
Author: Boris Bojanov
Version: 1.0
Copyright: Boris Bojanov 2024

DOCUMENTATION
Program Purpose:
This program reads the command line user input and creates the appropriate Animal child class based on the type of animal, 
and then calls the animal’s sound() method.

Compile: g++ -o AnimalTest AnimalTest.cpp Animal.cpp Duck.cpp Cow.cpp Pig.cpp Sheep.cpp

Class: 
AnimalTest


Methods:
AnimalTest() : Constructor
~AnimalTest() : Destructor
run(int argc, char* argv[]) : Main execution method
Private Methods:
createAnimal(const std::string& animalType) : Helper to create an animal

Variables:
None
*/

#include "AnimalTest.h"

#include <iostream>
#include <string>

using namespace std;

// Constructor
AnimalTest::AnimalTest() {}

// Destructor
AnimalTest::~AnimalTest() {}

// Method to create an animal based on the input type
Animal* AnimalTest::createAnimal(const std::string& animalType) {
    if (animalType == "duck") {
    return new Duck();
    } else if (animalType == "cow") {
        return new Cow();
    } else if (animalType == "pig") {
        return new Pig();
    } else if (animalType == "sheep") {
        return new Sheep();
    } else if (animalType == "animal") {
        return new Animal();
    } else {
        return nullptr;
    }
}

// Main execution method
void AnimalTest::run(int argc, char* argv[]) {
    string animalType;

    if (argc < 2) {
        cout << "Enter an animal type (duck, cow, pig, sheep) or type 'exit' to quit: ";
        cin >> animalType;
    } else {
        animalType = argv[1];
    }

    while (animalType != "exit") {
        Animal* animal = createAnimal(animalType);

        if (animal) {
            animal->sound();
            delete animal;
        } else {
            cout << "Invalid animal type: " << animalType << endl;
        }

        if (argc >= 2) break; // Single-use for command-line input

        cout << "Enter an animal type (duck, cow, pig, sheep) or type 'exit' to quit: ";
        cin >> animalType;
    }
}