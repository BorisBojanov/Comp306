/*
title: Elevator.cpp
description: Create a class called Elev
date: 05, November 2024
author: Boris B
version: 1.0
copyright: BorisB 2024

DOCUMENTATION
Program Purpose:
Create a class called Elevator that can be moved between floors in an N-storey building. 
Elevator uses a constructor to initialize the number of numFloors(N) in the building when the object is instantiated.


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

