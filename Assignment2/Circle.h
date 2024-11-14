/*
title: Circle.h
description: Declare the Circle class. 
date: 8, November, 2024
author: Boris B
version: 1.0
Copyright: Boris B 2024

DOCUMENTATION
Program Purpose:
Declare the Circle class.
constructors whose arguments will initialize the shapes-
 appropriately using the correct number of Point objects.
Circle requires a Point center and a radius

Compile:
This file is not meant to be compiled it is a header file.

Classes:
Circle - class for a circle

*/

#ifndef CIRCLE_H
#define CIRCLE_H

#include <iostream>
#include <cmath>
#include "Shape.h"

using namespace std;

class Circle : public Shape {
    private: // Only the class has access to these attributes.
        Point center;
        double radius;
    public: // Other have access to these attributes
        // Constructor that initializes radius and center point
        Circle(double radius, const Point& center);
        // Destructor
        ~Circle();
        // Methods
        double getArea() const;
        double getCircumference() const;
        void getBoundingBox() const;
};

#endif // CIRCLE_H