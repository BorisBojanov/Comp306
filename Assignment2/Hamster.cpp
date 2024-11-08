
/*
Title: Hamster.cpp
Description: Define and initialize meathods, variables for the hamster class
Date: 06, November 2024
Author: Boris B
Version: 1.0
Copyright: BorisB 2024

DOCUMENTATION
Program Purpose:
Define and initialize meathods, variables for the hamster class

Compile:
This file is not meant to be compiled on its own.

Classes:
hamster - derived class from Rodent

Variables:
hamsterLifeSpan - int - lifespan of the hamster

Methods:
hamster - constructor - initialize the name and species of the hamster
~hamster - destructor - print a message when the object is destroyed

getEat - print a message about what the hamster eats
getSleep - print a message about when the hamster sleeps
getRodentSpecies - print a message about the species of the hamster
getLifeSpan - print a message about the lifespan of the hamster
getNameInstance - print a message about the name of the hamster

setLifeSpan - set the lifespan of the hamster

TEST PLAN
Normal case:
This class is meant to be used by Problem4.cpp,
which creates instances of the derived classes and calls the methods to demonstrate the behaviors of each rodent.
*/ 

#include "Hamster.h"

// Constructor
Hamster::Hamster(string name, string species) : Rodent(name, species) {
    this->nameInstance = name;
    this->rodentSpecies = species;
}

// Destructor
Hamster::~Hamster() {
    cout << "Hamster destructor" << endl;
}

// Get Methods
void Hamster::getEat() {
    cout << "Hamster eats seeds, fruits, and vegetables" << endl;
}

void Hamster::getSleep() {
    cout << "Hamster sleeps during the day" << endl;
}

void Hamster::getRodentSpecies() {
    cout << "Hamster species is " << this->rodentSpecies << endl;
}

void Hamster::getLifeSpan() {
    cout << "Hamster lifespan is 2-3 years" << endl;
}

void Hamster::getNameInstance() {
    cout << "Hamster name is " << this->nameInstance << endl;
}

// Set Methods
void Hamster::setLifeSpan(int lifeSpan) {
    this->hamsterLifeSpan = lifeSpan;
}