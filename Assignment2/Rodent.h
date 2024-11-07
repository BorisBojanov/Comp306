/*
Title:Rodent.h
Description:
Date: 06, November 2024
Author: Boris B
Version: 1.0
Copyright: BorisB 2024

DOCUMENTATION
Program Purpose:
Declare the Rodent class and its methods that are common to all rodents.
Behaivours to be implemented in the derived classes.
Each behaviour should print its action to standard output. 

eat, sleep, groom, move, makeNoise

Compile:
This file is not meant to be compiled it is a header file.
It is meant to be included in the Problem4.cpp file.

Classes:
Rodent - base class for all rodents

Variables:
nameInstance - string - name of the rodent
rodentSpecies - string - species of the rodent
lifeSpan - int - lifespan of the rodent

Methods:
getEat - print a message about what the rodent eats
getSleep - print a message about when the rodent sleeps
getGroom - print a message about how the rodent grooms itself
getMove - print a message about how the rodent moves
getMakeNoise - print a message about the noise the rodent makes
getRodentSpecies - print a message about the species of the rodent
getLifeSpan - print a message about the lifespan of the rodent

TEST PLAN
Normal case:
This class is not meant to be used on its own, but to be inherited by other classes.
It is tested by Problem4.cpp, which creates instances of the derived classes and calls the methods to demonstrate the behaviors of each rodent.
*/ 

#ifndef RODENT_H
#define RODENT_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Rodent {
    private: // Only the class has access to these attributes.

        
    public: // Other have access to these attributes
        // Constructors
        Rodent(string name, string species);

        // Destructor
        virtual ~Rodent();

        // Methods
        // Get Methods
        virtual void getEat();
        virtual void getSleep();
        virtual void getGroom();
        virtual void getMove();
        virtual void getMakeNoise();
        virtual void getRodentSpecies();
        virtual void getLifeSpan();

    protected: // Only the class and its derived classes have access to these attributes.
        // Variables
        int rodentLifeSpan = 0;
        string nameInstance;
        string rodentSpecies;

        // Get Methods
        // Pure virtual functions to be implemented in the derived classes
        virtual void getNameInstance() = 0; // Pure virtual function

        // Set Methods
        virtual void setLifeSpan(int lifeSpan) = 0; // Pure virtual function
        
};
#endif // RODENT_H