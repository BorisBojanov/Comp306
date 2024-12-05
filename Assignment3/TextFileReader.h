/*
title : TextFileReader.h
description: Header file for TextFileReader.cpp
Date: 24 November 2024
author: Boris Bojanov
version: 1.0
Copyright: Boris Bojanov 2024

DOCUMENTATION
Program Purpose:
This header file contains the class definition for TextFileReader.

Compile:
This file is not meant to be compiled it is a header file.

Class: TextFileReader
    The TextFileReader class contains an instance variable consisting of an array of 100 elements.
    TextFileReader has two constructors: a default constructor and a constructor that takes a String argument that represents the name of a text file to be opened and read into the array of Strings.
    
    The default constructor does not really do anything on its own. 
    If the second constructor is used, it will open the file and read the contents of the file into the array of Strings.

Methods:
    TextFileReader has two member functions: contents() and display().

    contents() converts the array of Strings into a single StringBuffer, which is then returned to the calling program.
    display() prints the array to standard output using the format line #: <string>, where # is the actual line number and <string> is the stored string.

Variables:
    textArray: an array of 100 elements to store the lines of the text file.
    arrayCounter: an integer to keep track of the number of lines read into the array.

TESTING PLAN
*/

#ifndef TEXTFILEREADER_H
#define TEXTFILEREADER_H

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class TextFileReader{
    private:
        string textArray[100];
        int arrayCounter;
    public:
        TextFileReader();
        TextFileReader(string fileName);
        ~TextFileReader();
        string contents();
        void display();
};
#endif // TEXTFILEREADER_H