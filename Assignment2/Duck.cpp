/*
Title: Duck.cpp
Description: Implement the Duck class and its methods that are specific to the Duck.
Date: 06, November 2024
Author: Boris B
Version: 1.0
Copyright: BorisB 2024

DOCUMENTATION
Program Purpose:
Implement the Duck class and its methods that are specific to the Duck.

Compile:
This file is not meant to be compiled on its own.

Classes:
Duck - derived class from Animal

Variables:
type - string - type of the animal

Methods:
Duck - constructor - initialize the type of the animal
~Duck - destructor - print a message when the object is destroyed
sound - print a message about the sound the Duck makes

TEST PLAN
Normal case:
This class is meant to be used by Problem1.cpp,
which creates instances of the derived classes and calls the methods to demonstrate the behaviors of each animal.
*/

#include "Duck.h"

Duck::Duck() {
    type = "duck";
    std::cout << "I am a duck" << std::endl;
}

// Duck::~Duck() {
//     std::cout << "Duck destruction :(" << std::endl;
// }

void Duck::sound() {
    std::cout << "The duck says Quack" << std::endl;
}
