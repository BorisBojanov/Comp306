/*
Title: Animal.cpp
Description: Contains the implementation of the Animal class.
Date: 05, November 2024
Author: Boris B
Version: 1.0
Copyright: BorisB 2024

Class: Animal

Methods:
Constructor: Outputs "I am an animal" when an Animal.
sound() : Outputs a generic message.

Variables:
type : string : The type of animal

TEST PLAN
Normal Case:
The Animal class is created and the sound() method is called.

Discussion:
Inheritance: Animal is the base class.
virtual Keyword: Allows derived classes to override the method.
*/

#include "Animal.h"
// Default Constructor 
Animal::Animal() : type("x") {
}
// Constructor
Animal::Animal(string type) : type(type) {
    cout << "I am a "<< type << endl;
}
// Destructor
Animal::~Animal() {
}

void Animal::sound() {
    std::cout << "An animal makes a sound based on the animal that it is" << std::endl;
}

void Animal::setType(string type) {
    this->type = type;
}