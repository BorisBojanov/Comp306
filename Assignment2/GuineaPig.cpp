
/*
Title: GuineaPig.cpp
Description: Define and initialize meathods, variables for the guinea pig class
Date: 06, November 2024
Author: Boris B
Version: 1.0
Copyright: BorisB 2024

DOCUMENTATION
Program Purpose:
Define and initialize meathods, variables for the guinea pig class

Compile:
This file is not meant to be compiled on its own.

Classes:
guinea pig - derived class from Rodent

Variables:
guinea pigLifeSpan - int - lifespan of the guinea pig

Methods:
guinea pig - constructor - initialize the name and species of the guinea pig
~guinea pig - destructor - print a message when the object is destroyed

getEat - print a message about what the guinea pig eats
getSleep - print a message about when the guinea pig sleeps
getRodentSpecies - print a message about the species of the guinea pig
getLifeSpan - print a message about the lifespan of the guinea pig
getNameInstance - print a message about the name of the guinea pig

setLifeSpan - set the lifespan of the guinea pig

TEST PLAN
Normal case:
This class is meant to be used by Problem4.cpp,
which creates instances of the derived classes and calls the methods to demonstrate the behaviors of each rodent.
*/ 

#include "GuineaPig.h"

// Constructor
GuineaPig::GuineaPig(string name, string species) : Rodent(name, species) {
    this->nameInstance = name;
    this->rodentSpecies = species;
}

// Destructor
GuineaPig::~GuineaPig() {
    cout << this->nameInstance << " the " << this->rodentSpecies << " destructor." << endl;
}

// Get Methods
void GuineaPig::getEat() {
    cout << this->nameInstance << " the " << this->rodentSpecies << " eats vegetables and fruits." << endl;
}

void GuineaPig::getSleep() {
    cout << this->nameInstance << " the " << this->rodentSpecies << " sleeps during the day." << endl;
}

void GuineaPig::getRodentSpecies() {
    cout << this->nameInstance << " the " << this->rodentSpecies << " is a guinea pig." << endl;
}

void GuineaPig::getLifeSpan() {
    cout << this->nameInstance << " the " << this->rodentSpecies << " lives for 5 years." << endl;
}

void GuineaPig::getNameInstance() {
    cout << this->nameInstance << " the " << this->rodentSpecies << endl;
}

// Set Methods
void GuineaPig::setLifeSpan(int lifeSpan) {
    this->rodentLifeSpan = lifeSpan;
}
