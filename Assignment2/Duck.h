/*
Title: Duck.h
Description: Declare the Duck class and its methods that are specific to the Duck.
Date: 06, November 2024
Author: Boris B
Version: 1.0
Copyright: BorisB 2024

DOCUMENTATION
Program Purpose:
Declare the Duck class and its methods that are specific to the Duck.

Compile:
This is a header file and is not meant to be compiled on its own.

Classes:
Duck - derived class from Animal

Methods:
sound - print a message about the sound the Duck makes

Variables:
type - string - type of the animal

TEST PLAN
Normal case:
This class is meant to be used by Problem1.cpp,
which creates instances of the derived classes and calls the methods to demonstrate the behaviors of each animal.

*/
#ifndef DUCK_H
#define DUCK_H

#include "Animal.h"

class Duck : public Animal {
    public:
        Duck();
        // ~Duck();

        void sound();
};

#endif //Duck_H