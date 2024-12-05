/*
Title: Animal.h
Description: Contains the declaration of the Animal class.
Date: 05, November 2024
Author: Boris B
Version: 1.0
Copyright: Boris B 2024

DOCUMENATION
Program Purpose:
Declase the Animal class and its methods

Compile: This is a header file and does not compile on its own.

Classes: Animal

Methods:
Animal() : Default constructor
~Animal() : Deconstructor
sound() : Outputs a generic message

Variables:
type : string : The type of animal

TEST PLAN
Normal Case:
The Animal class is created and the sound() method is called.
*/
#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>

using namespace std;

class Animal {
    public:
        // Default constuctor
        Animal();
        // Constructor
        Animal(string type);
        // Deconstructor
        virtual ~Animal();

        // Sound method
        virtual void sound();
        virtual void setType(string type);

    protected:
        std::string type;    
};

#endif // ANIMAL_H