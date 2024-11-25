
/*
Title: Triangle.h
Description: Implemets the Triangle class.
Date: 8, November, 2024
Author: Boris B
Version: 1.0    
Copyright: Boris B 2024

DOCUMENTATION
Program Purpose:
    Implement the Triangle class. 
    constructors whose arguments will initialize the shapes-
    appropriately using the correct number of Point objects.
    Triangle requires three Point objects.

Compile:
This file is meant to be compiled with Problem5.cpp:  
Execute:
./Problem5

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

#include "Triangle.h"

using namespace std;

// Constructor
Triangle::Triangle(const vector<Point> points) {
    point1 = points[0];
    point2 = points[1];
    point3 = points[2];
} 

// Destructor
Triangle::~Triangle() {
}

// Get Methods
double Triangle::getArea() const { // Area = 1/2 * base * height
    double base = sqrt(pow(point2.getX() - point1.getX(), 2) + pow(point2.getY() - point1.getY(), 2));
    double height = sqrt(pow(point3.getX() - point2.getX(), 2) + pow(point3.getY() - point2.getY(), 2));
    return 0.5 * base * height;
}

double Triangle::getCircumference() const { // Circumference = sum of all sides
    double side1 = sqrt(pow(point2.getX() - point1.getX(), 2) + pow(point2.getY() - point1.getY(), 2));
    double side2 = sqrt(pow(point3.getX() - point2.getX(), 2) + pow(point3.getY() - point2.getY(), 2));
    double side3 = sqrt(pow(point1.getX() - point3.getX(), 2) + pow(point1.getY() - point3.getY(), 2));
    return side1 + side2 + side3;
}

void Triangle::getBoundingBox() const { // Bounding box is a rectangle with sides equal to the max and min x and y values
    double minX = min(min(point1.getX(), point2.getX()), point3.getX());
    double minY = min(min(point1.getY(), point2.getY()), point3.getY());
    double maxX = max(max(point1.getX(), point2.getX()), point3.getX());
    double maxY = max(max(point1.getY(), point2.getY()), point3.getY());
    
    Point topLeft(minX, maxY);
    Point topRight(maxX, maxY);
    Point bottomLeft(minX, minY);
    Point bottomRight(maxX, minY);
    
    cout << "Bounding box for triangle with points at: ";
    point1.show();
    point2.show();
    point3.show();
    cout << "is: " << endl;
    cout << "Top left corner: ";
    topLeft.show();
    cout << "Top right corner: ";
    topRight.show();
    cout << "Bottom left corner: ";
    bottomLeft.show();
    cout << "Bottom right corner: ";
    bottomRight.show();
}

