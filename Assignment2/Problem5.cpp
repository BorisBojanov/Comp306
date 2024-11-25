/*
title: Problem5.cpp
description: Create and use Point class, Shape class
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

Compile:
g++ Problem5.cpp Point.cpp Shape.cpp Circle.cpp Triangle.cpp Rectangle.cpp -o Problem5
Execute:
./Problem5

Classes:
Point - class for adding and subtracting points to a ?list?/?Array?/?Vector? of points
Shape - class for a shape
Circle - class for a circle
Rectangle - class for a rectangle
Triangle - class for a triangle

Variables:
x - double - x coordinate of point
y - double - y coordinate of point
points - vector<Point> - vector of points that make up the shape

Methods:
Point() - default constructor
Point(double xVal, double yVal) - constructor

Shape() - default constructor

Circle(double radiusVal, const Point& centerVal) - constructor

Triangle(const vector<Point>& points) - constructor

Rectangle(const vector<Point>& points) - constructor



getArea() - calculate the area of the shape
getCircumference() - calculate the circumference of the shape
getBoundingBox() - calculate the bounding box of the shape
display() - display the name of the class and all stored information about the class including (area, circumference and bounding box).

TEST PLAN
Normal case:
Test the Shape class and its default methods:
    Shape someShape;
    cout << "The area of the shape is: " << someShape.getArea() << endl;
    cout << "The circumference of the shape is: " << someShape.getCircumference() << endl;
    someShape.getBoundingBox();
    Expected result:
    The area of the shape is: Calculating area is not defined for Shape.
    0
    The circumference of the shape is: Calculating circumference is not defined for Shape.
    0
    Calculating bounding box is not defined for Shape.

Test the Circle class and its methods:
    cout << "The area of the circle is: " << circle.getArea() << endl;
    cout << "The circumference of the circle is: " << circle.getCircumference() << endl;
    circle.getBoundingBox();
Expected result:
The area of the shape is: Calculating area is not defined for Shape.
0
The circumference of the shape is: Calculating circumference is not defined for Shape.
0
Calculating bounding box is not defined for Shape.
Shape
Area: 78.5397
Circumference: 31.4159
Bounding Box: Bounding box for circle with center at (6, 2) and radius 5 is: 
Top left corner: (1, 7)
Top right corner: (11, 7)
Bottom left corner: (1, -3)
Bottom right corner: (11, -3)
Shape
Area: 3
Circumference: 10.129
Bounding Box: Bounding box for triangle with points at: x: 6 y: 2
x: 3 y: 5
x: 4 y: 6
is: 
Top left corner: x: 3 y: 6
Top right corner: x: 6 y: 6
Bottom left corner: x: 3 y: 2
Bottom right corner: x: 6 y: 2
Shape
Area: 3
Circumference: 10.129
Bounding Box: Bounding box for triangle with points at: x: 6 y: 2
x: 3 y: 5
x: 4 y: 6
is: 
Top left corner: x: 3 y: 6
Top right corner: x: 6 y: 6
Bottom left corner: x: 3 y: 2
Bottom right corner: x: 6 y: 2
*/

#include "Point.h"
#include "Shape.h"
#include "Circle.h"
#include "Triangle.h"
#include "Rectangle.h"

int main() {
    // Create some points
    Point p1(6, 2);
    Point p2(3, 5);
    Point p3(4, 6);
    Point p4(7, 11);

    // Create a shape with a vector of points
    Shape someShape;

    // Show Default Shape messages for each method in the Shape class
    cout << "The area of the shape is: " << someShape.getArea() << endl;
    cout << "The circumference of the shape is: " << someShape.getCircumference() << endl;
    someShape.getBoundingBox();

    // Create a circle with a center and radius
    Circle circle(5.0, p1);
    circle.display();

    // Create a triangle with three points
    vector<Point> threePoints;
    threePoints.push_back(p1);
    threePoints.push_back(p2);
    threePoints.push_back(p3);

    // Create a triangle with three points
    Triangle triangle(threePoints);
    triangle.display();

    // Create a rectangle with four points
    vector<Point> fourPoints;
    fourPoints.push_back(p1);
    fourPoints.push_back(p2);
    fourPoints.push_back(p3);
    fourPoints.push_back(p4);

    //Create a rectangle with four points
    Rectangle rectangle(fourPoints);
    triangle.display();

    return 0;
}