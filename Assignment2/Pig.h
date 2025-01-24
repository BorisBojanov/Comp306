/*
Title: Pig.h
Description: Declare the Pig class and its methods that are specific to the pig.
Date: 06, November 2024
Author: Boris B
Version: 1.0
Copyright: BorisB 2024

DOCUMENTATION
Program Purpose:
Declare the Pig class and its methods that are specific to the pig.

Compile:
This is a header file and is not meant to be compiled on its own.

Classes:
Pig - derived class from Animal

Methods:
sound - print a message about the sound the pig makes

Variables:
type - string - type of the animal

TEST PLAN
Normal case:
This class is meant to be used by Problem1.cpp,
which creates instances of the derived classes and calls the methods to demonstrate the behaviors of each animal.
*/

#ifndef PIG_H
#define PIG_H

#include "Animal.h"

class Pig : public Animal {
public:
    Pig();
    ~Pig();

    void sound();
};

#endif // PIG_H