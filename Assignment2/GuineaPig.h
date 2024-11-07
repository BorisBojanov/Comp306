
/*
Title:GuineaPig.h
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