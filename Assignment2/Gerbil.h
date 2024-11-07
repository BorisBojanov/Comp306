
/*
Title:Gerbil.h
Description: 
Date: 06, November 2024
Author: Boris B
Version: 1.0
Copyright: BorisB 2024

DOCUMENTATION
Program Purpose: 
Declare the Gerbil class and its methods that are specific to Gerbils.
Each behaviour should print its action to standard output. 

eat, sleep, groom, move, makeNoise

Set the Gerbil class to inherit from the Rodent class.
Set the Gerbil methods to override the Rodent methods.

Compile:
This file is not meant to be compiled on its own.
It is meant to be included in the Problem4.cpp file.

Classes:
Gerbil - derived class from Rodent

Variables:
lifeSpan - int - lifespan of the gerbil

Methods:
Gerbil - constructor - initialize the name and species of the gerbil
~Gerbil - destructor - print a message when the object is destroyed

getEat - print a message about what the gerbil eats
getSleep - print a message about when the gerbil sleeps
getRodentSpecies - print a message about the species of the gerbil
getLifeSpan - print a message about the lifespan of the gerbil

setLifeSpan - set the lifespan of the gerbil


TEST PLAN
Normal case:
This class is not meant to be used on its own, but to be inherited by other classes.
It is tested by Problem4.cpp, which creates instances of the derived classes and calls the methods to demonstrate the behaviors of each rodent.
*/ 

#ifndef GERBIL_H
#define GERBIL_H

#include "Rodent.h"

class Gerbil : public Rodent {
    private:
        // Variables
        int GerbilLifeSpan = 4;
    public:
        // Constructors
        Gerbil(string name, string species);

        // Destructor
        ~Gerbil() override;

        // Methods
        // Get Methods
        void getEat() override;
        void getSleep() override;
        void getRodentSpecies() override;
        void getLifeSpan() override;
        void getNameInstance() override;
        
        // Set Method
        void setLifeSpan(int lifeSpan) override;
};


#endif // GERBIL_H