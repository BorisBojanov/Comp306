/*
title: TextFileReaderDemo.cpp
description:
Date: 24 November 2024
author: Boris Bojanov
version: 1.0
Copyright: Boris Bojanov 2024

Documentation:
Program Purpose:
Problem 3
Write a program in which you create a class called TextFileReader. 
The TextFileReader class must contain an instance variable consisting of an array of 100 elements.

Compile: g++ -o TextFileReaderDemo TextFileReaderDemo.cpp TextFileReader.cpp
Execution: ./TextFileReaderDemo <filename>
           ./TextFileReaderDemo excerpt.txt

TextFileReader should have two constructors: 
    A default constructor and a constructor that takes a String argument that represents the name of a text file to be opened and read into the array of Strings.
    The first (default) constructor does not really do anything on its own. 
    If the second constructor is used, it will open the file and read the contents of the file into the array of Strings, 
    as follows: fill the array by having your program read one line of the file into each string, until you have filled the array. 
    Once the array is full, you may stop reading the input file.


Add a member function contents(), which will convert the array of Strings into a single StringBuffer, 
which is then returned to the calling program so that it may be displayed.

Add a second member function display(), which prints the array to standard output using the format line #: 
<string>, where # is the actual line number and <string> is the stored string. [You can use the array counter for the # value.]

 Do not forget that line numbers for the output should start with 1, not 0.

Now, create a second class TextFileReaderDemo, which contains a main() method used to test TextFileReader. 
Create an instance of TextFileReader using the second constructor, and then call contents() to obtain the file’s text. 
Display the file’s contents to standard output. 
Finally, call display() to output the file’s text together with line numbers, as stated in the display() requirements.

TextFileReaderDemo should use command-line arguments to obtain the text file name supplied to the TextFileReader constructor.

As with Problems 1 and 2, you may test your program on any number of text files; 
however, you must be sure to test your program using the Sample Text File provided at the end of this assignment (excerpt.txt).

TEST PLAN
normal case: ./TextFileReaderDemo excerpt.txt
    Epected: 
    There was nothing so VERY remarkable in that; nor did Alice
    think it so VERY much out of the way to hear the Rabbit say to
    itself, `Oh dear!  Oh dear!  I shall be late!'  (when she thought
    it over afterwards, it occurred to her that she ought to have........

    line 1: There was nothing so VERY remarkable in that; nor did Alice
    line 2: think it so VERY much out of the way to hear the Rabbit say to
    line 3: itself, `Oh dear!  Oh dear!  I shall be late!'  (when she thought
    line 4: it over afterwards, it occurred to her that she ought to have
bad data case 1: ./TextFileReaderDemo <Incorrect file name>
    Expected: Error: Unable to open file.
bad data case 2: ./TextFileReaderDemo 
    Expected: Usage: ./TextFileReaderDemo <filename>

Discussion:
    The TextFileReader class is a simple
    class that reads the contents of a text file into an array of Strings.
    The class is useful for reading the contents of a text file into memory for further processing.
    The class is not meant to be used for large files, as it reads the entire file into memory at once.
    The class is also not meant to be used for binary files, as it reads the file as text.
*/


#include "TextFileReader.h"

// Main function to test the TextFileReader class
int main(int argc, char* argv[]) {
    if (argc != 2) {
        cout << "Usage: " << argv[0] << " <filename>" << endl;
        return 1;
    }

    string fileName = argv[1];
    TextFileReader reader(fileName);
    cout << reader.contents() << endl;
    reader.display();

    return 0;
}