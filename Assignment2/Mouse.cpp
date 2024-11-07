
/*
Title: Mouse.cpp
Description: 
Date: 06, November 2024
Author: Boris B
Version: 1.0
Copyright: BorisB 2024

DOCUMENTATION
Program Purpose:

Compile:

Classes:

Variables:

Methods:

TEST PLAN
Normal case:


*/ 

#include "Mouse.h"

Mouse::Mouse(string name, string species) : Rodent(name, species) {
    this->nameInstance = name;
    this->rodentSpecies = species;
}

Mouse::~Mouse() {
    cout << "Mouse destructor" << endl;
}

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

void Mouse::setLifeSpan(int lifeSpan) {
    this->MouseLifeSpan = lifeSpan;
}
