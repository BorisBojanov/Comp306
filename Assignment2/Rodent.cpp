/*
Title:Rodent.cpp
Description: Define and initialize meathods, variables for the Rodent class
Date: 06, November 2024
Author: Boris B
Version: 1.0
Copyright: BorisB 2024

DOCUMENTATION
Program Purpose:
In the base class, provide methods that are common to all rodents, 
redefine these in the derived classes to perform different behaviors depending on the specific type of rodent.

Compile:
This file is not meant to be compiled on its own.
It is meant to be included in the Problem4.cpp file.

Classes:
Rodent - base class for all rodents

Variables:
lifeSpan - int - lifespan of the rodent
nameInstance - string - name of the rodent
rodentSpecies - string - species of the rodent

Methods:
Rodent - constructor - initialize the name and species of the rodent
~Rodent - destructor - print a message when the object is destroyed
getEat - print a message about what the rodent eats
getSleep - print a message about when the rodent sleeps
getGroom - print a message about how the rodent grooms itself
getMove - print a message about how the rodent moves
getMakeNoise - print a message about the noise the rodent makes
getRodentSpecies - print a message about the species of the rodent
getLifeSpan - print a message about the lifespan of the rodent


TEST PLAN
Normal case:
This class is not meant to be used on its own, but to be inherited by other classes.
It is tested by Problem4.cpp, which creates instances of the derived classes and calls the methods to demonstrate the behaviors of each rodent.
*/ 

#include "Rodent.h"

// Constructor
Rodent::Rodent(string name, string species) {
    this->nameInstance = name;
    this->rodentSpecies = species;
}
// Destructor
Rodent::~Rodent() {
    cout << "Rodent destructor" << endl;
}

// Get Methods
void Rodent::getEat() {
    cout << "Rodent eats plants or bugs or seeds" << endl;
}

void Rodent::getSleep() {
    cout << "Rodents sleep during the day or night" << endl;
}

void Rodent::getGroom() {
    cout << "Rodents groom themselves or they groom eachother" << endl;
}

void Rodent::getMove() {
    cout << "Rodents jump, run, or crawl" << endl;
}

void Rodent::getMakeNoise() {
    cout << "Rodents scream, sing, squeek or even peep" << endl;
}

void Rodent::getRodentSpecies() {
    cout << "Rodents can be any number of species. Some are a mouse, gerbil, hamster, guinea pig" << endl;
}

void Rodent::getLifeSpan() {
    cout << "Rodents can live from 1 to 10 years" << endl;
}
