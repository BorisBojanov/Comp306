/*
Problem 4 C++ help menue

The program must include a looping structure to both receive user input and process it until the user wishes to quit. 
Use a switch structure to handle the input and display the appropriate help.

Your program must include help for the following C++ terms:

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
*/ 

using namespace std;
#include <iostream>
#include <string>
#include "NumberValidator.h"

// Function to convert a string to lowercase
string toLowerCase(string str) {
    for (int i = 0; i< str.length(); i++) {
        str[i] = tolower(str[i]);
    }
    return str;
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

    NumberValidator numValidator;
    std::string input;
    bool validInput = false;

    while (!validInput) {
        cout << "C++ Help Menu \n";
        cout << "Select Help on: \n";
        cout << "1. If \n";
        cout << "2. Switch \n";
        cout << "3. For \n";
        cout << "4. While \n";
        cout << "5. Do-while \n";
        cout << "x. Exit" << "\n";
        cout << "\n" << "Selection: " << "\n"  << endl;
        cin >> input;
        // if input is a number and is between 1 and 5
        // call the getHelp function and print the returned
        // if input is the string x, exit the program
        // else print invalid input

        if (numValidator.isValidNumber(input)) {
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