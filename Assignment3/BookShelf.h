/*
title: BookShelf.h
description: Header file provides declarations for the BookShelf class.
author: Boris Bojanov
version: 1.0
copyright: Boris Bojanov 2024

DOCUMENTATION
Program Purpose:
Contains only a main() method
The class should have a main method that creates a dozen (12) Book objects with distinct attributes and stores them in an ArrayList of Books.

Compile: This file is to be included in Problem5.cpp

Classes:
BookShelf - class for creating BookShelf objects

Variables:
bookList - vector<Book> - ArrayList of Books

Methods:
main - vector<Book> - create a dozen (12) Book objects with distinct attributes and add them to the ArrayList of Books

TEST PLAN
Normal case:
Make sure the BookShelf class is implemented correctly by calling the main method outside of the class.
*/

#ifndef BOOKSHELF_H
#define BOOKSHELF_H

#include <iostream>
#include <string>
#include <vector>
#include <array>
#include <sstream>
#include "Book.h"

using namespace std;

class BookShelf {
public:
    static vector<Book> main();
};

#endif // BOOKSHELF_H