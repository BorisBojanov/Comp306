/*
title: Shape.cpp
description: Create a class to represent a shape with a vector of points
date: 8, November, 2024
author: Boris B
version: 1.0
Copyright: Boris B 2024

DOCUMENTATION
Program Purpose:
Create a class to represent a shape with a vector of points.
the basis of a set of shapes.
The Shape class will contain default functions to calculate area and circumference of the shape, 
and provide the coordinates (Points) of a rectangle that encloses the shape (a bounding box). 
These will be overloaded by the derived classes; therefore, 
the default methods for Shape will only print a simple message to standard output.

Compile:
This file is meant to be compiled with Problem5.cpp:  
Execute:
./Problem5
Classes:
Shape - class for a shape

Variables:
points - vector<Point> - vector of points that make up the shape

*/

#include "Shape.h"

using namespace std;

// Constructors
Shape::Shape() {
}

// Destructor
Shape::~Shape() {
}

// Default getArea method
double Shape::getArea() const {
    cout << "Calculating area is not defined for Shape." << endl;
    return 0;
}

// Default getCircumference method
double Shape::getCircumference() const {
    cout << "Calculating circumference is not defined for Shape." << endl;
    return 0;
}

// Default getBoundingBox method
void Shape::getBoundingBox() const {
    cout << "Calculating bounding box is not defined for Shape." << endl;

}
// Display method
void Shape::display() {
    cout << "Shape" << endl;
    cout << "Area: " << getArea() << endl;
    cout << "Circumference: " << getCircumference() << endl;
    cout << "Bounding Box: ";
    getBoundingBox();
}