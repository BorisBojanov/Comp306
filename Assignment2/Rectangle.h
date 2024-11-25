/*
Title: Rectangle.h
description: Declaration of the Rectangle class
date: 8, November, 2024
author: Boris B
version: 1.0
Copyright: Boris B 2024

DOCUMENTATION
Program Purpose:
Create a rectangle class to represent a rectangle with four points

Compile:
This file is not meant to be compiled it is a header file.

Class Description
Rectangle - class for a rectangle

Variables:
topLeft - Point - top left corner of the rectangle
topRight - Point - top right corner of the rectangle
bottomLeft - Point - bottom left corner of the rectangle
bottomRight - Point - bottom right corner of the rectangle

Methods:
Rectangle(const vector<Point> points) - constructor
~Rectangle() - destructor
getArea() - calculate the area of the rectangle
getCircumference() - calculate the circumference of the rectangle
getBoundingBox() - calculate the bounding box of the rectangle

Test Plan:
normal case:
Tested in the main program.
*/

#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"

using namespace std;

class Rectangle : public Shape {
    private: // Only the class has access to these attributes.
        Point topLeft;
        Point topRight;
        Point bottomLeft;
        Point bottomRight;
    public: // Other have access to these attributes
        // Constructor that initializes radius and center point
        Rectangle(const vector<Point> points);
        // Destructor
        ~Rectangle();
        // Methods
        double getArea() const;
        double getCircumference() const;
        void getBoundingBox() const;
};




#endif // RECTANGLE_H