/*
title: Problem3.cpp
description: Create a class called *Elevator* that can be moved between floors in an *N*-storey building. 
Elevator uses a constructor to initialize the number of floors (*N*) in the building when the object is instantiated.

Elevator also has a default constructor that creates a five- (5) storey building.

The Elevator class has a termination condition that requires the elevator to be moved to the main (i.e., first) floor when the object is cleaned up. 
Write a finalize() method that satisfies this termination condition and verifies the condition by printing a message to the output, 
*Elevator ending: elevator returned to the first floor*.

In main(), test at least five (5) possible scenarios that can occur when Elevator is used in a building with many floors 
(e.g., create, move from one floor to another, etc.).

Date: 05, November 2024
Author: Boris B
Version: 1.0
Copyright: BorisB 2024

Compile: g++ Problem3.cpp Elevator.cpp -o Problem3
Execution: ./Problem3

Classes: Elevator

Variables:
    N - int - number of floors in the building
    elevator - Elevator - object of Elevator class
*/

