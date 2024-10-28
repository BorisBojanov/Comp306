/*
Assignment1Problem4.cpp

Title: Assignment 1 Problem 4
Description: C++ help menue
Date: September 26 2024
Author: Boris Bojanov
Version: 1.0
Copyright: 2024 Boris Bojanov

DOCUMENTATION

Program Purpose:
    The program will include a looping structure to both receive user input and process it until the user wishes to quit. 
    It will use a switch structure to handle the input and display the appropriate help information.
    Your program includes help for the following C++ terms:

    if
    switch
    for
    while
    do–while

    Here is a sample output from the program:

    C++ Help Menu
    Select Help on:
    1. If
    2. Switch
    3. For
    4. While
    5. Do-while
    x. Exit

    Selection: 3

    for: . . .definition. . .

    C++ Help Menu
    Select Help on:
    1. If
    2. Switch
    3. For
    4. While
    5. Do-while
    x. Exit

    Selection: x

    Thank you. Good bye.

    Compile (assuming Cygwin is running): g++ -o Assignment1Problem4 Assignment1Problem4.cpp
    Execution (assuming Cygwin is running): ./Assignment1Problem4.exe

    Classes: none

    Variables:
        input - string - used to store the user's input
        validInput - bool - used to store the validity of the user's input
        target - int - used to store the user's input as an integer
        help - string - used to store the help information for the user's input
    
    TEST PLAN

    normal case:
        >C++ Help Menu
        >Select Help on:
        >1. If
        >2. Switch
        >3. For
        >4. While
        >5. Do-while
        >x. Exit
        >Selection: 3

        >for: for loop is used to execute a block of code a specified number of times. It is known as a definite loop because the number of times the block of code is executed is known. 
        >Syntax: 
        >for (initialization; condition; increment/decrement) { 
        >// block of code to be executed 
        >}

        >C++ Help Menu
        >Select Help on:
        >1. If
        >2. Switch
        >3. For
        >4. While
        >5. Do-while
        >x. Exit
        >Selection: x

        >Thank you. Good bye.
    
    bad data case 1 (input is not a number):
        >C++ Help Menu
        >Select Help on:
        >1. If
        >2. Switch
        >3. For
        >4. While
        >5. Do-while
        >x. Exit
        >Selection: a

        >Invalid input. Please enter a number between 1 and 5 or x to exit.
    
    bad data case 2 (input is a number but not between 1 and 5):
        >C++ Help Menu
        >Select Help on:
        >1. If
        >2. Switch
        >3. For
        >4. While
        >5. Do-while
        >x. Exit
        >Selection: 6

        >Invalid input. Please enter a number between 1 and 5 or x to exit.
    
    bad data case 3 (input is not the string x):
        >C++ Help Menu
        >Select Help on:
        >1. If
        >2. Switch
        >3. For
        >4. While
        >5. Do-while
        >x. Exit
        >Selection: x

        >Invalid input. Please enter a number between 1 and 5 or x to exit.
    
*/
#include "Assignment1Problem4.h"
using namespace std;


// Function to convert a string to lowercase
string toLowerCase(string str) {
    for (int i = 0; i< str.length(); i++) {
        str[i] = tolower(str[i]);
    }
    return str;
}
// Function to check if input is a valid number
bool isValidNumber(string target) {
    int Count = 0;
    for (char c : target) {
        if (c == '.') {
            Count++;
            if (Count >1) return false;
        } else if (!isdigit(c) && c != '-' && c != '+') {
            return false;
        } 
    }
    return true;
}

string getHelp (int target) {
    string help;
    switch (target)
    {
    case 1:
        help = "if: if statement is used to execute a block of code only if a condition is true. \nSyntax: \nif (condition) { \n// block of code to be executed if the condition is true \n}";
        return help;
        break;
    case 2:
        help = "switch: switch satement is used to select one of many code blocks to execute. It is often seen as a more memory efficient way to impliment a multiple choice system. \nSyntax: \nswitch(expression) { \ncase x: \n// code block \nbreak; \ncase y: \n// code block \nbreak; \ndefault: \n// code block \n}";
        return help;
        break;
    case 3:
        help = "for: for loop is used to execute a block of code a specified number of times. It is known as a definite loop because the number of times the block of code is executed is known. \nSyntax: \nfor (initialization; condition; increment/decrement) { \n// block of code to be executed \n}";
        return help;
        break;
    case 4:
        help = "while: while loop is used to execute a block of code as long as the condition is true. It is known as a pretest loop because the condition is tested before the block of code is executed. \nSyntax: \nwhile (condition) { \n// block of code to be executed \n}";
        return help;
        break;
    case 5:
        help = "do-while: do-while loop is used to execute a block of code as long as the condition is true. It is known as a posttest loop because the condition is tested after the block of code is executed. \nSyntax: \ndo { \n// block of code to be executed \n} while (condition);";
        return help;
        break;
    default:
        return "Invalid input. Please enter a number between 1 and 5 or x to exit.";
    }
}

int main(){
    std::string input;
    bool validInput = false;

    while (!validInput) {
        // print the help menu
        cout << "C++ Help Menu \n";
        cout << "Select Help on: \n";
        cout << "1. If \n";
        cout << "2. Switch \n";
        cout << "3. For \n";
        cout << "4. While \n";
        cout << "5. Do-while \n";
        cout << "x. Exit" << "\n";
        cout << "\n" << "Selection: ";

        // Get user input
        cin >> input;

        // if input is a number and is between 1 and 5
        // call the getHelp function and print the returned string
        // if input is the string x, exit the program
        // else print "invalid input"
        if (isValidNumber(input)) {
            int target = stoi(input);
            if (target >= 1 && target <= 5) {
                cout << getHelp(target) << endl;
            } else {
                cout << "Invalid input. Please enter a number between 1 and 5 or x to exit." << endl;
            }
        } else if (toLowerCase(input) == "x") {
            cout << "Thank you. Good bye." << endl;
            validInput = true;
        } else {
            cout << "Invalid input. Please enter a number between 1 and 5 or x to exit." << endl;
        }
    }

    return 0;
}