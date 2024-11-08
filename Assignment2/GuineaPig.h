
/*
Title: GuineaPig.h
Description: Declare the guinea pig class and its methods that are specific to the guinea pig.
Date: 06, November 2024
Author: Boris B
Version: 1.0
Copyright: BorisB 2024

DOCUMENTATION
Program Purpose:
Declare the guinea pig class and its methods that are specific to the guinea pig.

Compile:
This is a header file and is not meant to be compiled on its own.

Classes:
guinea pig - derived class from Rodent

Variables:
guinea pigLifeSpan - int - lifespan of the guinea pig

Methods:
getEat - print a message about what the guinea pig eats
getSleep - print a message about when the guinea pig sleeps
getRodentSpecies - print a message about the species of the guinea pig
getLifeSpan - print a message about the lifespan of the guinea pig

setLifeSpan - set the lifespan of the guinea pig

TEST PLAN
Normal case:
This class is meant to be used by Problem4.cpp,
It is tested by Problem4.cpp, which creates instances of the derived classes and calls the methods to demonstrate the behaviors of each rodent.
*/ 


#ifndef GUINEAPIG_H
#define GUINEAPIG_H

#include "Rodent.h"

class GuineaPig : public Rodent {
    private:
        // Variables
        int GuineaPigLifeSpan = 10;
    public:
        // Constructors
        GuineaPig(string name, string species);
        ~GuineaPig();
        
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

#endif // GUINEAPIG_H