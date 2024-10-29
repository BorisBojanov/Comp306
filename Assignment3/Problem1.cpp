/*
Problem1.cpp
Description:
Write a program that opens a file and counts the whitespace-separated words in that file. 
You may obtain the name of the input file either from the command line or via prompt and user input.
Be sure to clearly document the method chosen.

You may test your program using any number of text files; however, you must be sure to test your program using the Sample Text File provided at the end of this assignment (excerpt.txt). 
This file is also available in the Assessment section of the course home page.

Date: 2021-11-28
Author: Boris Bojanov 
Version: 1.0
Copyright: Boris Bojanov
*/

/*
DOCUMENTATION

Program Purpose:
    Count the whitespace-separated words in a file.

Compile (assuming Cygwin is running): g++ -o Problem1 Problem1.cpp
Execution (assuming Cygwin is running): ./Problem1.exe

Classes: TBD

Variables:
    fileName - String - used to store the name of the file. 
    count - int - used to store the number of, whitespace-separated, words in the file.
*/

/*
TEST PLAN

Normal case:
    >Enter the name of the file: excerpt.txt
    >The number of "whitespace-separated words" in the file is (Count of white spaces).
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string fileName;
    int count = 0;
    cout << "Enter the name of the file: ";
    cin >> fileName;
    ifstream file(fileName);
    string word;
    while (file >> word) {
        count++;
        cout << word << endl;
    }
    cout << "The number of \"whitespace-separated words\" in the file is " << count << endl;
return 0;
}
