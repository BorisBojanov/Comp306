
/*
Title: Mouse.cpp
Description: Define and initialize meathods, variables for the Mouse class
Date: 06, November 2024
Author: Boris B
Version: 1.0
Copyright: BorisB 2024

DOCUMENTATION
Program Purpose:
Define and initialize meathods, variables for the Mouse class

Compile:
This file is not meant to be compiled on its own.

Classes:
Mouse - derived class from Rodent

Variables:
MouseLifeSpan - int - lifespan of the mouse

Methods:
Mouse - constructor - initialize the name and species of the mouse
~Mouse - destructor - print a message when the object is destroyed

getEat - print a message about what the mouse eats
getSleep - print a message about when the mouse sleeps
getRodentSpecies - print a message about the species of the mouse
getLifeSpan - print a message about the lifespan of the mouse
getNameInstance - print a message about the name of the mouse

setLifeSpan - set the lifespan of the mouse

TEST PLAN
Normal case:
This class is meant to be used by Problem4.cpp,
which creates instances of the derived classes and calls the methods to demonstrate the behaviors of each rodent.
*/ 

#include "Mouse.h"

// Constructor
Mouse::Mouse(string name, string species) : Rodent(name, species) {
    this->nameInstance = name;
    this->rodentSpecies = species;
}

// Destructor
Mouse::~Mouse() {
    cout << "Mouse destructor" << endl;
}

// Get Methods
void Mouse::getEat() {
    cout << "Mouse eats seeds and insects" << endl;
}

void Mouse::getSleep() {
    cout << "Mouse sleeps during the day" << endl;
}

void Mouse::getRodentSpecies() {
    cout << this->nameInstance << " is a " << this->rodentSpecies << endl;
}

void Mouse::getLifeSpan() {
    cout << "Mouse lifespan is " << this->MouseLifeSpan << " years" << endl;
}

void Mouse::getNameInstance() {
    cout << "Mouse name is " << this->nameInstance << endl;
}

// Set Methods
void Mouse::setLifeSpan(int lifeSpan) {
    this->MouseLifeSpan = lifeSpan;
}
