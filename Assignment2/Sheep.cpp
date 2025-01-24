/*
Title: Sheep.cpp
Description: Implement the Sheep class and its methods that are specific to the Sheep.
Date: 06, November 2024
Author: Boris B
Version: 1.0
Copyright: BorisB 2024

DOCUMENTATION
Program Purpose:
Implement the Sheep class and its methods that are specific to the Sheep.

Compile:
This file is not meant to be compiled on its own.

Classes:
Sheep - derived class from Animal

Variables:
type - string - type of the animal

Methods:
Sheep - constructor - initialize the type of the animal
~Sheep - destructor - print a message when the object is destroyed
sound - print a message about the sound the Sheep makes

TEST PLAN
Normal case:
This class is meant to be used by Problem1.cpp,
which creates instances of the derived classes and calls the methods to demonstrate the behaviors of each animal.
*/

#include "Sheep.h"

// Constructor 
Sheep::Sheep(){
    type = "sheep";
    std::cout <<"I am a " << type << "." << std::endl;
}

Sheep::~Sheep(){
    std::cout << "I was a " << type << " and I am being destroyed." << std::endl;
}

void Sheep::sound(){
    std::cout << "The sheep says baa!" << std::endl;
}