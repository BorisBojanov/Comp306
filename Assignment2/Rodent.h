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

Classes:

Variables:

Methods:

TEST PLAN
Normal case:
*/ 

#ifndef RODENT_H
#define RODENT_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Rodent {
    public:
        Rodent();
        Rodent(string name);
        virtual ~Rodent();
    protected:
        string nameInstance;

};
#endif // RODENT_H