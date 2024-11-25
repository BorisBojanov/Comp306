/*
title: Point.cpp
description: Create a class to represent a point with x and y coordinates
date: 8, November, 2024
author: Boris B
version: 1.0
Copyright: Boris B 2024

DOCUMENTATION
Program Purpose:
Create methods show(), add() and subtract() 
to display the Point x and y values,
and add and subtract point coordinates.

Compile:
This file is meant to be compiled with Problem5.cpp:  
Execute:
./Problem5

Classes: 
Point - class for adding and subtracting points to a ?list?/?Array?/?Vector? of points

Variables:
    x - double - x coordinate of point
    y - double - y coordinate of point

Methods:
    Point() - constructor
    Point(double xVal, double yVal) - constructor
    ~Point() - destructor

TEST PLAN
Normal case:
*/

#include "Point.h"

using namespace std;

// Constructor
Point::Point() : x(0), y(0) { // initializes x and y to 0
}

Point::Point(double xVal, double yVal) : x(xVal), y(yVal) { // initializes x and y to given values
    }

// Destructor
Point::~Point() {
}

// Get Methods
double Point::getX() const {
    return x;
}

double Point::getY() const {
    return y;
}

double Point::show() const { 
    cout << "x: " << x << " y: " << y << endl;
    return 0;
}

// Set Methods

void Point::add(double xVal, double yVal) { // Store the new values in the history vectors
    x += xVal;
    y += yVal;    
}

void Point::subtract(double xVal, double yVal) {
    x -= xVal;
    y -= yVal;
}