/*
tile: Book.h
description:
Header file provides declarations to ensure the compiler knows about the existence and interfaces of these entities.
This is the header file for the Book class.
This class is used to declare Book objects that have the following attributes:
title, 
ISBN number, 
author, 
edition, 
publisher, 
year of publication.
Date: 05, November 2024
Author: Boris B
Version: 1.0
Copyright: BorisB 2024

DOCUMENTATION
Program Purpose:
The class should have get and set methods for each attribute.
The class should have a default constructor and a constructor with parameters.
The class methods are declare here and implemented in Book.cpp.
The class attributes are declare as private variables and can be accessed using the get and set methods.

Compile: This file is to be included in Book.cpp and Problem2.cpp
Execution: This file is not executable

Classes:
Book - class for creating Book objects

Variables:

TEST PLAN
Normal case:
Make sure the header file is implemented correctly by including it in the Book.cpp file. 
Making sure that all methods are declared correctly.

*/

#ifndef BOOK_H
#define BOOK_H

#include <string>
#include <vector>

using namespace std;

class Book {
private:
    // Attributes
    string titleInstance;
    string ISBNInstance;
    string authorInstance;
    string editionInstance;
    string publisherInstance;
    string yearOfPublicationInstance;

    // Methods
    
public:
    // Constructors
    Book();
    //title, ISBN number, author, edition, publisher, and year of publication.
    Book(string title, string ISBN, string author, string edition, string publisher, string yearOfPublication);
    // Attributes

    // Methods
    // Get Methods
    string getTitle() const;
    string getISBN() const;
    string getAuthor() const;
    string getEdition() const;
    string getPublisher() const;
    string getYearOfPublication() const;

    // Set Methods
    void setTitle(string title);
    void setISBN(string ISBN);
    void setAuthor(string author);
    void setEdition(string edition);
    void setPublisher(string publisher);
    void setYearOfPublication(string yearOfPublication);

};


#endif // BOOK_H