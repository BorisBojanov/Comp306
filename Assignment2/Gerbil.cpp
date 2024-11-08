
/*
Title:Gerbil.cpp
Description: Define and initialize meathods, variables for the Gerbil class
Date: 06, November 2024
Author: Boris B
Version: 1.0
Copyright: BorisB 2024

DOCUMENTATION
Program Purpose:
Define and initialize meathods, variables for the Gerbil class

Compile:
This file is not meant to be compiled on its own.
It is meant to be included in the Problem4.cpp file.

Classes:
Gerbil - derived class from Rodent

Variables:
nameInstance - string - name of the gerbil
rodentSpecies - string - species of the gerbil
lifeSpan - int - lifespan of the gerbil

Methods:
Gerbil - constructor - initialize the name and species of the gerbil
~Gerbil - destructor - print a message when the object is destroyed

getEat - print a message about what the gerbil eats
getSleep - print a message about when the gerbil sleeps
getRodentSpecies - print a message about the species of the gerbil
getLifeSpan - print a message about the lifespan of the gerbil

setLifeSpan - set the lifespan of the gerbil

TEST PLAN
Normal case:
This class is meant to be used by Problem4.cpp, 
which creates instances of the derived classes and calls the methods to demonstrate the behaviors of each rodent.
*/ 

#include "Gerbil.h"

// Constructor
Gerbil::Gerbil( string name , string species ) : Rodent( name, species ) {
    this->nameInstance = name;
    this->rodentSpecies = species;
}

// Destructor
Gerbil::~Gerbil() {
    cout << this->nameInstance << " the " << this->rodentSpecies << " destructor." << endl;
}

// Get Methods
void Gerbil::getEat() {
    cout << this->nameInstance << " the " << this->rodentSpecies << " eats seeds, nuts, and fruits." << endl;
}

void Gerbil::getSleep() {
    cout << this->rodentSpecies << "s sleep during the day." << endl;
}

void Gerbil::getRodentSpecies() {
    cout << this->nameInstance << " is a " << this->rodentSpecies << "." << endl;
}

void Gerbil::getLifeSpan() {
    cout << this->rodentSpecies << "s live for "<< GerbilLifeSpan << endl;
}

void Gerbil::getNameInstance() {
    cout << this->nameInstance << " is a " << this->rodentSpecies << "." << endl;
}

// Set Method
void Gerbil::setLifeSpan(int lifeSpan) {
    this->GerbilLifeSpan = lifeSpan;
}
