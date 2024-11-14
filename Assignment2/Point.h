/*
Title: Point.h
Description: Create a class to represent a point with x and y coordinates
Date: 8, November, 2024
Author: Boris B
Version: 1.0
Copyright: Boris B 2024

DOCUMENTATION
program purpose:
    Create a class to represent a point with x and y coordinates

Compile
Execute

Classes: 
    Point - class for adding and subtracting points to a ?list?/?Array?/?Vector? of points

Variables:
    x - double - x coordinate of point
    y - double - y coordinate of point

Methods:

TEST PLAN
Normal case:

Discussion:
vector<double>listOfCoordinatesX(); is a function declaration
vector<double>listOfCoordinatesX; is initializing the vector
*/

#ifndef POINT_H
#define POINT_H

#include <iostream>
#include <string>
#include <cmath>
#include <vector>

using namespace std;

class Point {
    private:
    double xVal, yVal;

    protected:
    double x, y;
    // Variables
    vector<double>listOfCoordinatesX; 
    vector<double>listOfCoordinatesY;

    public:

    // Constructors
    Point(); 
    
    Point(double xVal, double yVal);

    // Destructor
    ~Point();

    // Get Methods
    double getX() const;
    double getY() const;

    double show() const;

    // Set Methods
    void add(double xVal, double yVal); // add point coordinates
    void subtract(double xVal, double yVal); // subtract point coordinates
};

#endif // POINT_H