/*
title: TextFileReader.cpp
description: Implementation file for TextFileReader class
Date: 24 November 2024
author: Boris Bojanov
version: 1.0
Copyright: Boris Bojanov 2024

DOCUMENTATION
Program Purpose:
This file contains the implementation of the TextFileReader class.

Compile:
This file is not meant to be compiled on its own. It is an implementation file.

Class: TextFileReader
    The TextFileReader class contains an instance variable consisting of an array of 100 elements.
    TextFileReader has two constructors: a default constructor and a constructor that takes a String argument that represents the name of a text file to be opened and read into the array of Strings.
    
    The default constructor does not really do anything on its own. 
    If the second constructor is used, it will open the file and read the contents of the file into the array of Strings.

Methods:
    contents() converts the array of Strings into a single StringBuffer, which is then returned to the calling program.
    display() prints the array to standard output using the format line #: <string>, where # is the actual line number and <string> is the stored string.

Variables:
    textArray: an array of 100 elements to store the lines of the text file.
    arrayCounter: an integer to keep track of the number of lines read into the array.

*/

#include "TextFileReader.h"

// Default constructor
TextFileReader::TextFileReader(){
    arrayCounter = 0;
}

// Constructor with file name
TextFileReader::TextFileReader(string fileName){
    arrayCounter = 0;
    string line;
    ifstream file(fileName);
        // Check if the file was successfully opened
    if (!file) {
        cout << "Error: Unable to open file." << endl;
    }

    // Read Line by Line and Store in Array
    while (getline(file, line) && arrayCounter < 100) {
        //Assign the line with the arrayCounter index to the textArray
        textArray[arrayCounter] = line;
        arrayCounter++;
    }

}

// Destructor
TextFileReader::~TextFileReader(){
    // No dynamic memory allocation, nothing to delete
}

// Convert the array of Strings into a single StringBuffer
string TextFileReader::contents(){
    string content;
    for (int i = 0; i < arrayCounter; i++){
        content += textArray[i] + "\n";
    }
    return content;
}

// Print the array to standard output
void TextFileReader::display(){
    for (int i = 0; i < arrayCounter; i++){
        cout << "line " << i + 1 << ": " << textArray[i] << endl;
    }
}