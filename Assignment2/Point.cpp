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

Compile
Execute

Classes: Point

Variables:
    x - double - x coordinate of point
    y - double - y coordinate of point

Methods:
    Point() - constructor
    Point(double IncommingX, double IncommingY) - constructor
    ~Point() - destructor

TEST PLAN
Normal case:
*/

#include "Point.h"

// Constructor
Point::Point() : x(0), y(0) { // initializes x and y to 0
    this->x = 0;
    this->y = 0;
}

Point::Point(double IncommingX, double IncommingY) : x(IncommingX), y(IncommingY) { // initializes x and y to given values
    this->x = IncommingX;
    this->y = IncommingY;
    }

// Destructor
Point::~Point() {
    cout << "Point destructor" << endl;
}

// Get Methods

double Point::show() {
    cout << "x: " << x << " y: " << y << endl;
    return x, y;
}

// Set Methods

void Point::add(double IncommingX, double IncommingY) {
    this->x += IncommingX;
    this->y += IncommingY;

}

void Point::subtract(double IncommingX, double IncommingY) {
    this->x -= IncommingX;
    this->y -= IncommingY;

}