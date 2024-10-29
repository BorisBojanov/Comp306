/* Problem1.cpp
Description:
Write a class called Animal with a default sound() method that does not output a specific animal sound. 
Instead, the generic output should be the statement, An animal makes a sound based on the animal that it is. 
The default constructor for Animal should also print I am an animal to standard output.

Create child classes for the following animals:
pig
sheep
duck
cow

Date: 2024-10-28
Author Boeis Bojanov
Version 1.0
Copyright: 2024 Boris Bojanov
*/
/* DOCUMENTATION


Program Purpose:
    Demonstrate inheritance in C++.

Compile: g++ -o Problem1 Problem1.cpp Animal.cpp Pig.cpp Sheep.cpp Duck.cpp Cow.cpp
Execution: ./Problem1.exe

Classes:
    Animal - parent class
    pig - child class
    sheep - child class
    duck - child class
    cow - child class

Variables:
    sound - string - used to store the sound of the animal

*/
/* TEST PLAN


Normal case:


*/
#include <iostream>
#include "Animal.h"
#include "Pig.h"
#include "Sheep.h"
#include "Duck.h"
#include "Cow.h"
using namespace std;

int main() {
    // Create the Animal objects
    Animal animal;
    animal.sound();
    cout << endl;

    // Create a Pig object
    Pig pig;
    pig.sound();
    cout << endl;

    // Create a Sheep object
    Sheep sheep;
    sheep.sound();
    cout << endl;

    // Create a Duck object
    Duck duck;
    duck.sound();
    cout << endl;

    // Create a Cow object
    Cow cow;
    cow.sound();
    cout << endl;

    return 0;
};
