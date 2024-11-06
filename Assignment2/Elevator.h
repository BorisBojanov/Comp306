/*
title: Elevator.h
description: Create a class called Elevator that can be moved between floors in an N-storey building.
Date: 05, November 2024
Author: Boris B
Version: 1.0
Copyright: BorisB 2024

DOCUMENTATION
Program Purpose:
Initialize the 
*/

#ifndef ELEVATOR_H
#define ELEVATOR_H

#include <string>
#include <vector>
#include <iostream>

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