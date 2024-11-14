/*
title: Problem5.cpp
description: Create and use point class and shape class
date: 8, November, 2024
author: Boris B
version: 1.0
Copyright: Boris B 2024

DOCUMENTATION
Program Purpose:
Create a point class to represent a point with x and y coordinates
Create a shape class to represent a shape with a vector of points. 
The Shape class will contain default functions to calculate area and circumference of the shape, 
and provide the coordinates (Points) of a rectangle that encloses the shape (a bounding box).
These will be overloaded by the derived classes; therefore, 
the default methods for Shape will only print a simple message to standard output.

Discussion:
A vector, once declared, can be resized from anywhere within the program. 
The vector is a dynamic array that can grow or shrink in size as needed.
vectorName.push_back(SomeValue); adds a value to the end of the vector.
*/

#include "Point.h"
#include "Shape.h"

int main() {
    // Create some points
    Point p1(1, 2);
    Point p2(3, 5);
    Point p3(4, 6);
    Point p4(7, 11);
    // Create a vector of four points all the points
    vector<Point> fourPoints;
    fourPoints.push_back(p1);
    fourPoints.push_back(p2);
    fourPoints.push_back(p3);
    fourPoints.push_back(p4);
    // Create a vecotr of two points
    vector<Point> twoPoints;
    twoPoints.push_back(p1);
    twoPoints.push_back(p2);
    // Show all the points in the vector
    cout << "All the points in the vector called fourPoints" << endl;
    for (int i = 0; i < fourPoints.size(); i++) {
        twoPoints[i].show();
    }
    // Create a shape
    Shape s(twoPoints);
    // Show the area of the shape
    cout << "The area of the shape is: " << s.getArea() << endl;
    // Show the circumference of the shape
    cout << "The circumference of the shape is: " << s.getCircumference() << endl;
    // Show the bounding box of the shape
    s.getBoundingBox();
    return 0;
}