/*
Assignment1Problem1.cpp

Title: Assignment1Problem1.cpp
Description: Multiplication Table
Date: September 26 2024
Author: Boris Bojanov
Version: 1.0
Copyright: 2024 Boris Bojanov


DOCUMENTATION
    Program Purpose:
        Display a multiplication table from 1 to 12.

    Compile (assuming Cygwin is running): g++ -o Assignment1Problem1 Assignment1Problem1.cpp
    Execution (assuming Cygwin is running): ./Assignment1Problem1.exe

    Classes: none

    Variables:
        i - int - used to iterate through the rows of the multiplication table
        j - int - used to iterate through the columns of the multiplication table
    
    TEST PLAN
        Make sure the output matches the format specified in the problem description.
    

*/
#include "Assignment1Problem1.h"
using namespace std;

void MultiplicationTable() {
    int i, j; // Declare loop variables

    // Print top row (header)
    cout << setw(5) << " :)"; // Top-left empty corner, adding a smiley face to amuse the user.
    for (j = 1; j <= 12; j++) {
        cout << setw(4) << j << "|"; // Print header row (1 to 12)
    }
    cout << endl;

    // Print each row with row label and multiplication products
    for (i = 1; i <= 12; i++) {
        cout << setw(4) << i << "|"; // Print left column (row labels)

        for (j = 1; j <= 12; j++) {
            cout << setw(4) << i * j << "|"; // Print multiplication result
        }
        cout << endl;
    }
}

int main() {
    MultiplicationTable();
    return 0;
}
