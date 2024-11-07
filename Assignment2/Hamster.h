
/*
Title:Hamster.h
Description: 
Date: 06, November 2024
Author: Boris B
Version: 1.0
Copyright: BorisB 2024

DOCUMENTATION
Program Purpose:

Compile:

Classes:

Variables:

Methods:

TEST PLAN
Normal case:
*/ 

#ifndef HAMSTER_H
#define HAMSTER_H

#include "Rodent.h"

class Hamster : public Rodent {
    private:
        // Variables
        int HamsterLifeSpan = 3;
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