/*
Title: Pig.cpp
Description: Implement the Pig class and its methods that are specific to the pig.
Date: 06, November 2024
Author: Boris B
Version: 1.0
Copyright: BorisB 2024

DOCUMENTATION
Program Purpose:
Implement the Pig class and its methods that are specific to the pig.

Compile:
This file is not meant to be compiled on its own.

Classes:
Pig - derived class from Animal

Variables:
type - string - type of the animal

Methods:
Pig - constructor - initialize the type of the animal
~Pig - destructor - print a message when the object is destroyed
sound - print a message about the sound the pig makes

TEST PLAN
Normal case:
This class is meant to be used by Problem1.cpp,
which creates instances of the derived classes and calls the methods to demonstrate the behaviors of each animal.
*/


#include "Pig.h"

// Constructor
Pig::Pig() {
    type = "pig";
    cout << "I am a "<< type << "." << endl;
}

// Destructor Operational
Pig::~Pig() {
    std::cout << "I was a "<< type << "." << std::endl;
}

void Pig::sound() {
    cout << "The " << type << " says Oink." << endl;
}