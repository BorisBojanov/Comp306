/*
Title: Point.h
Description: Create a class to represent a point with x and y coordinates
Date: 8, November, 2024
Author: Boris B
Version: 1.0
Copyright: Boris B 2024

DOCUMENTATION
program purpose:
    Create a class to represent a point with x and y coordinates
*/

#ifndef POINT_H
#define POINT_H

#include <iostream>
#include <string>
#include <cmath>
#include <vector>

using namespace std;

class Point {
    private:
    double IncommingX, IncommingY;

    protected:
        double x, y;
    public:

    // Constructors
    Point(); 
    
    Point(double IncommingX, double IncommingY);

    // Destructor
    ~Point();

    // Get Methods
    double show();

    // Set Methods
    void add(double x, double y);
    void subtract(double x, double y);
};

#endif // POINT_H