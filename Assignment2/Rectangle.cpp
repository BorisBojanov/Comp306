 /*
Title: Rectangle.cpp
description: Implementation of the Rectangle class
date: 8, November, 2024
author: Boris B
version: 1.0
Copyright: Boris B 2024

DOCUMENTATION
Program Purpose:
Create a rectangle class to represent a rectangle with four points

Compile:
This file is meant to be compiled with Problem5.cpp:
Execute:
./Problem5

Classes:
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

TEST PLAN
normal case:
Tested in the main program.
*/

#include "Rectangle.h"

// Constructor
Rectangle::Rectangle(const vector<Point> points) : topLeft(points[0]), topRight(points[1]), bottomLeft(points[2]), bottomRight(points[3]) {
}

// Destructor
Rectangle::~Rectangle() {
}

// Get Methods
double Rectangle::getArea() const { // Area = length * width
    double width = (topLeft.getX() - topRight.getX() + bottomLeft.getX() - bottomRight.getX());
    double length = (topLeft.getY() - bottomLeft.getY() + topRight.getY() - bottomRight.getY());
    double area = length * width;
}

double Rectangle::getCircumference() const { // Circumference = 2 * (length + width)
    double width = (topLeft.getX() - topRight.getX() + bottomLeft.getX() - bottomRight.getX());
    double length = (topLeft.getY() - bottomLeft.getY() + topRight.getY() - bottomRight.getY());
    double circumference = 2 * (length + width);
}

void Rectangle::getBoundingBox() const { // Bounding box is a rectangle with sides equal to the max and min x and y values
    double minX = min(min(topLeft.getX(), topRight.getX()), min(bottomLeft.getX(), bottomRight.getX()));
    double minY = min(min(topLeft.getY(), topRight.getY()), min(bottomLeft.getY(), bottomRight.getY()));
    double maxX = max(max(topLeft.getX(), topRight.getX()), max(bottomLeft.getX(), bottomRight.getX()));
    double maxY = max(max(topLeft.getY(), topRight.getY()), max(bottomLeft.getY(), bottomRight.getY()));
    
    Point topLeft(minX, maxY);
    Point topRight(maxX, maxY);
    Point bottomLeft(minX, minY);
    Point bottomRight(maxX, minY);
    
    cout << "Bounding box for rectangle with points at: ";
    topLeft.show();
    topRight.show();
    bottomLeft.show();
    bottomRight.show();
    cout << "is: " << endl;
}