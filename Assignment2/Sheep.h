/*
Title: Sheep.h
Description: Declare the Sheep class and its methods that are specific to the Sheep.
Date: 06, November 2024
Author: Boris B
Version: 1.0
Copyright: BorisB 2024

DOCUMENTATION
Program Purpose:
Declare the Sheep class and its methods that are specific to the Sheep.

Compile:
This is a header file and is not meant to be compiled on its own.

Classes:
Sheep - derived class from Animal

Methods:
sound - print a message about the sound the Sheep makes

Variables:
type - string - type of the animal

TEST PLAN
Normal case:
This class is meant to be used by Problem1.cpp,
which creates instances of the derived classes and calls the methods to demonstrate the behaviors of each animal.
*/

#ifndef SHEEP_H
#define SHEEP_H

#include "Animal.h"

class Sheep : public Animal {
    public:
    Sheep();
    // ~Sheep();

    void sound();
};

#endif // SHEEP_H