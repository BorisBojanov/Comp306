/*
title: Problem2.cpp
description: Print the line of a file, wait fo ruser input, then print the next line.
Date: 24 November 2024
author: Boris Bojanov
version: 1.0
Copyright: Boris Bojanov 2024

Documentation:
Problem 2
Write a program that opens a (text) file and displays the contents of that file one line at a time. 
You must obtain the name of the input file for this program via prompt and user input, not via command line arguments.

After a line has been displayed, the program should wait for the user to press the <Enter> key before displaying the next line in the file.

As with Problem 1, you may test your program on any number of text files; 
however, you must be sure to test your program using the Sample Text File provided at the end of this assignment (excerpt.txt).

Compile (assuming Cygwin is running): g++ -o Problem2 Problem2.cpp
Execution (assuming Cygwin is running): ./Problem2

Step 1: Prompt the User for the File Name
    Use cin to get the file name from the user.
    Validate the input to ensure it is non-empty.
Step 2: Open the File
    Use ifstream to open the file.
    Check if the file was successfully opened. If not, display an error message and exit.
Step 3: Read the File Line by Line
    Use getline() to read the file line by line.
Step 4: Display Each Line
    Print the current line to the console.
Step 5: Wait for User Input
    After printing a line, wait for the user to press <Enter> before continuing to the next line.
Step 6: Handle End of File
    When the file ends, gracefully exit the program.
Step 7: Error Handling
    Handle cases like:
    File not found.
    Empty lines in the file.
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string fileName;
    string line;
    cout<< "Enter the name of the file: ";
    getline(cin, fileName);

    ifstream file(fileName);
    // Check if the file was successfully opened
    if (!file) {
        cout << "Error: Unable to open file." << endl;
        return 1;
    }
    // Read Line by Line and Display
    while (std::getline(file, line)){
        cout << line << endl;
        // Wait for User to Press <Enter>
        cout << "Press <Enter> to continue..." << endl;
        cin.get();
    }
    cout << "End of file reached." << endl;
    file.close();
    return 0;
}