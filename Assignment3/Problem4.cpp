/*
title: Problem4.cpp
description: Create three floating point arrays and fill them with values
Date: 24 November 2024
author: Boris Bojanov
version: 1.0
Copyright: Boris Bojanov 2024

DOCUMENTATION
Program Purpose:
Write a program that creates three floating point arrays. 
Fill the first two arrays with 25 floating point numbers using loop structures, as follows: 
    fill the first array with the loop counter value and fill the second array with the loop counter value squared. 

Finally, write a loop that adds the corresponding elements in the first two arrays and puts the result in the corresponding element of the third array. 

Display all three arrays using the format for counter; element + element = element.

Compile: g++ -o Problem4 Problem4.cpp
Execution: ./Problem4

Classes: none

*/

#include <iostream> // Stream declarations
#include <iomanip> //used to set width of cout

using namespace std;

int main(){
    // Create three floating point arrays
    float arrayOne[25];
    float arrayTwo[25];
    float arrayThree[25];
    int counter;
    // Fill the first two arrays with 25 floating point numbers using loop structures
    for(counter = 0; counter < 25; counter++){
        // Fill the first array with the loop counter value
        arrayOne[counter] = counter;
        // Fill the second array with the loop counter value squared
        arrayTwo[counter] = counter * counter;
    }
    // Loop arrayOne[i] + arrayTwo[i] = arrayThree[i]
    for(counter = 0; counter < 25; counter++){
        arrayThree[counter] = arrayOne[counter] + arrayTwo[counter];
    }

    // Display all three arrays using the format for counter; element + element = element
    cout << setw(4) << "counter; element + element = element" << endl;
    for(counter = 0; counter < 25; counter++){
        cout << setw(7) << counter << "; " << setw(7) << arrayOne[counter] << " + " << setw(7) << arrayTwo[counter] << " = " << arrayThree[counter] << endl;
    }

}