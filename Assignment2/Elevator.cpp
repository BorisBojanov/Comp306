/*
title: Elevator.cpp
description: Create a class called Elevator with a parameterized constructor to specify number of floors.
date: 05, November 2024
author: Boris B
version: 1.0
copyright: BorisB 2024

DOCUMENTATION
Program Purpose:
Create a class called Elevator that can be moved between floors in an N-storey building. 
Elevator uses a constructor to initialize the number of numFloors(N) in the building when the object is instantiated.

Compile: g++ Problem3.cpp Elevator.cpp -o Problem3
Execution: This file is not executable

Classes:
Elevator - class for creating Elevator objects

Variables:
numFloorsInstance - int - number of floors in the building
currentFloorInstance - int - current floor of the elevator

Methods:
Elevator(int numFloors) - Constructor - initialize the number of numFloors(N) in the building when the object is instantiated
~Elevator() - Destructor - delete the Elevator object
finalize() - void - move the elevator to the first floor when the object is cleaned up

getNumFloors() - int - get the number of floors in the building
getCurrentFloor() - int - get the current floor of the elevator

setFloor(int floor) - void - set the floor of the elevator
setFloorUpOne() - void - move the elevator up one floor
setFloorDownOne() - void - move the elevator down one floor

TEST PLAN
Normal case:
Make sure the Elevator class is implemented correctly by calling the get and set methods outside of the class.
 
*/ 

#include "Elevator.h"

// Constructor
Elevator::Elevator(int numFloors) { 
    numFloorsInstance = numFloors;
    currentFloorInstance = 1;
}
// Destructor
Elevator::~Elevator() {
    cout << "Elevator object is being deleted" << endl;
}

void Elevator::finalize() {
    currentFloorInstance = 1;
    cout << "Elevator ending: elevator returned to the first floor" << endl;
    // Delete the object
    delete this; // This is calling ~Elevator() destructor.
}

// Get Methods
int Elevator::getNumFloors() {
    return numFloorsInstance;
}

int Elevator::getCurrentFloor() {
    return currentFloorInstance;
}

// Set Methods

void Elevator::setFloor(int floor) {
    if (floor > numFloorsInstance) {
        cout << "Error: Floor number is greater than the number of floors in the building" << endl;
    } else if (floor <= 1) {
        cout << "Error: Floor number is less than or equal to 1" << endl;
    } else {
        currentFloorInstance = floor;
        cout << "Elevator moved to floor " << currentFloorInstance << endl;
    }
}

void Elevator::setFloorUpOne() {
    if (currentFloorInstance == numFloorsInstance) {
        cout << "Error: Already on the top floor" << endl;
    } else {
        currentFloorInstance++;
        cout << "Elevator moved up one floor" << endl;
    }
}

void Elevator::setFloorDownOne() {
    if (currentFloorInstance == 1) {
        cout << "Error: Already on the first floor" << endl;
    } else {
        currentFloorInstance--;
        cout << "Elevator moved down one floor" << endl;
    }
}

