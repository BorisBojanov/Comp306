/*
title: Problem3.cpp
description: Test the class Elevator in at least 5 possible scenarios.
Date: 05, November 2024
Author: Boris B
Version: 1.0
Copyright: BorisB 2024

DOCUMENTATION

Program Purpose:


Elevator also has a default constructor that creates a five- (5) storey building.

The Elevator class has a termination condition that requires the elevator to be moved to the main (i.e., first) floor when the object is cleaned up. 
Write a finalize() method that satisfies this termination condition and verifies the condition by printing a message to the output, 
*Elevator ending: elevator returned to the first floor*.

In main(), test at least five (5) possible scenarios that can occur when Elevator is used in a building with many floors 
(e.g., create, move from one floor to another, etc.).

Compile: g++ Problem3.cpp Elevator.cpp -o Problem3
Execution: ./Problem3

Classes: 
Elevator

Variables:
slowElevator - Elevator - object of Elevator class

Methods:
main() - int - main function to test the Elevator class


TEST CASES:
Test case Number of floors in the building 7:
    Current floor: 1
Test case Moce to floor 3:
    Current floor: 3
Test case Move up one floor:
    Current floor: 4
Test case Move down one floor:
    Current floor: 3
Test case Move to floor 9:
    Error: Floor number is greater than the number of floors in the building
    Current floor: 3
Test case Destructor:
    Elevator object is being deleted
    Elevator ending: elevator returned to the first floor

Discussion:
If an object is created using new, it must be explicitly deleted with delete to invoke the destructor.
If an object is created on the stack, the destructor is automatically called when the object goes out of scope.
*/

#include "Elevator.h"

int main() {
    // Dynamically allocate an Elevator object
    Elevator* slowElevator = new Elevator(7); // Use new to create the object
    cout << "Number of floors in the building: " << slowElevator->getNumFloors() << endl;
    cout << "Current floor: " << slowElevator->getCurrentFloor() << endl;
    slowElevator->setFloor(3);
    cout << "Current floor: " << slowElevator->getCurrentFloor() << endl;
    slowElevator->setFloorUpOne();
    cout << "Current floor: " << slowElevator->getCurrentFloor() << endl;
    slowElevator->setFloorDownOne();
    cout << "Current floor: " << slowElevator->getCurrentFloor() << endl;
    slowElevator->setFloor(9);
    cout << "Current floor: " << slowElevator->getCurrentFloor() << endl;
    
    // Manually delete the object to invoke the destructor and free memory
    slowElevator->finalize();

    return 0;
}