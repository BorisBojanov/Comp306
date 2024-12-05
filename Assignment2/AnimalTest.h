/*
Title: AnimalTest.h
Description: Header file for the AnimalTest class
Date: September 5, 2024
Author: Boris Bojanov
Version: 1.0
Copyright: Boris Bojanov 2024

DOCUMENTATION
Program Purpose:
This header file declares the AnimalTest class, which is used to create animal objects.

Compile: This is a header file and does not compile on its own.

Classes: 
AnimalTest


Methods:
AnimalTest() : Constructor
~AnimalTest() : Destructor
run(int argc, char* argv[]) : Main execution method
Private Methods:
createAnimal(const std::string& animalType) : Helper to create an animal

Variables:
None

TEST PLAN
Normal Case:
This file is included in the AnimalTest.cpp file and the AnimalTest class is used to create animal objects.
*/

#ifndef ANIMALTEST_H
#define ANIMALTEST_H

#include "Animal.h"
#include "Duck.h"
#include "Cow.h"
#include "Pig.h"
#include "Sheep.h"
#include <string>

class AnimalTest {
public:
    AnimalTest();                      // Constructor
    ~AnimalTest();                     // Destructor
    void run(int argc, char* argv[]);  // Main execution method

private:
    Animal* createAnimal(const std::string& animalType); // Helper to create an animal
};

#endif // ANIMALTEST_H
