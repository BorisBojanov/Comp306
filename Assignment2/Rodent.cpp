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

Classes:
Rodent - base class for all rodents

Variables:
NameInstance - string - name of the rodent

Methods:

TEST PLAN
Normal case:
*/ 

#include "Rodent.h"

Rodent::Rodent() {
    nameInstance = "Rodent";
}

Rodent::Rodent(string name) {
    this->nameInstance = name;
}

Rodent::~Rodent() {
    cout << "Rodent destructor" << endl;
}