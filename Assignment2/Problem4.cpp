
/*
Title:Problem4.cpp
Description:
Date: 06, November 2024
Author: Boris B
Version: 1.0
Copyright: BorisB 2024

DOCUMENTATION
Program Purpose:
Create an inheritance hierarchy of Rodent: mouse, gerbil, hamster, guinea pig.
Test your Rodent classes by writing a main() class and creating instances of every rodent, 
and demonstrate all the behaviours for each rodent.

Compile:
g++ Problem4.cpp Gerbil.cpp Hamster.cpp GuineaPig.cpp Mouse.cpp Rodent.cpp -o Problem4

Classes:
Rodent - base class for all rodents
Gerbil - derived class from Rodent
Hamster - derived class from Rodent
GuineaPig - derived class from Rodent
Mouse - derived class from Rodent

Variables:

Methods:
main - create instances of each rodent and demonstrate their behaviours

TEST PLAN
Normal case:
Gerry the Gerbil eats seeds, nuts, and fruits.
Gerbils sleep during the day.
Gerry is a Gerbil.
Gerbils live for 4
Gerry is a Gerbil.

Hamster eats seeds, fruits, and vegetables
Hamster sleeps during the day
Hamster species is Hamster
Hamster lifespan is 2-3 years
Hamster name is Harry

Gustard the Guinea Pig eats vegetables and fruits.
Gustard the Guinea Pig sleeps during the day.
Gustard the Guinea Pig is a guinea pig.
Gustard the Guinea Pig lives for 5 years.
Gustard the Guinea Pig

Mouse eats seeds and insects
Mouse sleeps during the day
Mickey is a Mouse
Mouse lifespan is 2 years
Mouse name is Mickey

Mouse destructor
Rodent destructor
Gustard the Guinea Pig destructor.
Rodent destructor
Hamster destructor
Rodent destructor
Gerry the Gerbil destructor.
Rodent destructor

Discussion:
There are warnings due to C11 standard, but the program runs as expected.
There are warnings for the overridden methods in the derived classes. But the program runs as expected.
There are warnings for default member initializer for the variables in the derived classes. But the program runs as expected.
There are warnings for the imaginary methods and the imaginary destructor in the derived classes. But the program runs as expected.

*/ 

#include "Gerbil.h"
#include "Hamster.h"
#include "GuineaPig.h"
#include "Mouse.h"

int main() {
    // Create instances of each rodent
    Gerbil gerbil("Gerry", "Gerbil");
    Hamster hamster("Harry", "Hamster");
    GuineaPig guineaPig("Gustard", "Guinea Pig");
    Mouse mouse("Mickey", "Mouse");

    // Demonstrate the behaviours of each rodent
    gerbil.getEat();
    gerbil.getSleep();
    gerbil.getRodentSpecies();
    gerbil.getLifeSpan();
    gerbil.getNameInstance();
    cout << endl;

    hamster.getEat();
    hamster.getSleep();
    hamster.getRodentSpecies();
    hamster.getLifeSpan();
    hamster.getNameInstance();
    cout << endl;

    guineaPig.getEat();
    guineaPig.getSleep();
    guineaPig.getRodentSpecies();
    guineaPig.getLifeSpan();
    guineaPig.getNameInstance();
    cout << endl;

    mouse.getEat();
    mouse.getSleep();
    mouse.getRodentSpecies();
    mouse.getLifeSpan();
    mouse.getNameInstance();
    cout << endl;

    return 0;
}