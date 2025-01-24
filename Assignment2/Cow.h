/*
Title: Cow.h
Description: Declare the Cow class and its methods that are specific to the cow.
Date: 06, November 2024
Author: Boris B
Version: 1.0
Copyright: BorisB 2024

DOCUMENTATION
Program Purpose:
Declare the Cow class and its methods that are specific to the cow.

Compile:
This is a header file and is not meant to be compiled on its own.

Classes:
Cow - derived class from Animal

Methods:
sound - print a message about the sound the cow makes

Variables:
type - string - type of the animal

TEST PLAN
Normal case:
This class is meant to be used by Problem1.cpp,
which creates instances of the derived classes and calls the methods to demonstrate the behaviors of each animal.
*/

#ifndef COW_H
#define COW_H

#include "Animal.h"

class Cow : public Animal {
    public:
        Cow(); // Default constructor
        ~Cow(); // Deconstructor

        void sound(); // Sound method
};

#endif // COW_H