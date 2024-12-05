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
DOCUMENTATION


Program Purpose:
Demonstrate inheritance in C++.

Compile: g++ -o Problem1 Problem1.cpp Animal.cpp Pig.cpp Sheep.cpp Duck.cpp Cow.cpp AnimalTest.cpp
Execution: ./Problem1
Execution with CLI argument: ./Problem1 pig

Classes:
Animal - parent class
pig - child class
sheep - child class
duck - child class
cow - child class

Variables:
sound - string - used to store the sound of the animal


TEST PLAN
Normal case: 
The program is executed without any command line arguments. The program creates objects of all the animals and calls the sound() method on each object.
Expected output: 
I am an animal
An animal makes a sound based on the animal that it is.
I am a pig
Oink
I am a sheep
Baa
I am a duck
Quack
I am a cow
Moo

CLI argument case:
The program is executed with a command line argument of pig. The program creates an object of the pig class and calls the sound() method on the object.
Expected output:
I am a pig
Oink

Invalid CLI argument case:
The program is executed with an invalid command line argument "se ep". The program should output an error message.
Expected output:
Invalid number of arguments, or check your spelling for spaces.

Invalid animal name case:
The program is executed with a command line argument of dog. The program should output an error message.
Expected output:
Invalid animal type: dog

*/
#include <iostream>
#include "Animal.h"
#include "Pig.h"
#include "Sheep.h"
#include "Duck.h"
#include "Cow.h"

#include "AnimalTest.h"

using namespace std;

int main(int argc, char* argv[]) {
    if (argc == 1){ // If no command line arguments are passed pring the messages of all the animals supported.
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

    } else if (argc == 2){ // If a command line argument is passed, create the object of the animal type passed as the argument.
    // Create an AnimalTest object
    AnimalTest animalTest;
    animalTest.run(argc, argv);
    } else {
        cout << "Invalid number of arguments, or check your spelling for spaces." << endl;
    }
    return 0;
};
