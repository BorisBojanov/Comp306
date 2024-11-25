/*
Title: Triangle.h
Description: Declare the Triangle class.
Date: 8, November, 2024
Author: Boris B
Version: 1.0    
Copyright: Boris B 2024

DOCUMENTATION
Program Purpose:
    Declare the Triangle class. 
    constructors whose arguments will initialize the shapes-
    appropriately using the correct number of Point objects.
    Triangle requires three Point objects.

Compile:
This file is not meant to be compiled it is a header file.

Classes:
Circle - class for a circle

Variables:
point1 - Point - first point of the triangle
point2 - Point - second point of the triangle
point3 - Point - third point of the triangle

Methods:
getArea() - calculate the area of the shape
getCircumference() - calculate the circumference of the shape
getBoundingBox() - calculate the bounding box of the shape

TEST PLAN
normal case:
Tested in the main program.
*/

#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Shape.h"

using namespace std;

class Triangle : public Shape {
    private: // Only the class has access to these attributes.
        Point point1;
        Point point2;
        Point point3;
    public: // Other have access to these attributes
        // Constructor that initializes radius and center point
        Triangle(const vector<Point> points);
        // Destructor
        ~Triangle();
        // Methods
        double getArea() const;
        double getCircumference() const;
        void getBoundingBox() const;
};

#endif // TRIANGLE_H