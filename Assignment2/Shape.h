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
*/

#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
#include <vector>
#include "Point.h"

using namespace std;

class Shape {
    protected: // Only the class and derived class has access to these attributes.
        vector<Point> coordinates;
    public: // Other have access to these attributes
        
        // Constructor to initialize shape with a set of points
        Shape(const vector<Point>& points);
        // Virtual Destructor
        virtual ~Shape();
        // Methods
        // Virtual functions to be implimented by derived classes.
        virtual double getArea() const;
        virtual double getCircumference() const;
        virtual void getBoundingBox() const; 

};

#endif // SHAPE_H