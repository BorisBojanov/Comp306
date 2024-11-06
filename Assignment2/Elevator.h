/*
title: Elevator.h
description: Header file provides declarations to ensure the compiler knows about the existence and interfaces of these entities.
Date: 05, November 2024
Author: Boris B
Version: 1.0
Copyright: BorisB 2024

DOCUMENTATION
Program Purpose:
Declare library includes and define the Elevator class.

Declare the number of numFloors(N) in the building when the object is instantiated.
Declare the Constructor and Destructor for the Elevator class.

Declare the finalize() method that satisfies the termination condition and 
verifies the condition by printing a message to the output, 
*Elevator ending: elevator returned to the first floor*.

Declare the get and set methods for the Elevator class.

Compile: This file is to be included in Elevator.cpp and Problem3.cpp
Execution: This file is not executable

Classes:
Elevator - class for creating Elevator objects

Variables:
numFloorsInstance - int - number of floors in the building
currentFloorInstance - int - current floor of the elevator


TEST PLAN
Normal case:
Make sure the header file is implemented correctly by including it in the Elevator.cpp file.
Making sure that all methods are declared correctly.
*/

#ifndef ELEVATOR_H
#define ELEVATOR_H

#include <string> // String declaration
#include <vector> // Vector declaration
#include <iostream> // Stream declaration

using namespace std;

class Elevator {
    private:
    // Attributes
    int numFloorsInstance;
    int currentFloorInstance;
    // Methods

    public:
    // Constructor
    Elevator(int numFloors);

    // Destructor
    ~Elevator();

    // Attributes

    // Methods
    void finalize();
    // Get Methods
    int getNumFloors();
    int getCurrentFloor();
    // Set Methods
    void setFloor(int floor);
    void setFloorUpOne();
    void setFloorDownOne();
};

#endif // ELEVATOR_H