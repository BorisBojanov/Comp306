
/*
Title: Mouse.h
Description: 
Date: 06, November 2024
Author: Boris B
Version: 1.0
Copyright: BorisB 2024

DOCUMENTATION
Program Purpose:
Declare the Mouse class and its methods that are specific to the mouse.

Compile:
This is a header file and is not meant to be compiled on its own.

Classes:
Mouse - derived class from Rodent

Variables:
MouseLifeSpan - int - lifespan of the mouse

Methods:
getEat - print a message about what the mouse eats
getSleep - print a message about when the mouse sleeps
getRodentSpecies - print a message about the species of the mouse
getLifeSpan - print a message about the lifespan of the mouse

setLifeSpan - set the lifespan of the mouse

TEST PLAN
Normal case:
This class is meant to be used by Problem4.cpp,
It is tested by Problem4.cpp, which creates instances of the derived classes and calls the methods to demonstrate the behaviors of each rodent.
*/ 

#ifndef MOUSE_H
#define MOUSE_H

#include "Rodent.h"

class Mouse : public Rodent {
    private:
        // Variables
        int MouseLifeSpan = 2;
    public:
        // Constructors
        Mouse(string name, string species);

        // Destructor
        ~Mouse();
        
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
#endif // MOUSE_H