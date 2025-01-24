/*
Title: Cow.cpp
Description: Implement the Cow class and its methods that are specific to the cow.
Date: 06, November 2024
Author: Boris B
Version: 1.0
Copyright: BorisB 2024

DOCUMENTATION
Program Purpose:
Implement the Cow class and its methods that are specific to the cow.

Compile:
This file is not meant to be compiled on its own.

Classes:
Cow - derived class from Animal

Variables:
type - string - type of the animal

Methods:
Cow - constructor - initialize the type of the animal
~Cow - destructor - print a message when the object is destroyed
sound - print a message about the sound the cow makes

TEST PLAN
Normal case:
This class is meant to be used by Problem1.cpp,
which creates instances of the derived classes and calls the methods to demonstrate the behaviors of each animal.
*/

#include "Cow.h"

// Constructor
Cow::Cow(){
    
    type = "cow";
    std::cout << "I am a "<< type << std::endl;
}

Cow::~Cow(){
    std::cout << "The cow is dead now" << std::endl;
}

void Cow::sound(){
    std::cout << "The " << type << " says moo" << std::endl;
}