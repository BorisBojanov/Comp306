

/*
Title: Hamster.h
Description: Declare the hamster class and its methods that are specific to the hamster.
Date: 06, November 2024
Author: Boris B
Version: 1.0
Copyright: BorisB 2024

DOCUMENTATION
Program Purpose:
Declare the hamster class and its methods that are specific to the hamster.

Compile:
This is a header file and is not meant to be compiled on its own.

Classes:
hamster - derived class from Rodent

Variables:
hamsterLifeSpan - int - lifespan of the hamster

Methods:
getEat - print a message about what the hamster eats
getSleep - print a message about when the hamster sleeps
getRodentSpecies - print a message about the species of the hamster
getLifeSpan - print a message about the lifespan of the hamster

setLifeSpan - set the lifespan of the hamster

TEST PLAN
Normal case:
This class is meant to be used by Problem4.cpp,
It is tested by Problem4.cpp, which creates instances of the derived classes and calls the methods to demonstrate the behaviors of each rodent.
*/ 


#ifndef HAMSTER_H
#define HAMSTER_H

#include "Rodent.h"

class Hamster : public Rodent {
    private:
        // Variables
        int hamsterLifeSpan = 3;
    public:
        // Constructors
        Hamster(string name, string species);
        ~Hamster();
        
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

#endif // HAMSTER_H