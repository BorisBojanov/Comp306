/*
title: Comparator
description: Contains a Comparator class that compares two Book objects
date: 24 November 2024
author: Boris Bojanov
version: 1.0
copyright: Boris Bojanov 2024

DOCUMENTATION
Program Purpose:
Create a Comparator class that compares two Book objects.

Compile: This file is to be included in BookShelf.cpp

Classes:
Comparator - class for comparing two Book objects

Variables:

Methods:
compareTo - bool - compare two Book objects

TEST PLAN
Normal case:
Make sure the Comparator class is implemented correctly by calling the compareTo method outside of the class.
*/

#ifndef COMPARATOR_H
#define COMPARATOR_H

#include <iostream>
#include <string>
#include <vector>
#include <algorithm> //Provide a custom comparator using a lambda function or the Comparator class.
#include "Book.h"

using namespace std;

class Comparator {
public:
    // Constructor
    Comparator();
    // This method should make a two-step comparison and return a Boolean value
    bool compareTo(Book book1, Book book2);
};
#endif // COMPARATOR_H