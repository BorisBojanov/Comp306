/*
title: Circle.cpp
description: Create a class to represent a circle with a center point and a radius
date: 8, November, 2024
author: Boris B
version: 1.0
Copyright: Boris B 2024

DOCUMENTATION
Program Purpose:
Create a class to represent a circle with a center point and a radius.
Implement methods to calculate the area and circumference of the circle.
Implement a method to calculate the bounding box of the circle.

Compile:
This file is meant to be compiled with Problem5.cpp:  
Execute:
./Problem5

Classes:
Circle - class for a circle

Variables:

Methods:

TEST PLAN

Discussion:
Avoiding ambiguity for the compiler.
You need to explicitly construct the vector in a way that the compiler correctly recognizes.
Base Class Initialization:
The Shape base class expects a std::vector<Point> in its constructor. Using std::vector<Point>(1, centerVal) explicitly creates a vector with one element initialized to centerVal.
This avoids ambiguity in the initializer list and ensures the compiler correctly identifies the type.
*/

#include "Circle.h"

// Constructor
Circle::Circle(double radiusVal, const Point& centerVal) 
    : radius(radiusVal), center(centerVal) {
}

// Destructor
Circle::~Circle() {
}

// Get Methods
double Circle::getArea() const { // Area = pi * r^2
    return 3.14159 * radius * radius;
}

double Circle::getCircumference() const { // Circumference = 2 * pi * r
    return 2 * 3.14159 * radius;
}

void Circle::getBoundingBox() const { // Bounding box is a rectangle with sides 2r and 2r
    Point topLeft(center.getX() - radius, center.getY() + radius);
    Point topRight(center.getX() + radius, center.getY() + radius);
    
    cout << "Bounding box for circle with center at (" << center.getX() << ", " << center.getY() << ") and radius " << radius << " is: " << endl;
    cout << "Top left corner: (" << center.getX() - radius << ", " << center.getY() + radius << ")" << endl;
    cout << "Top right corner: (" << center.getX() + radius << ", " << center.getY() + radius << ")" << endl;
    cout << "Bottom left corner: (" << center.getX() - radius << ", " << center.getY() - radius << ")" << endl;
    cout << "Bottom right corner: (" << center.getX() + radius << ", " << center.getY() - radius << ")" << endl;

}

