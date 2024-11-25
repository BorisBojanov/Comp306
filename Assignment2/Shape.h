/*
title: Shape.h
description: Declare the Shape class.
date: 8, November, 2024
author: Boris B
version: 1.0
Copyright: Boris B 2024

DOCUMENTATION
Program Purpose:
Declare the Shape class. 
The Shape class will contain default functions to calculate 
area and circumference of the shape,
Derive classes will override these functions to provide the correct calculations for the specific shape.
Circle, Rectangle and Triangle.

Compile:
This file is not meant to be compiled it is a header file.

Classes:
Shape - class for a shape

Variables:
points - vector<Point> - vector of points that make up the shape


Methods:
display() - which will display the name of the class and all stored information about the class 
including (area, circumference and bounding box).
getArea() - calculate the area of the shape
getCircumference() - calculate the circumference of the shape
getBoundingBox() - calculate the bounding box of the shape

TEST PLAN
normal case:
Tested in the main program.

*/

#ifndef SHAPE_H
#define SHAPE_H

#include "Point.h"

#include <iostream>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

class Shape {
    protected: // Only the class and derived class has access to these attributes.
        vector<Point> coordinates;
    public: // Other have access to these attributes
        
        // Default Constructor
        Shape();
        // Virtual Destructor
        virtual ~Shape();
        // Methods
        void display();
        // Virtual functions to be implimented by derived classes.
        virtual double getArea() const;
        virtual double getCircumference() const;
        virtual void getBoundingBox() const;
        
};

#endif // SHAPE_H