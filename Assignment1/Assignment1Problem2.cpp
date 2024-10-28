/*
Assignment1Problem2.cpp

Title: Assignment1Problem2.cpp
Description: Tempeture converter
Date: September 26 2024
Author: Boris Bojanov
Version: 1.0
Copyright: 2024 Boris Bojanov

DOCUMENTATION

Program Purpose:
    Prompts the user to convert from celsius to fahrenheit or fahrenheit to celsius.
    Take input from user and convert it to fahrenheit.
    Take input from user and convert it to celsius.
Formula:
    T(F) = (T(C) * 9 / 5) + 32
    T(C) = (T(F) – 32 ) * 5 / 9
Compile (assuming Cygwin is running): g++ -o Assignment1Problem2 Assignment1Problem2.cpp
Execution (assuming Cygwin is running): ./Assignment1Problem2.exe

Classes: none

Variables:
    inputUnit - string - used to store the user's input for the temperature unit
    inputTemp - string - used to store the user's input for the temperature value
    temperature - double - used to store the temperature value
    validInput - bool - used to store the validity of the user's input
    unit - string - used to store the temperature unit
    celsius - double - used to store the celsius temperature
    fahrenheit - double - used to store the fahrenheit temperature
    Count - int - used to count the number of decimal points in the input

TEST PLAN

Normal case:
    >This program converts Temperatures from Fahrenheit to Celsius and vice versa.
    >Please enter your temperature unit (F for Fahrenheit, C for Celsius): F
    >Please enter the temperature value: 32
    >The temperature in Celsius is: 0

Bad Data case 1 (Invalid unit)
    >This program converts Temperatures from Fahrenheit to Celsius and vice versa.
    >Please enter your temperature unit (F for Fahrenheit, C for Celsius): X
    >Invalid input. Please enter F for Fahrenheit or C for Celsius.

Bad Data case 2 (Invalid temperature value)
    >This program converts Temperatures from Fahrenheit to Celsius and vice versa.
    >Please enter your temperature unit (F for Fahrenheit, C for Celsius): F
    >Please enter the temperature value: 32.5.5
    >Invalid input. Please enter a valid number.
*/
#include "Assignment1Problem2.h"

using namespace std;

// Function to convert a string to lowercase
string toLowerCase(string str) {
    for (int i = 0; i < str.length(); i++) {
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

void TemperatureConverter(string unit, double temperature) {
    if (unit == "f") {
        double celsius = (temperature - 32) * 5 / 9;
        cout << "The temperature in Celsius is: " << celsius << endl;
    } else if (unit == "c") {
        double fahrenheit = (temperature * 9 / 5) + 32;
        cout << "The temperature in Fahrenheit is: " << fahrenheit << endl;
    } else {
        cout << "Invalid unit entered. Please enter F for Fahrenheit or C for Celsius." << endl;
    }
};

int main() {
    string inputUnit;
    string inputTemp;
    double temperature;
    bool validInput = false;

    // Ask user for the temperature unit and validate the input
    while (!validInput){
        cout << "This program converts Temperatures from Fahrenheit to Celsius and vice versa." << endl;
        cout << "Please enter your temperature unit (F for Fahrenheit, C for Celsius): ";
        cin >> inputUnit;

        inputUnit = toLowerCase(inputUnit); // convert the input to lowercase

        if (inputUnit == "f" || inputUnit == "c") {
            validInput = true;
        } else {
            cout << "Invalid input. Please enter F for Fahrenheit or C for Celsius." << endl;
        }
    }

    // Ask user for the temperature value and validate the input
    validInput = false; // Reset the flag for temperature input validation
    // clear the input buffer.
    cin.ignore(); // ignore the newline character from cin

    while (!validInput){
        cout << "Please enter the temperature value: " ;
        cin >> inputTemp;

        if (isValidNumber(inputTemp)) {
            temperature = stod(inputTemp);
            validInput = true; // set the flag to true to exit the loop

        } else {
            cout << "Invalid input. Please enter a valid number." << endl;
        }
    }

    // Call the TemperatureConverter function.
    TemperatureConverter(inputUnit, temperature);

    return 0;
}